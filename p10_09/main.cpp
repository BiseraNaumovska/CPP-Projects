/*
Пример: Да се преработи примерот р10_08.срр така да се користат
конструктори и деструктори на основната и изведената класа.
*/

#include <iostream>
#include <string.h>
using namespace std;
class Car {
public:
    Car( char *, unsigned );//konstruktor
    void printCar();
    ~Car(){ delete [] mark; } //destruktor
protected:
    char *mark;
    unsigned year;
};

Car::Car(char *a, unsigned b )
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

class TheCar: public Car {
public:
    TheCar( char *, unsigned, unsigned );//konstruktor
    void printTheCar();
protected:
    unsigned reg_no;
};

TheCar::TheCar(char *a, unsigned b, unsigned c ):Car(a,b)
{
    reg_no = c;
}
void TheCar::printTheCar()
{
    printCar();
    cout << "Reg. Br.  " << reg_no << endl;
}


int main()
{
    TheCar mycar("Toyota",1998,1200);
    mycar.printTheCar();

    return 0;
}
