#ifndef TIME_H
#define TIME_H

class Time {
public:
    Time( int = 0, int = 0, int = 0 );  // predefiniran konstruktor

    // postavi funkcii
    void setTime( int, int, int );  // postavi vreme
    void setHour( int );     // postavi chas
    void setMinute( int );   // postavi minuta
    void setSecond( int );   // postavi sekunda

    // get funkcii (voobichaeno se deklarirani const)
    int getHour() const;     // return chas
    int getMinute() const;   // return minuta
    int getSecond() const;   // return sekunda

    // pechati funkcii (voobichaeno se deklarirani const)
    void printMilitary() const;  // pechati voeno time
    void printStandard();        // pechati standardno time
private:
    int hour;              // 0 - 23
    int minute;            // 0 - 59
    int second;            // 0 - 59
}; // kraj klasa Time

#endif
