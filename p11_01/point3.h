// point3.h
// KLastata Point3 pretstavuva koordinaten par x-y.
#ifndef POINT3_H
#define POINT3_H

class Point3 {
public:
    Point3( int = 0, int = 0 ); // predefiniran konstruktor

    void setX( int );    // postavi x od koordinatniot par
    int getX() const;    // vrati x od koordinatniot par

    void setY( int );    // postavi y od koordinatniot par
    int getY() const;    // vrati y od koordinatniot par

    void print() const;  // ispechati objekt od klasta Point3

private:
    int x;  // x del od koordinatniot par
    int y;  // y del od koordinatniot par
}; // kraj na klasata Point3
#endif

