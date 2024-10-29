//p12_04.cpp
//Istoimeni funkcii i nasleduvanje

#include <iostream>

using namespace std;


class Vozilo {
    int trkala;
    float tezina;
public:
    void poraka(void) {cout<<"Poraka od klasata Vozilo\n";}
};

class Avtomobil:public Vozilo{
    int br_patnici;
public:
    void poraka(void) {cout<<"Poraka od klasata Avtomobil\n";}
};

class Kamion:public Vozilo{
    int br_patnici;
    float nosivost;
public:
    int patnici(void){return br_patnici;}
    /*nema metod poraka, no go nasleduva od Vozilo*/
};

class Brod:public Vozilo{
    int br_patnici;
public:
    int patnici(void){return br_patnici;}
    void poraka(void) {cout<<"Poraka od klasata Brod\n";}
};




int main()
{
    Vozilo V;
    Avtomobil A;
    Kamion K;
    Brod B;
    V.poraka();
    A.poraka();
    K.poraka();
    B.poraka();

    return 0;
}
