#ifndef ARRAY1_H
#define ARRAY1_H

#include <iostream>
using namespace std;

class Array{
    friend ostream &operator<<(ostream&, const Array &);
    friend istream &operator>>(istream&, Array &);
public:

    Array(int = 10);      // default constructor
    Array(const Array &); // copy konstruktor
    ~Array();             // destructor
    int getSize() const;
    const Array &operator=(const Array &);
    bool operator==(const Array &) const;
    // Odredi dali dve nizi se ednakvi i
    // vrati true, inaku vrati false (go koristi operator==).
    bool operator!=(const Array &right) const{
        return !(*this == right);
    }
    int &operator[](int);
    const int &operator[](int)const;
    static int getArrayCount();

private:
    int size;
    int *ptr;
    static int arrayCount;
};

#endif // ARRAY1_H
