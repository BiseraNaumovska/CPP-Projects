/*
1.	Напиши програм кој кој користи функциски урнек min за да го
определи помалиот од двата аргументи. Тестирај го прогамот со цели
броеви, реални броеви и карактери.
*/
#include <iostream>

using namespace std;

template < class T >  //ili template< typename T >
T minimum( T value1, T value2  )
{
    T min = value1;

    if ( value2 < min )
         min = value2;

    return  min;
} // kraj na funkciskiot urnek minimum

int main()
{
    int int1, int2 ;

    cout << "Vnesi dva celi broja: ";
    cin >> int1 >> int2;
    cout << "Minimalniot cel broj e: "
         << minimum( int1, int2  );          // int verzija

    double double1, double2 ;

    cout << "\nVnesi 2 double vrednosti: ";
    cin >> double1 >> double2;
    cout << "Minimalnata double vrednost e: "
         << minimum( double1, double2  ); // double verzija

    char char1, char2;

    cout << "\nVnesi 2 karakteri: ";
    cin >> char1 >> char2;
    cout << "Minimalniot karakter e: "
         << minimum( char1, char2 )        // char verzija
         << endl;
    system("pause");
    system("pause");
    system("pause");

    return 0;
}
