// time6.cpp
// Definicii na funkcii chlenki na klasata Time.
#include <iostream>
#include "time6.h"
using namespace std;

// Konstruktorskata funkcija gi inicijalizira privatnite promenlivi.
// Ja povikuva funkcijata chlenka setTime da gi postavi promenlivite.
// Predefiniranite vrednosti se 0 (vidi klasna definicija).
Time::Time( int hr, int min, int sec )
{ setTime( hr, min, sec ); }

// Postavi gi vrednostite za chas, minuta i sekunda.
Time &Time::setTime( int h, int m, int s )
{
    setHour( h );
    setMinute( m );
    setSecond( s );
    return *this;   // ovozmozhuva kaskadiranje
} // kraj na funkcijata setTime

// Postavi ja vrednosta za chas
Time &Time::setHour( int h )
{
    hour = ( h >= 0 && h < 24 ) ? h : 0;

    return *this;   // ovozmozhuva kaskadiranje
} // kraj na funkcijata setHour

// Postavi ja vrednosta za minuta
Time &Time::setMinute( int m )
{
    minute = ( m >= 0 && m < 60 ) ? m : 0;

    return *this;   // ovozmozhuva kaskadiranje
} // kraj na funkcijata setMinute

// Postavi ja vrednosta za sekunda
Time &Time::setSecond( int s )
{
    second = ( s >= 0 && s < 60 ) ? s : 0;

    return *this;   // ovozmozhuva kaskadiranje
} // kraj na funkcijata  setSecond

// Zemi vrednost za chas
int Time::getHour() const { return hour; }

// Zemi vrednost za minuta
int Time::getMinute() const { return minute; }

// Zemi vrednost za sekunda
int Time::getSecond() const { return second; }

// Prikazhi vreme vo voen format: HH:MM
void Time::printMilitary() const
{
    cout << ( hour < 10 ? "0" : "" ) << hour << ":"
         << ( minute < 10 ? "0" : "" ) << minute;
} // kraj na funkcijata printMilitary

// Prikazhi vreme vo standarden format: HH:MM:SS AM (ili PM)
void Time::printStandard() const
{
    cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
    << ":" << ( minute < 10 ? "0" : "" ) << minute
    << ":" << ( second < 10 ? "0" : "" ) << second
    << ( hour < 12 ? " AM" : " PM" );
} // kraj na funkcijata printStandard
