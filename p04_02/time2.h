#ifndef TIME2_H
#define TIME2_H

// Definicija na apstraktniot tip Time
class Time {
public:
    Time( int = 0, int = 0, int = 0 );  // default konstruktor
    void setTime( int, int, int ); // postavi hour, minute, second
    void printMilitary();          // pechati vo voen format
    void printStandard();          // pechati vo standarden format
private:
    int hour;     // 0 - 23
    int minute;   // 0 - 59
    int second;   // 0 - 59
}; // kraj na klasata Time

#endif // TIME2_H
