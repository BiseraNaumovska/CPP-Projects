//p10_06.cpp
//Predavanje na argumenti od izvedena do osnovna klasa

#include <iostream>

using namespace std;
class osnovna {
    int i;
public:
    osnovna(int n) {
        cout<<"Konstruiram osnovna"<<endl;
        i=n; }
    ~osnovna() { cout<<"Unishtuvam osnovna"<<endl; }
    void prikazi_i() { cout<<i<<endl; }
};
class izvedena : public osnovna {
    int j;
public:
    izvedena(int n) : osnovna(n) //predaj argument do osnovnata
    // klasa
    {
        cout<<"Konstruiram izvedena"<<endl;
        j=n; }
    ~izvedena() { cout<<"Unishtuvam izvedena"<<endl; }
    void prikazi_j() { cout<<j<<endl; }
};

int main()
{
    izvedena o(10);
    o.prikazi_i();
    o.prikazi_j();

    return 0;
}
