#ifndef CYLINDER_H
#define CYLINDER_H
#include "circle4.h"




class Cylinder : public Circle4 {

public:

    // default constructor
    Cylinder( int = 0, int = 0, double = 0.0, double = 0.0 );

    void setHeight( double );  // postavi visina na Cylinder
    double getHeight() const;  // vrati visina na Cylinder

    double getArea() const;    // vrati ploshtina na Cylinder
    double getVolume() const;  // vrati volumen na Cylinder
    void print() const;        // ispechati Cylinder

private:
    double height;  // visina na Cylinder

}; // kraj na klasata Cylinder

#endif
