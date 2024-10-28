// Program p01_02.cpp
// Koristenje na inline funkcija za presmetuvanje
// na volumen na kocka.

#include <iostream>

using namespace std;

inline double cube(const double s){
    return s*s*s;
}

int main()
{
    double side;
    for(int i=1;i<4;i++){
        cout<<"Vnesi dolzina na strana: ";
        cin>>side;
        cout<<"Volumenot na kocka so strana "<<side<<" e "<<cube(side)<<endl;
    }


    return 0;
}
