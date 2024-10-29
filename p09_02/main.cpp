/*
Проект 1:

Да се направи класа Matrica која работи со дводимензионална низа
од цели броеви. Да се преклопат  оператори за влез и екстракција
на потоци, индексен оператор, оператор за собирање, одземање и
множење (низа со низа, низа со цел број и цел број со низа). Да се
преклопат оператори за еднаквост и нееднаквост на низа, копирачки
конструктор, конверзиски конструктор. Да се постави кориснички
изборник за опции во главната програма. Може да се користат колку
сакаме други помошни функции.

*/

#include <iostream>
#include "matrica.h"
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rows >> cols;
    Matrica mat1(rows, cols);

    cout << "Enter the elements of the first matrix:\n";
    cin >> mat1;

    // Input dimensions for the second matrix
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rows >> cols;
    Matrica mat2(rows, cols);

    cout << "Enter the elements of the second matrix:\n";
    cin >> mat2;

    // Matrix addition
    try {
        Matrica sum = mat1 + mat2;
        cout << "The sum of the matrices is:\n" << sum;
    } catch (const invalid_argument& e) {
        cerr << "Error in addition: " << e.what() << '\n';
    }

    // Matrix subtraction
    try {
        Matrica diff = mat1 - mat2;
        cout << "The difference of the matrices is:\n" << diff;
    } catch (const invalid_argument& e) {
        cerr << "Error in subtraction: " << e.what() << '\n';
    }

    // Multiplying a matrix by an integer
    int scalar;
    cout << "Enter an integer to multiply the first matrix: ";
    cin >> scalar;
    Matrica scalarMult = mat1 * scalar;
    cout << "The first matrix multiplied by " << scalar << " is:\n" << scalarMult;

    // Matrix multiplication
    try {
        Matrica product = mat1 * mat2;
        cout << "The product of the matrices is:\n" << product;
    } catch (const invalid_argument& e) {
        cerr << "Error in multiplication: " << e.what() << '\n';
    }
    return 0;
}
