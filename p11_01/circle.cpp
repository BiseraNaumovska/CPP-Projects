// circle.cpp
// Definicii na funkciite chlenki na klasat Circle
#include <iostream>

using std::cout;

#include "circle.h"

// predefiniran konstruktor
Circle::Circle( int xValue, int yValue, double radiusValue )
{
    x = xValue;
    y = yValue;
    setRadius( radiusValue );

} // kraj na konstruktorot na Circle

// postavi x vo koordinatniot par
void Circle::setX( int xValue )
{
    x = xValue;

} // kraj na funkcijata setX

// vrati x od koordinatniot  par
int Circle::getX() const
{
    return x;

} // kraj na funkcijata getX

// postavi y vo koordinatniot par
void Circle::setY( int yValue )
{
    y = yValue;

} // kraj na funkcijata setY

// vrati y od koordinatniot  par
int Circle::getY() const
{
    return y;

} // kraj na funkcijata getY

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

// presmetaj i vrati dijametar
double Circle::getDiameter() const
{
    return 2 * radius;

} // kraj na funkcijata getDiameter

// presmetaj i vrati obikolka
double Circle::getCircumference() const
{
    return 3.14159 * getDiameter();

} // kraj na funkcijata getCircumference

// presmetaj i vrati ploshina
double Circle::getArea() const
{
    return 3.14159 * radius * radius;

} // kraj na funkcijata getArea

// ispechati objekt od klasata Circle
void Circle::print() const
{
    cout << "Centar = [" << x << ", " << y << ']'
         << "; Radius = " << radius;

} // kraj na funkcijata print
