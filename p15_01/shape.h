#ifndef SHAPE_H
#define SHAPE_H
#include <string>  // C++ standardna string klasa
using namespace std;




class Shape {

public:

    // virtuelna funkcija koja vrakja ploshtina na oblikot
    virtual double getArea() const;

    // virtuelna funkcija koja vrakja volumen na oblikot
    virtual double getVolume() const;

    // chisti virtuelni funkcii, predefinirani vo izvedenite klasi
    virtual string getName() const = 0; // vrakja ime na oblikot
    virtual void print() const = 0;     // vrakja oblik
}; // kraj na klasata Shape
#endif
