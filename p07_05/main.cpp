//p07_05.cpp
//preklopuvanje na operatorot +, - i =
//vo odnos na klasata koordinati

#include <iostream>

using namespace std;

class koordinati {
    int x, y;
public:
    koordinati() { x=0; y=0; }
    koordinati(int i, int j) { x=i; y=j; }
    void zemi_xy(int &i, int &j) {i=x; j=y; }
    koordinati operator+(koordinati ob2);
    koordinati operator-(koordinati ob2);
    koordinati operator=(koordinati ob2);
};

//operatorot +
koordinati koordinati::operator+(koordinati ob2) {
    koordinati tmp;
    tmp.x=x + ob2.x;
    tmp.y=y + ob2.y;
    return tmp;
}

//operatorot -
koordinati koordinati::operator-(koordinati ob2) {
    koordinati tmp;
    tmp.x=x - ob2.x;
    tmp.y=y - ob2.y;
    return tmp;
}

//operatorot =
koordinati koordinati::operator=(koordinati ob2) {
    x=ob2.x;
    y=ob2.y;

    return *this;  //vrati go objektot koj e dodelen
}


int main()
{
    koordinati o1(10, 10), o2(5, 3), o3;
    int x, y;

    o3=o1+o2; //sobiranje na dva objekti
        //ova ja povikuva operator+()
    o3.zemi_xy(x, y);
    cout<<"(o1+o2) x: "<<x<<", y: "<<y<<endl;

    o3=o1-o2; //odzemanje na dva objekti
        //ova ja povikuva operator-()
    o3.zemi_xy(x, y);
    cout<<"(o1-o2) x: "<<x<<", y: "<<y<<endl;

    o3=o1; //dodeli objekt

    o3.zemi_xy(x, y);
    cout<<"(o3=o1) x: "<<x<<", y: "<<y<<endl;

    return 0;
}
