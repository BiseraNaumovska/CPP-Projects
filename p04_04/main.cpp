// p04_04.cpp
// Objektite na klasite mozhat da se dodeluvaat eden na
// drug preku kopiranje na nivnite chlenki
#include <iostream>

using namespace std;

// Ednostavna klasa Date
class Date {
public:
    Date( int = 1, int = 1, int = 2007 ); // predefiniran konstruktor
    void print();
private:
    int month;
    int day;
    int year;
}; // kraj na klasata Date

// KOnstruktor na Date koj ne proveruva od greshki
Date::Date( int m, int d, int y )
{
    month = m;
    day = d;
    year = y;
} // kraj na konstruktorot na Date

// Pechati Date vo forma mm-dd-yyyy
void Date::print()
{ cout << month << '-' << day << '-' << year; }

int main()
{
    Date date1( 7, 4, 1993 ), date2;  // d2 e predefiniran na 1/1/07

    cout << "date1 = ";
    date1.print();
    cout << "\ndate2 = ";
    date2.print();

    date2 = date1;   // dodeli preku predefinirano kopiranje
    cout << "\n\nPo kopiranjeto, date2 = ";
    date2.print();
    cout << endl;

    return 0;
}
