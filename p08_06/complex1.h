#ifndef COMPLEX1_H
#define COMPLEX1_H
#include <iostream>
using namespace std;
class Complex {
public:
    Complex(double = 0.0, double = 0.0);


    Complex operator+(const Complex &) const;
    Complex operator-(const Complex &) const;
    Complex operator*(const Complex &) const;

    bool operator==(const Complex &) const;
    bool operator!=(const Complex &) const;

    Complex& operator+=(const Complex &);
    Complex& operator-=(const Complex &);
    Complex& operator*=(const Complex &);

    friend ostream& operator<<(ostream &, const Complex &);
    friend istream& operator>>(istream &, Complex &);

    friend Complex operator*(const Complex &, int);
    friend Complex operator*(int, const Complex &);

private:
    double real;
    double imaginary;
};

#endif // COMPLEX1_H
