#include <iostream>
#include <stdexcept>
#include "matrica.h"

// default construktor
Matrica::Matrica(int rows, int cols):rows(rows),cols(cols) {
    allocateMemory();
}

//copy konstruktor
Matrica::Matrica(const Matrica& other): rows(other.rows), cols(other.cols){
    allocateMemory();
    copyData(other);
}

Matrica::~Matrica(){
    freeMemory();
}


//alociranje na memorija za matrix
void Matrica::allocateMemory(){
    data = new int*[rows];
    for(int i=0;i<rows;i++){
        data[i] = new int[cols]{};
    }
}

//free memory
void Matrica::freeMemory(){
    for(int i=0;i<rows;i++){
        delete[] data[i];
    }
    delete[] data;
}

// kopiranje na data od druga matrica
void Matrica::copyData(const Matrica& other){
    for(int i=0;i<rows; ++i){
        for(int j=0;j<cols;++j){
            data[i][j] = other.data[i][j];
        }
    }
}

// operator =
Matrica& Matrica::operator=(const Matrica& other){
    if(this != &other){
        freeMemory();
        rows = other.rows;
        cols = other.cols;
        allocateMemory();
        copyData(other);
    }
    return *this;
}

//operator +
Matrica Matrica::operator+(const Matrica& other) const{
    if(rows != other.rows || cols != other.cols){
        throw invalid_argument("Matrix dimensions must match for addition.");
    }
    Matrica result(rows, cols);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }
    return result;
}

//operator -
Matrica Matrica::operator-(const Matrica& other) const{
    if(rows != other.rows || cols != other.cols){
        throw invalid_argument("Matrix dimensions must match for addition.");
    }
    Matrica result(rows, cols);
    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;++j){
            result.data[i][j] = data[i][j] - other.data[i][j];
        }
    }
    return result;
}

// operator * matrica
Matrica Matrica::operator*(const Matrica& other) const {
    if (cols != other.rows)
        throw invalid_argument("Invalid dimensions for matrix multiplication.");
    Matrica result(rows, other.cols);
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < other.cols; ++j)
            for (int k = 0; k < cols; ++k)
                result.data[i][j] += data[i][k] * other.data[k][j];
    return result;
}

// operator * integer
Matrica Matrica::operator*(int value) const {
    Matrica result(rows, cols);
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result.data[i][j] = data[i][j] * value;
    return result;
}

// friend funkcija za int * matrix
Matrica operator*(int value, const Matrica& mat) {
    return mat * value;
}

// ==
bool Matrica::operator==(const Matrica& other) const {
    if (rows != other.rows || cols != other.cols)
        return false;
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            if (data[i][j] != other.data[i][j])
                return false;
    return true;
}

// !=
bool Matrica::operator!=(const Matrica& other) const {
    return !(*this == other);
}

// Index operator za non-const objects
int* Matrica::operator[](int index) {
    if (index < 0 || index >= rows)
        throw out_of_range("Index out of range");
    return data[index];
}

// Index operator za const objects
const int* Matrica::operator[](int index) const {
    if (index < 0 || index >= rows)
        throw out_of_range("Index out of range");
    return data[index];
}

// Input operator >>
istream& operator>>(istream& in, Matrica& mat) {
    for (int i = 0; i < mat.rows; ++i)
        for (int j = 0; j < mat.cols; ++j)
            in >> mat.data[i][j];
    return in;
}

// Output operator <<
ostream& operator<<(ostream& out, const Matrica& mat) {
    for (int i = 0; i < mat.rows; ++i) {
        for (int j = 0; j < mat.cols; ++j)
            out << mat.data[i][j] << " ";
        out <<endl;
    }
    return out;
}








