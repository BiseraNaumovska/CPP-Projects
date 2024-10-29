// point2.cpp
// DEfinicii na funkciite chlenki na klasata Point2.
#include <iostream>

using std::cout;

#include "point2.h"

// predefiniran konstruktor
Point2::Point2( int xValue, int yValue )
{
    x = xValue;
    y = yValue;

} // kraj na konstruktorot na Point2

// postavi x vo koordinatniot par
void Point2::setX( int xValue )
{
    x = xValue;

} // kraj na funkcijata setX

// vrati x od koordinatniot par
int Point2::getX() const
{
    return x;

} // kraj na funkcijata getX

// postavi y vo koordinatniot par
void Point2::setY( int yValue )
{
    y = yValue;

} // kraj na funkcijata setY

// vrati y od koordinatniot par
int Point2::getY() const
{
    return y;

} // kraj na funkcijata getY

// ispechati objekt od klasta Point2
void Point2::print() const
{
    cout << '[' << x << ", " << y << ']';

} // kraj na funkcijata print
