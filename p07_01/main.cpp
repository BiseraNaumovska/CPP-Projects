//p07_01.cpp
//Preklopuvanje na funkcii
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void f(int i);          //integer parametar
void f(int i, int j);   //dva integer parametri
void f(double k);       //eden double parametar

main()
{
    f(10);          //povik do f(int)
    f(10, 20);      //povik do f(int, int)
    f(12.23);       //povik do f(double)
    int i;
    cin>>i;
    return 0;
}

void f(int i) {
    cout<<"Vo f(int), i ima vrednost "<<i<<endl;
}

void f(int i, int j) {
    cout<<"Vo f(int, int), i ima vrednost "<<i;
    cout<<", j ima vrednost "<<j<<endl;
}

void f(double k) {
    cout<<"Vo f(double), k ima vrednost "<<k<<endl;
}
