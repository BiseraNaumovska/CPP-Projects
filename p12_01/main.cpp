//p12_01.cpp
//Povekjekratno nasleduvanje
#include <iostream>

using namespace std;

class B {
    int a;
public:
    B(int n) { a=n; }
    int zemi_a() { return a; }
};



//direktno ja nasleduva B
class C : public B {
    int b;
public:
    C(int x, int y) : B(y) //predaj y do B
    { b=x; }
    int zemi_b() { return b; }
};


//Ja nasleduva direktno C i indirektno B
class D : public C {
    int c;
public:
    D(int x, int y, int z) : C(y, z) //predaj argumenti na C
    { c=x; }
    /* Bidejki osnovnite klasi se nasleduvaat kako public
        D ima pristap do javnite clenki na B i C */
    void prikazi() {
        cout<<zemi_a()<<' '<<zemi_b()<<' ';
        cout<<c<<endl;
    }
};



int main()
{
    D ob(1, 2, 3);
    ob.prikazi();
    //zemi_a() i zemi_b() se javni
    cout<<ob.zemi_a()<<' '<<ob.zemi_b()<<endl;

    return 0;
}
