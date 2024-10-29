// point3.cpp
// DEfinicii na funkciite chlenki na klasta Point3.
#include <iostream>

using std::cout;

#include "point3.h"

// predefiniran konstruktor
Point3::Point3( int xValue, int yValue )
    : x( xValue ), y( yValue )
{
    // prazno telo
} // kraj na konstruktorot na Point3

// postavi x vo koordinatniot par
void Point3::setX( int xValue )
{
    x = xValue;
} // kraj na funkcijata setX

// vrati x od koordinatniot par
int Point3::getX() const
{
    return x;
} // kraj na funkcijata getX

// postavi y vo koordinatniot par
void Point3::setY( int yValue )
{
    y = yValue;
} // kraj na funkcijata setY

// vrati y od koordinatniot par
int Point3::getY() const
{
    return y;
} // kraj na funkcijata getY

// ispechati objekt od klasta Point3
void Point3::print() const
{
    cout << '[' << getX() << ", " << getY() << ']';
} // kraj na funkcijata print
