#include <iostream>
#include "time6.h"
using namespace std;

int main()
{
    Time t;

    t.setHour( 18 ).setMinute( 30 ).setSecond( 22 );
    cout << "Voeno vreme: ";
    t.printMilitary();
    cout << "\nStandardno vreme: ";
    t.printStandard();

    cout << "\n\nNovo standardno vreme: ";
    t.setTime( 20, 20, 20 ).printStandard();
    cout << endl;

    return 0;
}
