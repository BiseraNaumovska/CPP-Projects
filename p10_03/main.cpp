//p10_03.cpp
//Protected chlenovi

#include <iostream>

using namespace std;
class primer {
    //privatna clenka po definicija
    int a;
protected:
    int b;  //privatna za klasata primer
public:
    int c;

    primer(int n, int m) { a=n; b=m; }
    int zemi_a() { return a; }
    int zemi_b() { return b; }
};

int main()
{
    primer ob(10, 20);
    // ob.b=10; GRESKA! b e protected, znachi nedostapna
    // od gledna tochka na main
    ob.c=10; //OK, c e public

    cout<<ob.zemi_a()<<endl;
    cout<<ob.zemi_b()<<' '<<ob.c<<endl;

    return 0;
}
