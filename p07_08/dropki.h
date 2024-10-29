#ifndef DROPKI_H
#define DROPKI_H

class Dropki {
private:
    int broitel;
    int imenitel;

    void reduce();
    int gcd(int a, int b);// nzd

public:

    Dropki(int b = 0, int i = 1);

    Dropki operator+(const Dropki& other) const;
    Dropki operator-(const Dropki& other) const;
    Dropki operator*(const Dropki& other) const;
    Dropki operator/(const Dropki& other) const;

    Dropki operator+(int value) const;
    Dropki operator-(int value) const;
    Dropki operator*(int value) const;
    Dropki operator/(int value) const;

    void print() const;
    void printReal() const;
};

#endif // DROPKI_H
