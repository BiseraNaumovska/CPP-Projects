//p10_02.cpp
//Nasleduvanje private

#include <iostream>

using namespace std;

class osnovna {
    int x;
public:
    void postavi_x(int n) { x=n; }
    void prikazi_x() { cout<<x<<endl; }
};

//se nasleduva kako private
class izvedena:private osnovna {
    int y;
public:
    void postavi_y(int n) { y=n; }
    void prikazi_y() { cout<<y<<endl; }
};


int main()
{
    izvedena ob;
    ob.postavi_x(10); //GRESKA! ova e sega privatno za izvedena
    ob.postavi_y(20); //dostapi do clen od izvedena klasa, OK

    ob.prikazi_x();  // GRESKA! ova e sega privatno za izvedena
    ob.prikazi_y(); //dostapi do clen od izvedena klasa, OK

    return 0;
}
