
// circle3.cpp
// Definicii na funkcii chlenki na klasata Circle3.
#include <iostream>

using std::cout;

#include "circle3.h"

// predefiniran konstruktor
Circle3::Circle3( int xValue, int yValue, double radiusValue )
{
    x = xValue;
    y = yValue;
    setRadius( radiusValue );

} // kraj na konstruktorot na Circle3

// postavi radius
void Circle3::setRadius( double radiusValue )
{
    radius = ( radiusValue < 0.0 ? 0.0 : radiusValue );

} // kraj na funkcijata setRadius

// vrati radius
double Circle3::getRadius() const
{
    return radius;

} // kraj na funkcijata getRadius

// presmetaj i vrati diametar
double Circle3::getDiameter() const
{
    return 2 * radius;

} // kraj na funkcijata getDiameter

// presmetaj i vrati perimetar
double Circle3::getCircumference() const
{
    return 3.14159 * getDiameter();

} // kraj na funkcijata getCircumference

// presmetaj i vrati ploshtina
double Circle3::getArea() const
{
    return 3.14159 * radius * radius;

} // kraj na funkcijata getArea

// ispechati objekt od klasata Circle3
void Circle3::print() const
{
    cout << "Centar = [" << x << ", " << y << ']'
         << "; Radius = " << radius;

} // kraj na funkcijata print
