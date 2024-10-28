#include <iostream>
#include "date1.h"

using namespace std;

Date::Date( int mn, int dy, int yr )
{
    if ( mn > 0 && mn <= 12 )       // validacija za mesec
        month = mn;
    else {
        month = 1;
        cout << "Mesec " << mn << " ne postoi. Postavi go month na 1.\n";
    } // kraj else

    year = yr;                      // treba da se napravi validacija i za godina
    day = checkDay( dy );           // validacija za den

    cout << "Konstruktor za objekt od klasa Date ";
    print();         // print funkcija bez argumenti
    cout << endl;
} // kraj na konstruktorot na Date

// Pechati Date objekt vo oblik  mesec/den/godina
void Date::print() const
{ cout << month << '/' << day << '/' << year; }

// Destruktor: za demonstracija na redosled na unishtuvanje objekti
Date::~Date()
{
    cout << "Destruktor na klasata Date ";
    print();
    cout << endl;
} // kraj na destruktorot na Date

// Funkcija koja obezbeduva tochna vrednost za denot
// vo odnos na mesecot i godinata.

int Date::checkDay( int testDay )
{
    static const int daysPerMonth[ 13 ] =
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
        return testDay;

    if ( month == 2 &&      // Fevruary: Proverka za prestapni godini
        testDay == 29 &&
        ( year % 400 == 0 ||
         ( year % 4 == 0 && year % 100 != 0 ) ) )
        return testDay;

    cout << "Denot " << testDay << " e greshen. Postavi vrednost za day na 1.\n";

    return 1;  // obezbeduvanje na konzistentna vrednost ako se vnese greshna vrednost
} // kraj na funkcijata checkDay
