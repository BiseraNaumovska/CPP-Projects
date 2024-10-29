//p10_01.cpp
//osnovna i izvedena klasa

#include <iostream>

using namespace std;

class osnovna {
    int x;
public:
    void postavi_x(int n) { x=n; }
    void prikazi_x() { cout<<x<<endl; }
};

//se nasleduva kako public
class izvedena:public osnovna {
    int y;
public:
    void postavi_y(int n) { y=n; }
    void prikazi_y() { cout<<y<<endl; }
};



int main()
{
    izvedena ob;
    ob.postavi_x(10); //dostapi do clen od osnovna klasa
    ob.postavi_y(20); //dostapi do clen od izvedena klasa

    ob.prikazi_x();  //dostapi do clen od osnovna klasa
    ob.prikazi_y(); //dostapi do clen od izvedena klasa

    return 0;
}
