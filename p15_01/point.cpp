
// point.h
// Klasnata definicija na klasata Point pretstavuva
// x-y koordinaten par.
#include <iostream>
#include "point.h"
using namespace std;

// predefiniran konstruktor
Point::Point( int xValue, int yValue )
    : x( xValue ), y( yValue )
{
    // prazno telo
} // kraj na konstruktorot na Point

// postavi x vo koordinatniot par
void Point::setX( int xValue )
{
    x = xValue; // nema potreba od validacija
} // kraj na funkcijata setX

// vrati x od koordinatniot par
int Point::getX() const
{
    return x;
} // kraj na funkcijata getX

// postavi y vo koordinatniot par
void Point::setY( int yValue )
{
    y = yValue; // nema potreba od validacija
} // kraj na funkcijata setY

// vrati y od koordinatniot par
int Point::getY() const
{
    return y;
} // kraj na funkcijata getY

// predefiniraj chista virtuelna funkcija getName: vrati ime na Point
string Point::getName() const
{
    return "Point";
}  // kraj na funkcijata getName

// predefiniraj chista virtuelna funkcija print:
// ispechati Point objekt
void Point::print() const
{
    cout << '[' << getX() << ", " << getY() << ']';
} // kraj na funkcijata print
