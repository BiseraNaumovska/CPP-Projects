

#include "complex1.h"

Complex::Complex(double r, double i)
    : real(r), imaginary(i) { }

// Preklopi operator za sobiranje
Complex Complex::operator+(const Complex &operand2) const {
    return Complex(real + operand2.real,
                   imaginary + operand2.imaginary);
}

// Preklopi operator za odzemanje
Complex Complex::operator-(const Complex &operand2) const {
    return Complex(real - operand2.real,
                   imaginary - operand2.imaginary);
}

// Preklopi operator za mnozhenje
Complex Complex::operator*(const Complex &operand2) const {
    double newReal = real * operand2.real - imaginary * operand2.imaginary;
    double newImaginary = real * operand2.imaginary + imaginary * operand2.real;
    return Complex(newReal, newImaginary);
}

// Preklopi operator za sporedba ==
bool Complex::operator==(const Complex &operand2) const {
    return (real == operand2.real && imaginary == operand2.imaginary);
}

// Preklopi operator za sporedba !=
bool Complex::operator!=(const Complex &operand2) const {
    return !(*this == operand2);
}

//  +=
Complex& Complex::operator+=(const Complex &operand2) {
    *this = *this + operand2;
    return *this;
}

//  -=
Complex& Complex::operator-=(const Complex &operand2) {
    *this = *this - operand2;
    return *this;
}

//  *=
Complex& Complex::operator*=(const Complex &operand2) {
    *this = *this * operand2;
    return *this;
}

//  << for output
ostream& operator<<(ostream &output, const Complex &c) {
    output << '(' << c.real << ", " << c.imaginary << ')';
    return output;
}

//  >> for input
istream& operator>>(istream &input, Complex &c) {
    input >> c.real >> c.imaginary;
    return input;
}

// object * integer
Complex operator*(const Complex &c, int value) {
    return Complex(c.real * value, c.imaginary * value);
}

// integer * Complex object
Complex operator*(int value, const Complex &c) {
    return Complex(c.real * value, c.imaginary * value);
}
