#include <iostream>

using namespace std;

#include "time5.h"

// Konstruktorska funkcija za da se inicijlaiziraat privatnite chlenovi.
// Predefiniranite vrednosti se 0 (vidi ja definicijata na klasata).
Time::Time( int hr, int min, int sec )
{ setTime( hr, min, sec ); }

// Postavi vrednosti za chas, minuta i sekunda.
void Time::setTime( int h, int m, int s )
{
    setHour( h );
    setMinute( m );
    setSecond( s );
} // kraj na funkcijata setTime

// Postavi vrednost za chas
void Time::setHour( int h )
{ hour = ( h >= 0 && h < 24 ) ? h : 0; }

// Postavi vrednost za minuta
void Time::setMinute( int m )
{ minute = ( m >= 0 && m < 60 ) ? m : 0; }

// Postavi vrednost za sekunda
void Time::setSecond( int s )
{ second = ( s >= 0 && s < 60 ) ? s : 0; }

// Zemi vrednost za chas
int Time::getHour() const { return hour; }

// Zemi vrednost za minuta
int Time::getMinute() const { return minute; }

// Zemi vrednost za sekunda
int Time::getSecond() const { return second; }

// Ispechati vreme vo voen format: HH:MM
void Time::printMilitary() const
{
    cout << ( hour < 10 ? "0" : "" ) << hour << ":"
         << ( minute < 10 ? "0" : "" ) << minute;
} // kraj na funkcijata printMilitary

// Ispechati vreme vo standarden format: HH:MM:SS AM (ili PM)
void Time::printStandard()  // treba da e const
{
    cout << ( ( hour == 12 ) ? 12 : hour % 12 ) << ":"
         << ( minute < 10 ? "0" : "" ) << minute << ":"
         << ( second < 10 ? "0" : "" ) << second
         << ( hour < 12 ? " AM" : " PM" );
}
