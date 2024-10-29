#include "cylinder.h"
#include <iostream>
using namespace std;


// default constructor
Cylinder::Cylinder( int xValue, int yValue, double radiusValue,
                   double heightValue )
    : Circle4( xValue, yValue, radiusValue )
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

// redefiniraj na funkcijata getArea od Circle4
// za da presmetash ploshtina na Cylinder
double Cylinder::getArea() const
{
    return 2 * Circle4::getArea() +
           getCircumference() * getHeight();
} // kraj na funkcijata getArea

// presmetaj volumen na Cylinder
double Cylinder::getVolume() const
{
    return Circle4::getArea() * getHeight();
} // kraj na funkcijata getVolume

// ispechati Cylinder objekt
void Cylinder::print() const
{
    Circle4::print();
    cout << "; Visina = " << getHeight();
} // kraj na funkcijata print

