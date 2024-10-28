// Program p02_03.cpp
// Koristenje na preklopeni funkcii

#include <iostream>

using namespace std;

int square( int x ) {
    return x * x;
}

double square( double y ) {
    return y * y;
}

int main()
{
    cout << "Kvadrat na celiot broj 7 e " << square( 7 )
    << "\nKvadratot na double vrednosta 7.5 e " << square( 7.5 )
    << endl;

    return 0;
}
