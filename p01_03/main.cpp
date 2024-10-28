// Program p01_03.cpp
// Sporeduvanje na povik po vrednost i na povik po referenca

#include <iostream>

using namespace std;

int squareByValue(int);
void squareByReference(int &);

int main()
{
    int x=2, z=4;
    cout<<"X= "<<x<<" pred squareByValue"<<endl;
    cout<<"Vrednost vratena od squareByVarue: "<<squareByValue(x)<<endl;
    cout<<"X = "<<x<<"po squareByValue"<<endl<<endl;
    cout << "z = " << z << " pred squareByReference" << endl;
    squareByReference( z );
    cout << "z = " << z << " po squareByReference" << endl;
    return 0;
}

int squareByValue( int a )
{
    return a *= a;   // povikuvachkiot argument ne e modificiran
} // kraj na funkcijata squareByValue

void squareByReference( int &cRef )
{
    cRef *= cRef;    // povikuvachkiot argument e modificiran
} // kraj na funkcijata squareByReference
