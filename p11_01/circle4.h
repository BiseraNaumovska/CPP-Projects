// circle4.h
// Klosotoi od x-y koordinaten par i radius.
#ifndef CIRCLE4_H
#define CIRCLE4_H

#include "point3.h"

class Circle4 : public Point3 {

public:

    // predefiniran konstruktor
    Circle4( int = 0, int = 0, double = 0.0 );

    void setRadius( double );   // postavi radius
    double getRadius() const;   // vrati radius

    double getDiameter() const;       // vrati diametar
    double getCircumference() const;  // vrati perimetar
    double getArea() const;           // vrati ploshtina

    void print() const;         // ispechati objekt od klasta Circle4

private:
    double radius;  // radius na Circle4
}; // kraj na klasta Circle4
#endif
