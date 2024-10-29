// circle3.h
// Circle3 klasata se sostoi od x-y koordinaten par i radius.
#ifndef CIRCLE3_H
#define CIRCLE3_H

#include "point2.h"

class Circle3 : public Point2 {

public:

    // default constructor
    Circle3( int = 0, int = 0, double = 0.0 );

    void setRadius( double );   // postavi radius
    double getRadius() const;   // vrati radius

    double getDiameter() const;       // vrati diametar
    double getCircumference() const;  // vrati perimetar
    double getArea() const;           // vrati ploshtina

    void print() const;         // ispechati objekt od klasata Circle3

private:
    double radius;  //  radius na krugot

}; // kraj na klasta Circle3

#endif
