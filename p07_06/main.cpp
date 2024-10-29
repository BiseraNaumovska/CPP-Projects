//p07_06.cpp
//preklopuvanje na operatorot + za sobiranje dva objekti
//i objekt so integer vo odnos na klasata koordinati


#include <iostream>

using namespace std;

class koordinati {
    int x, y;
public:
    koordinati() { x=0; y=0; }
    koordinati(int i, int j) { x=i; y=j; }
    void zemi_xy(int &i, int &j) {i=x; j=y; }
    koordinati operator+(koordinati ob2); //ob+ob
    koordinati operator+(int i); //ob+int
};

//operatorot +  sobira ob+ob
koordinati koordinati::operator+(koordinati ob2) {
    koordinati tmp;
    tmp.x=x + ob2.x;
    tmp.y=y + ob2.y;
    return tmp;
}

//operatorot + za ob+int
koordinati koordinati::operator+(int i) {
    koordinati tmp;
    tmp.x=x + i;
    tmp.y=y + i;
    return tmp;
}

int main()
{
    koordinati o1(10, 10), o2(5, 3), o3;
    int x, y;

    o3=o1+o2; //sobiranje na dva objekti
        //ova ja povikuva operator+(koordinati)
    o3.zemi_xy(x, y);
    cout<<"(o1+o2) x: "<<x<<", y: "<<y<<endl;

    o3=o1+100; //sobiranje na objekt so integer
        //ova ja povikuva operator+(int)
    o3.zemi_xy(x, y);
    cout<<"(o1+100) x: "<<x<<", y: "<<y<<endl;

    return 0;
}
