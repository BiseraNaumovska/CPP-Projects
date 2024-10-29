//p08_03.cpp
//preklopuvanje na operatorot + so prijatelska funkcija
//vo odnos na klasata koordinati

#include <iostream>

using namespace std;

class koordinati {
    int x, y;
public:
    koordinati() { x=0; y=0; }
    koordinati(int i, int j) { x=i; y=j; }
    void zemi_xy(int &i, int &j) {i=x; j=y; }
    friend koordinati operator+(koordinati ob1, koordinati ob2);
};

//preklopi go operatorot + koristejki prijatelska funkcija
koordinati operator+(koordinati ob1, koordinati ob2) {
    koordinati tmp;
    tmp.x=ob1.x+ob2.x;
    tmp.y=ob1.y+ob2.y;
    return tmp;
}


int main()
{
    koordinati o1(10, 10), o2(5, 3), o3;
    int x, y;

    o3=o1+o2; //sobiranje na dva objekti
        //ova ja povikuva operator+(koordinati, koordinati)
    o3.zemi_xy(x, y);
    cout<<"(o1+o2) x: "<<x<<", y: "<<y<<endl;

    return 0;
}
