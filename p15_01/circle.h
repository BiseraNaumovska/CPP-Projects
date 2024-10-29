#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

class Circle : public Point {

public:

    // predefiniran konstruktor
    Circle( int = 0, int = 0, double = 0.0 );

    void setRadius( double );   // postavu radius
    double getRadius() const;   // vrati radius

    double getDiameter() const;       // vrati diametar
    double getCircumference() const;  // vrati perimetar
    virtual double getArea() const;   // vrati ploshtina

    // vrati ime na oblikot (t.e., "Circle")
    virtual string getName() const;

    virtual void print() const;  // ispechati Circle objekt

private:
    double radius;  // radius na krugot

}; // kraj na klasata Circle
#endif
