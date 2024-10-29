#include <iostream>
#include "point3.h"
using namespace std;


// konstruktor
Point3::Point3( int xValue, int yValue )
    : x( xValue ), y( yValue )
{
    // prazno telo
} // kraj na konstruktorot na Point3

// postavi x od koordinaten par
void Point3::setX( int xValue )
{
    x = xValue;
} // kraj na funkcijata setX

// vrati x vo koordinaten par
int Point3::getX() const
{
    return x;
} // kraj na funkcijata getX

// vrati y od koordinaten par
void Point3::setY( int yValue )
{
    y = yValue;
} // kraj na funkcijata setY

// vrati y vo koordinaten par
int Point3::getY() const
{
    return y;
} // kraj na funkcijata getY

// ispechati Point3 objekt
void Point3::print() const
{
    cout << '[' << getX() << ", " << getY() << ']';
} // kraj na funkcijata print

