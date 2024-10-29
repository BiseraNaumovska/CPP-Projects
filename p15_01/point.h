#ifndef POINT_H
#define POINT_H

#include "shape.h"

class Point : public Shape {

public:
    Point( int = 0, int = 0 ); // predefiniran konstruktor

    void setX( int );  // postavi x vo koordinatniot par
    int getX() const;  // vrati x od koordinatniot par

    void setY( int );  // postavi y vo koordinatniot par
    int getY() const;  // vrati y od koordinatniot par

    // vrati go imeto na oblikot (t.e., "Point" )
    virtual string getName() const;

    virtual void print() const;  // ispechati Point objekt

private:
    int x;  // x del od koordinatniot par
    int y;  // y del od koordinatniot par
}; // kraj na klasata Point
#endif

