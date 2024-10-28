// Program p02_02.cpp
// KOristenje na unaren operator za dostap

#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265358979;

int main()
{
    const float PI = static_cast< float >( ::PI );

    cout << setprecision( 20 )
         << "Lokalnata float vrednost na PI = " << PI
         << "\nGlobalnata double vrednost na PI = " << ::PI << endl;

    cout << setw( 28 ) << "Lokalanata float vrednost na PI = "
         << setiosflags( ios::fixed | ios::showpoint )
         << setprecision( 10 ) << PI << endl;
        system("pause");
    return 0;
}
