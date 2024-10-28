#ifndef DROPKI_H
#define DROPKI_H

class Dropki
{
public:
    Dropki(int b=0, int i=1);
    // Aritmetichki operacii
    Dropki operator+(const Dropki &other) const;
    Dropki operator-(const Dropki &other) const;
    Dropki operator*(const Dropki &other) const;
    Dropki operator/(const Dropki &other) const;

    void printFraction() const;
    void printReal() const;
private:
    int broitel, imenitel;
    void reduce(); // za da se napravi vo najednostavna forma
};

#endif // DROPKI_H
