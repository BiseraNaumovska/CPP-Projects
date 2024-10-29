/*
1. Нека е дадена класата Complex со кодовите презентирани подолу (дефиниција на класа, дефиниција на функции цхленки и драјвер за класатa Complex). Оваа класа овозможува операции со комплексни броеви. Тоа се броеви од облик realenDel + imaginarenDel * i, каде i има вредност √1

а) да се модифицира класата така да овозможи влез и излез на комплексни броеви преку преклопување на операторите << и >>. Ова треба да ја замени функцијата print() од класата, која во вашето решение не треба да постои.
б) да се преклопи оператор за множење кој ќе овозможи множење на: два комплексни броја, комплексен со цел број и цел број со комплексен број.
в) да се преклопат операорите == и != кои ќе овозможат споредување на два комплексни броја.
г) да се преклопат операторите +=, -= и *= со помош на ваќе направените функции за преклопување на +, - и *.


// complex1.h
// Definicija na klasata Complex
#ifndef COMPLEX1_H
#define COMPLEX1_H

class Complex {
public:
   Complex( double = 0.0, double = 0.0 );       // konstruktor
   Complex operator+( const Complex & ) const;  // sobiranje
   Complex operator-( const Complex & ) const;  // odzemanje
   const Complex &operator=( const Complex & ); // dodeluvanje
   void print() const;                          // izlez
private:
   double real;       // realen del
   double imaginary;  // imaginaren del
}; // kraj na klasta Complex

#endif


// complex1.cpp
// Definicii na funkciite chlenki na klasata Complex
#include <iostream>

using std::cout;

#include "complex1.h"

// Konstruktor
Complex::Complex( double r, double i )
   : real( r ), imaginary( i ) { }

// Preklopi operator za sobiranje
Complex Complex::operator+( const Complex &operand2 ) const
{
   return Complex( real + operand2.real,
                   imaginary + operand2.imaginary );
} // kraj na funkcijata operator+

// Preklopi operator za odzemanje
Complex Complex::operator-( const Complex &operand2 ) const
{
   return Complex( real - operand2.real,
                   imaginary - operand2.imaginary );
} // kraj na funkcijata operator-

// Preklopi operator =
const Complex& Complex::operator=( const Complex &right )
{
   real = right.real;
   imaginary = right.imaginary;
   return *this;   // ovozmozhuva kaskadiranje
} // ekraj na funkcijata operator=

// Ispechati objekt od klasa Complex vo oblik: (a, b)
void Complex::print() const
   { cout << '(' << real << ", " << imaginary << ')'; }


// p08_06.cpp
// Drajver za klasata Complex
#include <iostream>

using std::cout;
using std::endl;

#include "complex1.h"

int main()
{
   Complex x, y( 4.3, 8.2 ), z( 3.3, 1.1 );

   cout << "x: ";
   x.print();
   cout << "\ny: ";
   y.print();
   cout << "\nz: ";
   z.print();

   x = y + z;
   cout << "\n\nx = y + z:\n";
   x.print();
   cout << " = ";
   y.print();
   cout << " + ";
   z.print();

   x = y - z;
   cout << "\n\nx = y - z:\n";
   x.print();
   cout << " = ";
   y.print();
   cout << " - ";
   z.print();
   cout << endl;

   return 0;
} // kraj main

*/
#include <iostream>
#include "complex1.h"

using namespace std;

int main()
{
    Complex x, y(4.3, 8.2), z(3.3, 1.1);

    cout << "Enter a complex number in the format: real imaginary: ";
    cin >> x;

    cout << "x: " << x << "\ny: " << y << "\nz: " << z << endl;

    x = y + z;
    cout << "\n\nx = y + z:\n" << x << " = " << y << " + " << z << endl;

    x = y - z;
    cout << "\n\nx = y - z:\n" << x << " = " << y << " - " << z << endl;

    x = y * z;
    cout << "\n\nx = y * z:\n" << x << " = " << y << " * " << z << endl;

    cout << "\nComparisons:\n";
    cout << "x == y: " << (x == y ? "true" : "false") << endl;
    cout << "x != y: " << (x != y ? "true" : "false") << endl;

    x += z;
    cout << "\nAfter x += z: " << x << endl;

    x -= y;
    cout << "After x -= y: " << x << endl;

    x *= z;
    cout << "After x *= z: " << x << endl;

    cout << "\nMultiplying a complex number by an integer:\n";
    Complex result1 = y * 3;
    cout << "y * 3 = " << result1 << endl;

    Complex result2 = 3 * z;
    cout << "3 * z = " << result2 << endl;
    return 0;
}
