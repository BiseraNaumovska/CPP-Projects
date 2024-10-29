//p10_05.cpp
//KOnstruktori, destruktori i nasleduvanje

#include <iostream>

using namespace std;

class osnovna {
public:
    osnovna() { cout<<"Konstruiram osnovna"<<endl; }
    ~osnovna() { cout<<"Unishtuvam osnovna"<<endl; }
};

class izvedena : public osnovna {
public:
    izvedena() { cout<<"Konstruiram izvedena"<<endl; }
    ~izvedena() { cout<<"Unishtuvam izvedena"<<endl; }
};


int main()
{
    izvedena o;
    return 0;
}
