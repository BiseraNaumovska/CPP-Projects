#ifndef TIME6_H
#define TIME6_H

class Time {
public:
    Time( int = 0, int = 0, int = 0 );  // predefiniran konstruktor

    // postavi funkcii
    Time &setTime( int, int, int ); // postavi chas, minuta, sekunda
    Time &setHour( int );    // postavi chas
    Time &setMinute( int );  // postavi minuta
    Time &setSecond( int );  // postavi sekunda

    // vrati funkcii (voobichaeno se deklariraat kako const)
    int getHour() const;     // vrati chas
    int getMinute() const;   // vrati minuta
    int getSecond() const;   // vrati sekunda

    // pechati funkcii (voobichaeno se deklariraat kako const)
    void printMilitary() const;  // pechati voeno vreme
    void printStandard() const;  // pechati standardno vreme
private:
    int hour;              // 0 - 23
    int minute;            // 0 - 59
    int second;            // 0 - 59
}; // kraj na klasata Time

#endif
 // TIME6_H
