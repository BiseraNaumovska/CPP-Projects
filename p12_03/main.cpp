//p12_03.cpp
//Istoimeni funkcii i nasleduvanje

#include <iostream>

using namespace std;

class Base {
public:
    void getData(){ cout <<"x="; cin >> x;}
protected:
    int x;
};

class Derived: public Base {
public:
    void getData();
protected:
    int y;
};

void Derived :: getData()
{
    Base :: getData();
    cout <<"y="; cin >> y;
}


int main()
{
    Derived obj;
    obj.getData(); // ke go bara prvo x od BAse pa y od Derived
    obj.Base::getData(); // samo x ke go bara

    return 0;
}
