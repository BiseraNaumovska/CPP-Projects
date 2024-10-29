// klasata Circle4 sodrzhi x-y ckooordinaten par i radius.
#ifndef CIRCLE4_H
#define CIRCLE4_H
#include "point3.h"
using namespace std;

class Circle4 : public Point3 {

public:

    // predefiniran konstruktor
    Circle4( int = 0, int = 0, double = 0.0 );

    void setRadius( double );   // postavi radius
    double getRadius() const;   // vrati radius

    double getDiameter() const;       // vrati diametar
    double getCircumference() const;  // vrati perimetar
    double getArea() const;           // vrati ploshtina

    void print() const;         // ispechati Circle4 objekt

private:
    double radius;  // radius na Circle4

}; // kraj na klasata Circle4

#endif
