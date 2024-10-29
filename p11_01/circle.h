// circle.h
// Klasata Circle sodrzhi x-y koordinaten par i radius.
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {

public:

    // predefiniran konstruktor
    Circle( int = 0, int = 0, double = 0.0 );

    void setX( int );           // postavi x vo koordinatniot par
    int getX() const;           // vrati x od koordinatniot par

    void setY( int );           // postavi y vo koordinatniot par
    int getY() const;           // vrati y od koordinatniot par

    void setRadius( double );   // postavi radius
    double getRadius() const;   // vrati radius

    double getDiameter() const;       // vrati diametar
    double getCircumference() const;  // vrati obikolka
    double getArea() const;           // vrati ploshtina

    void print() const;         // ispechati objekt od klasata Circle

private:
    int x;          // x-koordinata na centarot na krugot
    int y;          // y-koordinata na centarot na
    double radius;  // radius na krugot

}; // krj na klasata Circle

#endif
