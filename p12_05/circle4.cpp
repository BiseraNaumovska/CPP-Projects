#include <iostream>

#include "circle4.h"
using namespace std;




// konstruktor
Circle4::Circle4( int xValue, int yValue, double radiusValue )
    : Point3( xValue, yValue )  // povikaj go konstruktorot na osnovnata klasa
{
    setRadius( radiusValue );
} // kraj na konstruktorot na Circle4

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

// presmetaj i vrati diameter
double Circle4::getDiameter() const
{
    return 2 * getRadius();
} // kraj na funkcijata getDiameter

// presmetaj i vrati circumference
double Circle4::getCircumference() const
{
    return 3.14159 * getDiameter();
} // kraj na funkcijata getCircumference

// presmetaj i vrati area
double Circle4::getArea() const
{
    return 3.14159 * getRadius() * getRadius();
} // kraj na funkcijata getArea

// ispechati Circle4 objekt
void Circle4::print() const
{
    cout << "Centar = ";
    Point3::print();      // povikaj ja print funkcijata na Point3
    cout << "; Radius = " << getRadius();
} // kraj na funkcijata print

