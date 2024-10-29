// circle.cpp
// Definicii na funkciite chlenki na klasata Circle.
#include <iostream>

using std::cout;

#include "circle.h"

// predefiniran konstruktor
Circle::Circle( int xValue, int yValue, double radiusValue )
    : Point( xValue, yValue )  // povikaj konstruktor na osnovnata klasa
{
    setRadius( radiusValue );
} // kraj na konstruktorot na Circle

// postavi radius
void Circle::setRadius( double radiusValue )
{
    radius = ( radiusValue < 0.0 ? 0.0 : radiusValue );
} // kraj na funkcijata setRadius

// vrati radius
double Circle::getRadius() const
{
    return radius;
} // kraj na funkcijata getRadius

// presmetaj i vrati diametar
double Circle::getDiameter() const
{
    return 2 * getRadius();
} // kraj na funkcijata getDiameter

// presmetaj i vrati perimetar
double Circle::getCircumference() const
{
    return 3.14159 * getDiameter();
} // kraj na funkcijata getCircumference

// predefiniraj ja virtuelnata funkcija getArea: vrati ploshtina na krug
double Circle::getArea() const
{
    return 3.14159 * getRadius() * getRadius();
} // kraj na funkcijata getArea

// predefiniraj ja virtuelnata funkcija getName: vrati ime na krug
string Circle::getName() const
{
    return "Circle";
}  // kraj na funkcijata getName

// predefiniraj ja virtuelnata funkcija print: ispechati Circle objekt
void Circle::print() const
{
    cout << "centarot e ";
    Point::print();  // povikaj print funkcija od Point
    cout << "; radiusot e " << getRadius();
} // kraj na funkcijata print
