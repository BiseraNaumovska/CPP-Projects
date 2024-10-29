// cylinder.cpp
// KLasata Cylinder nasleduva od Circle.
#include <iostream>

using std::cout;

#include "cylinder.h"

// predefiniran konstruktor
Cylinder::Cylinder( int xValue, int yValue, double radiusValue,
                   double heightValue )
    : Circle( xValue, yValue, radiusValue )
{
    setHeight( heightValue );
} // kraj na konstruktorot na Cylinder

// postavi visina na Cylinder
void Cylinder::setHeight( double heightValue )
{
    height = ( heightValue < 0.0 ? 0.0 : heightValue );

} // kraj na funkcijata setHeight

// vrati visina na Cylinder
double Cylinder::getHeight() const
{
    return height;
} // kraj na funkcijata getHeight

// predefiniraj virtuelna funkcija getArea: vrati ploshtina na Cylinder
double Cylinder::getArea() const
{
    return 2 * Circle::getArea() +
           getCircumference() * getHeight();
} // kraj na funkcijata getArea

// predefiniraj virtuelna funkcija  getVolume: vrati volumen na Cylinder
double Cylinder::getVolume() const
{
    return Circle::getArea() * getHeight();
} // kraj na funkcijata getVolume

// predefiniraj virtuelna funkcija getName: vrati ime na Cylinder
string Cylinder::getName() const
{
    return "Cylinder";
}  // kraj na funkcijata getName

// predefiniraj virtuelna funkcija print: ispechati Cylinder objekt
void Cylinder::print() const
{
    Circle::print();
    cout << "; visinata is " << getHeight();
} // kraj na funkcijata print
