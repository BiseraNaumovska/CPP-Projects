// p15_01.cpp
// Test aplikacija za hierarhijata
// oblik, tochka, krug i cilindar.
#include <iostream>

using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>

using std::setprecision;

#include <vector>

using std::vector;

#include "shape.h"     // Definicija na klasata Shape
#include "point.h"     // Definicija na klasata Point
#include "circle.h"    // Definicija na klasata Circle
#include "cylinder.h"  // Definicija na klasata Cylinder

void virtualViaPointer( const Shape * );
void virtualViaReference( const Shape & );

int main()
{
    // postavi realen broen format
    cout << fixed << setprecision( 2 );

    Point point( 7, 11 );                  // sozdadi tochka
    Circle circle( 22, 8, 3.5 );           // sozdadi krug
    Cylinder cylinder( 10, 10, 3.3, 10 );  // sozdadi cilindar

    cout << point.getName() << ": ";    // statichko povrzuvanje
    point.print();                      // statichko povrzuvanje
    cout << '\n';

    cout << circle.getName() << ": ";   // statichko povrzuvanje
    circle.print();                     // statichko povrzuvanje
    cout << '\n';

    cout << cylinder.getName() << ": "; // statichko povrzuvanje
    cylinder.print();                   // statichko povrzuvanje
    cout << "\n\n";

    // sozdadi vektor od tri pokazhuvachi kon osnovnata klasa
    vector< Shape * > shapeVector( 3 );

    // shapeVector[0] dodeli go na objekt od izvedenata klasa Point
    shapeVector[ 0 ] = &point;

    // shapeVector[1] dodeli go na objekt od izvedenata klasa Circle
    shapeVector[ 1 ] = &circle;

    // shapeVector[2] dodeli go na objekt od izvedenata klasa Cylinder
    shapeVector[ 2 ] = &cylinder;

    // pomini niz shapeVector i povikaj virtualViaPointer
    // za da ispechatish ime na oblik, atributi,ploshtina i volumen
    // za sekoj objekt preku dinamichko svrzuvanje
    cout << "\nPovici kon virtuelni funkcii preku "
         << "pokazhuvachi od osnovnata klasa:\n\n";

    for ( int i = 0; i < shapeVector.size(); i++ )
        virtualViaPointer( shapeVector[ i ] );

    // pomini niz shapeVector i povikaj virtualViaReference
    // za da ispechatish ime na oblik, atributi,ploshtina i volumen
    // za sekoj objekt preku dinamichko svrzuvanje
    cout << "\nPovici kon virtuelni funkcii preku "
         << "referenci od osnovnata klasa:\n\n";

    for ( int j = 0; j < shapeVector.size(); j++ )
        virtualViaReference( *shapeVector[ j ] );

    return 0;

} // kraj main

// napravi povici kon virtuelni funkcii so pokazhuvach od
// osnovnata klasa preku dinamichko povrzuvanje
void virtualViaPointer( const Shape *baseClassPtr )
{
    cout << baseClassPtr->getName() << ": ";

    baseClassPtr->print();

    cout << "\nploshtinata e " << baseClassPtr->getArea()
         << "\nvolumenot e " << baseClassPtr->getVolume()
         << "\n\n";
} // kraj na funkcijata virtualViaPointer

// napravi povici kon virtuelni funkcii so referenca
// od osnovnata klasa preku dinamichko povrzuvanje
void virtualViaReference( const Shape &baseClassRef )
{
    cout << baseClassRef.getName() << ": ";

    baseClassRef.print();

    cout << "\nploshtinata e " << baseClassRef.getArea()
         << "\nvolumenot e " << baseClassRef.getVolume() << "\n\n";
} // kraj na funkcijata virtualViaReference

