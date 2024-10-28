// Program p02_04.cpp
// Koristenje na funkciski urnek

#include <iostream>

using namespace std;

template < class T >  //ili template< typename T >
T maximum( T value1, T value2, T value3 )
{
    T max = value1;

    if ( value2 > max )
        max = value2;

    if ( value3 > max )
        max = value3;

    return max;
} // kraj na funkciskiot urnek maximum

int main()
{
    int int1, int2, int3;

    cout << "Vnesi tri celi broja: ";
    cin >> int1 >> int2 >> int3;
    cout << "Maksimalniot cel broj e: "
         << maximum( int1, int2, int3 );          // int verzija

    double double1, double2, double3;

    cout << "\nVnesi 3 double vrednosti: ";
    cin >> double1 >> double2 >> double3;
    cout << "Maksimalnata double vrednost e: "
         << maximum( double1, double2, double3 ); // double verzija

    char char1, char2, char3;

    cout << "\nVnesi tri karakteri: ";
    cin >> char1 >> char2 >> char3;
    cout << "Maksimalniot karakter e: "
         << maximum( char1, char2, char3 )        // char verzija
         << endl;
     system("pause");
      system("pause");
       system("pause");

    return 0;
}
