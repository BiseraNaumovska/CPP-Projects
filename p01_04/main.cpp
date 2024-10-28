// Program p01_04.cpp
// Referencite mora da bidat inicijalizirani

#include <iostream>

using namespace std;

int main()
{
    int x = 3, &y = x;  // y e sega sinonim za x

    cout << "x = " << x << endl << "y = " << y << endl;
    y = 7;
    cout << "x = " << x << endl << "y = " << y << endl;

    return 0;
}
