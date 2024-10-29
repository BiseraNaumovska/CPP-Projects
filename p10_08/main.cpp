/*
Пример: Да се направи програма која содржи две класи: Car и TheCar која е
изведена до Car. Изведената класа користи методи од основната класа.

Car
char *mark
unsigned year
      public:
      makeCar(char *, unsigned)
      printCar()

Изведена од Car
TheCar
char *mark
unsigned year
unsigned reg_no
      public:
      makeTheCar(char *, unsigned, unsigned)
      printTheCar()

*/
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Car {
public:
    void makeCar( char *, unsigned );
    void printCar();
private:
    char *mark;
    unsigned year;
};

class TheCar:Car {
public:
    void makeTheCar( char *, unsigned, unsigned );
    void printTheCar();
private:
    unsigned reg_no;
};

void Car::makeCar(char *a, unsigned b )
{
    mark = new char[strlen(a)+1 ];
    strcpy( mark, a);
    year = b;
}
void Car::printCar()
{
    cout << "Marka " << mark << endl;
    cout << "Godina " << year << endl;
}



//Metodite na izvedenata klasa se so razlicno ime
//od onie na osnovnata

void TheCar::makeTheCar(char *a, unsigned b, unsigned c )
{
    makeCar(a,b);
    reg_no = c;
}
void TheCar::printTheCar()
{
    printCar();
    cout << "Reg. Br.  " << reg_no << endl;
}

int main()
{
    TheCar mycar;
    mycar.makeTheCar("Toyota",2003,1200);
    mycar.printTheCar();

    return 0;
}
