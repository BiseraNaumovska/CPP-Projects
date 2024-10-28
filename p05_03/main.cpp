#include <iostream>
#include "emply1.h"
using namespace std;

int main()
{
    Employee e( "Ana", "Petkovska", 7, 24, 1985, 3, 12, 2000 );

    cout << '\n';
    e.print();

    cout << "\nTestiraj go Date konstruktorot so greshni vrednosti:\n";
    Date d( 14, 35, 1994 );  // greshni vrednosti za Date
    cout << endl;

    return 0;
}
