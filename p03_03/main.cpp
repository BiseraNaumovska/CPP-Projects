#include <iostream>
using namespace std;
class Pixel {
public:
    int getx() { return x; }
    int gety() { return y; }
    void set ();
    void DrawPixel();
    void Kopiraj(Pixel &);
private:
    int x, y,z;
    void PostaviRadius();
    int VratiRadius();
};

void Pixel::set () {
    cout<<"x="; cin>>x;
    cout<<"y="; cin>>y;
    PostaviRadius();
}

void Pixel::DrawPixel() {
    cout<<"(x,y,z)="<<x<<","<<y<<","<<VratiRadius ()<<endl;
}

void Pixel::Kopiraj(Pixel &Izvoriste) {
    x=Izvoriste.x;
    y=Izvoriste.y;
}

void Pixel::PostaviRadius () {
    z=(x+y)/2;
}

int Pixel::VratiRadius () {
    return z;
}

int main()
{
    Pixel p1,*p2,p3,p4[5],*p5;
    p1.set();
    cout << "Povik na funkciite za prikaz na skrienite promenlivi"<<endl;
    cout <<p1.getx()<<" "<<p1.gety()<<endl;
    cout << "Za objektot p1";
    p1.DrawPixel();
    return 0;
}

