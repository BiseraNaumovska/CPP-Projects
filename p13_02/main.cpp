//p13_02.cpp
//Virtuelni klasi
#include <iostream>

using namespace std;

class C {
public:
    int x;
    C(int a){x=a;}
    void displayC(){ cout << "Pecatenje od C x=" << x << endl;}
};

class B1:virtual public C {
public:
    B1(int );
    void displayB1(){  cout << "Pecatenje od B1 x=" << x << endl;}
};

B1::B1 (int a):C(a){}

class B2:virtual public C {
public:
    B2(int );
    void displayB2(){ cout << "Pecatenje od B2 x=" << x << endl;}
};

B2::B2 (int a) : C(a) {}


class D : public B1, public B2 {
public:
    D(int);
    void displayD(){ x=5;cout << "Pecatenje od D x=" << x << endl;}
    /* so ova segde x ke bide 5, vo site klasi iako D e najdolu */
};

D::D (int a) : C(a),B1(a),B2(a) {}



int main()
{
    D obj(2);
    obj.displayD();
    obj.displayC();
    obj.displayB1();
    obj.displayB2();

    return 0;
}
