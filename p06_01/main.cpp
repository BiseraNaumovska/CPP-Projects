// p06_01.cpp
// Prijatelite mozhat da gi dostapat privatnite chlenki na klasa.

#include <iostream>

using namespace std;

// Count klasa
class Count {
    friend void setX( Count &, int ); // friend deklaracija
public:
    Count() { x = 0; }                // konstruktor
    void print() const { cout << x << endl; }  // izlez
private:
    int x;  // podatochen chlen
}; // kraj na klasta Count

// Mozhe da gi modificira privatnite chlenki na Count
// bidejki setX e deklarirana kako friend funkcija na Count
void setX( Count &c, int val )
{
    c.x = val;  // legalno: setX e prijatel na Count
} // kraj na funkcijata setX

int main()
{
    Count counter;

    cout << "counter.x po instanciranje: ";
    counter.print();
    cout << "counter.x po povik do setX prijatelskata funkcija: ";
    setX( counter, 8 );  // postavi go x preku prijatel
    counter.print();
    return 0;
}
