#include <iostream>
using namespace std;

class Pixel {
public:
    int getx() { return x; }
    int gety() { return y; }
    void set () { cout<<"x=";cin>>x; cout<<"y=";cin>>y;}
    void DrawPixel() {cout<<"(x,y)="<<x<<","<<y<<endl;}
private:
    int x, y;
};

int main()
{
    Pixel p1,*p2;
    p1.set();
    cout <<p1.getx()<<" "<<p1.gety()<<endl;
    p1.DrawPixel();
    p2=new Pixel; // sekogas so deklaniranje na pointer mora
    // nekade da ima rezerviranje na memorija
    p2->set();
    (*p2).DrawPixel();
    delete p2; // sekogas nekade vo programata mora da ima
    // osloboduvawe na memorijata
    system("pause");


    return 0;
}
