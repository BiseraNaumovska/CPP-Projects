// circle4.cpp
// Funkcii chlenki na klasta Circle4.
#include <iostream>

using std::cout;

#include "circle4.h"

// predefiniran konstruktor
Circle4::Circle4( int xValue, int yValue, double radiusValue )
    : Point3( xValue, yValue )  // povikaj go konstruktorot na osnovnata klasa
{
    setRadius( radiusValue );

} // kraj na konstruktorot na klasta Circle4

// postavi radius
void Circle4::setRadius( double radiusValue )
{
    radius = ( radiusValue < 0.0 ? 0.0 : radiusValue );
} // kraj na funkcijata setRadius

// vrati radius
double Circle4::getRadius() const
{
    return radius;
} // kraj na funkcijata getRadius

// presmetaj i vrati  diametar
double Circle4::getDiameter() const
{
    return 2 * getRadius();
} // kraj na funkcijata getDiameter

// presmetaj i vrati  perimetar
double Circle4::getCircumference() const
{
    return 3.14159 * getDiameter();
} // kraj na funkcijata getCircumference

// presmetaj i vrati  ploshtina
double Circle4::getArea() const
{
    return 3.14159 * getRadius() * getRadius();
} // kraj na funkcijata getArea

// ispechati objekt od klasta Circle4
void Circle4::print() const
{
    cout << "Centar = ";
    Point3::print();      // povikaj ja funkicjata print na Point3
    cout << "; Radius = " << getRadius();
} // kraj na funkcijata print
