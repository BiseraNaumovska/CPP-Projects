//p08_02.cpp
//preklopuvanje na operatorot - unarno i binarno
//vo odnos na klasata koordinati

#include <iostream>

using namespace std;
class koordinati {
    int x, y;
public:
    koordinati() { x=0; y=0; }
    koordinati(int i, int j) { x=i; y=j; }
    void zemi_xy(int &i, int &j) {i=x; j=y; }
    koordinati operator-(koordinati ob2); //binaren minus
    koordinati operator-(); //unaren minus
};

//operatorot - unarno
koordinati koordinati::operator-() {
    x=-x;
    y=-y;
    return *this;
}

//operatorot - binarno
koordinati koordinati::operator-(koordinati ob2) {
    koordinati tmp;
    tmp.x=x - ob2.x;
    tmp.y=y - ob2.y;
    return tmp;
}


int main()
{
    koordinati o1(10, 10), o2(5, 7);
    int x, y;

    o1=o1-o2; //odzemanje na dva objekti
        //ova ja povikuva operator-(koordinati)
    o1.zemi_xy(x, y);
    cout<<"(o1-o2) x: "<<x<<", y: "<<y<<endl;

    o1=-o1; //negacija

    o1.zemi_xy(x, y);
    cout<<"(-o1) x: "<<x<<", y: "<<y<<endl;

    return 0;
}
