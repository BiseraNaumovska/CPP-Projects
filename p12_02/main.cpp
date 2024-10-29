//p12_02.cpp
//Povekje osnovni klasi

#include <iostream>

using namespace std;


class B1 {
    int a;
public:
    B1(int n) { a=n; }
    int zemi_a() { return a; }
};




//kreirame ushte edna osnovna klasa
class B2  {
    int b;
public:
    B2(int x) {
        b=x;
    }
    int zemi_b() { return b; }
};




//Gi nasleduva direktno i dvete klasi
class D : public B1, public B2 {
    int c;
public:
    //ovde z i y direktno se predavaat na B1 i B2
    D(int x, int y, int z) : B1(z), B2(y) {
        c=x;
    }
    /* Bidejki osnovnite klasi se nasleduvaat kako public
        D ima pristap do javnite clenki na B1 i B2 */
    void prikazi() {
        cout<<zemi_a()<<' '<<zemi_b()<<' ';
        cout<<c<<endl;
    }
};




int main()
{
    D ob(1, 2, 3);
    ob.prikazi();

    return 0;
}
