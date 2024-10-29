// Definicijata na klasta Point3 pretstavuva x-y koordinaten par.
#ifndef POINT3_H
#define POINT3_H

class Point3 {

public:
    Point3( int = 0, int = 0 ); // predefiniran konstruktor

    void setX( int );    // postavi x vo koordinaten par
    int getX() const;    // vrati x od koordinaten par
    void setY( int );    // postavi y vo koordinaten par
    int getY() const;    // vrati y od koordinaten par
    void print() const;  // ispechati Point3 objekt

private:
    int x;  // x del od koordinaten par
    int y;  // y del od koordinaten par
}; // kraj na klasta Point3
#endif
