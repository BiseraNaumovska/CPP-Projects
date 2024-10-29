//p08_01.cpp
//preklopuvanje na operatorot ++
//vo odnos na klasata koordinati


#include <iostream>

using namespace std;

class koordinati {
    int x, y;
public:
    koordinati() { x=0; y=0; }
    koordinati(int i, int j) { x=i; y=j; }
    void zemi_xy(int &i, int &j) {i=x; j=y; }
    koordinati operator++();
};

//operatorot ++ prefiksna forma
koordinati koordinati::operator++() {
    x++;
    y++;
    return *this;
}


int main()
{
    koordinati o1(10, 10);
    int x,y;

    ++o1; //prefiksen inkrement na objekt
    o1.zemi_xy(x,y);
    cout<<"(++o1) x: "<<x<<", y: "<<y<<endl;

    return 0;
}
