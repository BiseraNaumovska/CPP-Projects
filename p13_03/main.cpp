//p13_03.cpp
//Virtuelni funkcii

#include <iostream>

using namespace std;
class osnovna {
public:
    int i;
    osnovna(int x) { i=x; }
    virtual void func() //virtuelna funkcija
    {
        cout<<"Verzija na func() vo osnovna: ";
        cout<<i<<endl;
    }
};

class izvedena1:public osnovna {
public:
    izvedena1(int x) : osnovna(x) {}
    void func()
    {
        cout<<"Vo izvedena1: "<<i*i<<endl;
    }
};

class izvedena2 : public osnovna {
public:
    izvedena2(int x) : osnovna(x) {}
    void func()
    {
        cout<<"Vo izvedena2: "<<i+i<<endl;
    }
};

int main()
{
    osnovna *p;
    osnovna ob(10);
    izvedena1 iz_ob1(10);
    izvedena2 iz_ob2(10);

    p=&ob;
    p->func(); //verzijata vo osnovna

    p=&iz_ob1;
    p->func();  //verzijata vo izvedena1

    p=&iz_ob2;
    p->func();  //verzijata vo izvedena2

    return 0;
}
