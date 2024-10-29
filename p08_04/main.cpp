//p08_04.cpp
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
    friend koordinati operator+(koordinati ob1, int i);
    friend koordinati operator+(int i, koordinati ob1);
};

//preklopi go operatorot + za ob+int
koordinati operator+(koordinati ob1, int i) {
    koordinati tmp;
    tmp.x=ob1.x+i;
    tmp.y=ob1.y+i;
    return tmp;
}
//preklopi go operatorot + za int+ob
koordinati operator+(int i, koordinati ob1) {
    koordinati tmp;
    tmp.x=ob1.x+i;
    tmp.y=ob1.y+i;
    return tmp;
}


int main()
{
    koordinati o1(10, 10);
    int x, y;

    o1=o1+10; //sobiranje na objekt so integer
        //ova ja povikuva operator+(koordinati, int)
    o1.zemi_xy(x, y);
    cout<<"(o1+10) x: "<<x<<", y: "<<y<<endl;
    o1=99+o1; //sobiranje na integer so objekt
        //ova ja povikuva operator+(int, koordinati)
    o1.zemi_xy(x, y);
    cout<<"(99+o1) x: "<<x<<", y: "<<y<<endl;

    return 0;
}
