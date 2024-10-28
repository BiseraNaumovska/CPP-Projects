#ifndef TIME1_H
#define TIME1_H

// Time - definicija na apstrakten tip
class Time {
public:
    Time();                        // konstruktor
    void setTime( int, int, int ); // postavi chas, minuti, sekundi
    void printMilitary();          // ispechati vo voen format
    void printStandard();          // ispechati vo standarden format
private:
    int hour;     // 0 - 23
    int minute;   // 0 - 59
    int second;   // 0 - 59
}; // kraj klasa Time

#endif
