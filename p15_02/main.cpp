//p15_03.cpp
//Koristenje na virtuelni destruktori

#include <iostream>

using namespace std;

class Osnovna
{
public:
    Osnovna(){ cout<<"Konstruktor: Osnovna"<<endl;}
    virtual ~Osnovna(){ cout<<"Destruktor : Osnovna"<<endl;}
};
class Izvedena: public Osnovna
{
public:
    Izvedena(){ cout<<"Konstruktor: Izvedena"<<endl;}
    ~Izvedena(){ cout<<"Destruktor : Izvedena"<<endl;}
};

int main()
{
    Osnovna *Var = new Izvedena();
    delete Var;

    return 0;
}
