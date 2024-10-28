#include <iostream>
using namespace std;
#include "time2.h"

// Time konstruktorot go inicijalizira sekoj chlen na nula.
// Obezbeduva site Time objekti da se konzistentni.
Time::Time( int hr, int min, int sec )
{ setTime( hr, min, sec ); }

// Postavi nova Time vrednost koristejki voeno vreme. Proveri validnost
// na podatocite. Postavi gi greshnite vrednosti na nula.
void Time::setTime( int h, int m, int s )
{
    hour   = ( h >= 0 && h < 24 ) ? h : 0;
    minute = ( m >= 0 && m < 60 ) ? m : 0;
    second = ( s >= 0 && s < 60 ) ? s : 0;
} // kraj na funkcijata setTime

// Pechati Time vo voen format
void Time::printMilitary()
{
    cout << ( hour < 10 ? "0" : "" ) << hour << ":"
         << ( minute < 10 ? "0" : "" ) << minute;
} // kraj na funkcijata printMilitary

// Pechati Time vo standarden format
void Time::printStandard()
{
    cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
    << ":" << ( minute < 10 ? "0" : "" ) << minute
    << ":" << ( second < 10 ? "0" : "" ) << second
    << ( hour < 12 ? " AM" : " PM" );
} // kraj na funkcijata printStandard
