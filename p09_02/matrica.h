#ifndef MATRICA_H
#define MATRICA_H

#include <iostream>
using namespace std;


class Matrica
{
public:
    Matrica(int rows=0, int cols=0); //default konstruktor
    Matrica(const Matrica& other); //copy konstruktor zima matrica objekt
    ~Matrica(); //destruktor

    //funkcii za preklopuvanje
    friend ostream& operator<<(ostream&, const Matrica&);
    friend istream& operator>>(istream&, Matrica&);

    Matrica& operator=(const Matrica&);

    Matrica operator+(const Matrica&) const;
    Matrica operator-(const Matrica&) const;
    Matrica operator*(const Matrica&) const;
    Matrica operator*(int) const;
    friend Matrica operator*(int, const Matrica&);

    bool operator==(const Matrica&) const;
    bool operator!=(const Matrica&) const;

    int* operator[](int index); // za nekonstantni objekti
    const int* operator[](int index) const; //za konstantni objekti

private:
    int rows, cols;
    int **data;

    void allocateMemory();
    void copyData(const Matrica& other);
    void freeMemory();

};

#endif // MATRICA_H
