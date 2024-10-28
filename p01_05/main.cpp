// Primer p01_05.cpp
// Referenite mora da bidat inicijalizirani

#include <iostream>

using namespace std;

int main()
{
    int x = 3, &y;   // Greshka: y mora da e inicijalizirana

    cout << "x = " << x << endl << "y = " << y << endl;
    y = 7;
    cout << "x = " << x << endl << "y = " << y << endl;


    return 0;
}


//  GRESHKA !!!!
