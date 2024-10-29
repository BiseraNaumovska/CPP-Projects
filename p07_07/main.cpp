//p07_07.cpp
//preklopuvanje na operatorot == i &&
//vo odnos na klasata koordinati

#include <iostream>

using namespace std;
class koordinati {
    int x, y;
public:
    koordinati() { x=0; y=0; }
    koordinati(int i, int j) { x=i; y=j; }
    void zemi_xy(int &i, int &j) {i=x; j=y; }
    int operator==(koordinati ob2);
    int operator&&(koordinati ob2);
};

//operatorot ==
int koordinati::operator==(koordinati ob2) {
    if(x==ob2.x && y==ob2.y) return 1;
    else return 0;
}

//operatorot &&
int koordinati::operator&&(koordinati ob2) {
    return ((x&&ob2.x) && (y&&ob2.y));
}


int main()
{
    koordinati o1(10, 10), o2(5, 3), o3(10,10), o4(0,0);

    if(o1==o2) cout<<"o1 e isto so o2\n";
    else cout<<"o1 ne e isto so o2\n";

    if(o1==o3) cout<<"o1 e isto so o3\n";
    else cout<<"o1 ne e isto so o3\n";

    if(o1&&o2) cout<<"o1 && o2 e tocno\n";
    else cout<<"o1 i o2 e netocno\n";

    if(o1&&o4) cout<<"o1 && o4 e tocno\n";
    else cout<<"o1 i o4 e netocno\n";

    return 0;
}
