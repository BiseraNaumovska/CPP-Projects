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
    int x, y;
};


void Pixel::set () {
    cout<<"x="; cin>>x;
    cout<<"y="; cin>>y;
}

void Pixel::DrawPixel() {
    cout<<"(x,y)="<<x<<","<<y<<endl;
}


void Pixel::Kopiraj(Pixel &Izvoriste) {
    x=Izvoriste.x;
    y=Izvoriste.y;
}

int main()
{
    Pixel p1,p2,p4[5],*p5;
    p1.set();
    cout << "Povik na funkciite za prikaz na skrienite ";
    cout << "promenlivi"<<endl;

    cout <<p1.getx()<<" "<<p1.gety()<<endl;

    cout << "Za objektot p1";
    p1.DrawPixel();
    p2.Kopiraj(p1);
    cout << "Za objektot p2";
    p2.DrawPixel();
    p4[2].set();

    cout << "Za objektot p4[2]";
    p4[2].DrawPixel();
    p4[1].Kopiraj(p4[2]);
    cout << "Za objektot p4[1]";
    (p4+1)->DrawPixel();
    p5= new Pixel[5];
    p5[0].set();
    cout << "Za objektot p5[0]";
    p5[0].DrawPixel();
    delete p5;

    return 0;
}
