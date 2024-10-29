//p10_04.cpp
//Nasleduvanje i protected chlenovi


#include <iostream>

using namespace std;
class osnovna {
protected:      //privatni za osnovna
    int a, b;  //no dostapni za izvedena
public:
    void postavi_ab(int n, int m) { a=n; b=m; }
};

class izvedena : public osnovna {
    int c;
public:
    void postavi_c(int n) { c=n;}
    //slednata funkcija ima dostap do a i b od osnovna
    void prikazi_abc() {
        cout<<a<<' '<<b<<' '<<c<<endl; }
};


int main()
{
    izvedena ob;
    // a i b ne se dostapni od main bidejki
    //tie se privatni i za osnovna i za izvedena
    ob.postavi_ab(1,2);
    ob.postavi_c(3);
    ob.prikazi_abc();

    return 0;
}
