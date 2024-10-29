// cylinder.h
// Klasata Cylinder nasleduva od Circle.
#ifndef CYLINDER_H
#define CYLINDER_H

#include "circle.h"

class Cylinder : public Circle {

public:

    // predefinirak konstruktor
    Cylinder( int = 0, int = 0, double = 0.0, double = 0.0 );

    void setHeight( double );  // postavi visina na Cylinder
    double getHeight() const;  // vrati visina na Cylinder

    virtual double getArea() const; // vrati ploshtina na Cylinder
    virtual double getVolume() const; // vrati volumen na Cylinder

    // vrati ime na oblikot (t.e., "Cylinder" )
    virtual string getName() const;

    virtual void print() const;  // ispechati Cylinder

private:
    double height;  // visina na Cylinder
}; // kraj na klasata Cylinder
#endif
