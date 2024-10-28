#include <iostream>

using namespace std;

#include "time2.h"

int main()
{
    Time t1,             // site argumenti se predefinirani
        t2(2),          // minute i second se predefinirani
        t3(21, 34),     // second e predefiniran
        t4(12, 25, 42), // site vrednosti se specificirani
        t5(27, 74, 99); // site vrednosti se greshno specificirani

    cout << "Sozdadeno so:\n"
         << "site argumenti predefinirani:\n   ";
    t1.printMilitary();
    cout << "\n   ";
    t1.printStandard();

    cout << "\nchas specificiran; minuti i sekundi predefinirani:"
         << "\n   ";
    t2.printMilitary();
    cout << "\n   ";
    t2.printStandard();

    cout << "\nchas i minuta specificirani; sekundi predefinirani:"
         << "\n   ";
    t3.printMilitary();
    cout << "\n   ";
    t3.printStandard();

    cout << "\nsite vrednosti se specificirani:"
         << "\n   ";
    t4.printMilitary();
    cout << "\n   ";
    t4.printStandard();

    cout << "\nsite vrednosti se greshno specificirani:"
         << "\n   ";
    t5.printMilitary();
    cout << "\n   ";
    t5.printStandard();
    cout << endl;

    return 0;
}
