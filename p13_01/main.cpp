//p13_01.cpp
//Virtuelni klasi

#include <iostream>

using namespace std;

class osnovna {
public:
    int i;
};

class izvedena1: virtual public osnovna {
public:
    int j;
};

class izvedena2: virtual public osnovna {
public:
    int k;
};

class izvedena3: public izvedena1, public izvedena2 {
public:
    int proizvod() { return i*j*k; }
};


int main()
{
    izvedena3 ob;
    ob.i=10;
    ob.j=3;
    ob.k=5;
    cout<<"Proizvodot e: "<<ob.proizvod()<<endl;

    return 0;
}
