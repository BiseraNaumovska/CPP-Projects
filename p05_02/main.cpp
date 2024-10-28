
#include <iostream>

using namespace std;

class Increment {
public:
    Increment( int c = 0, int i = 1 );
    void addIncrement() { count += increment; }
    void print() const;

private:
    int count;
    const int increment;		// konstanten podatochen chlen
}; // kraj na klasata Increment

// Konstruktor za klasata Increment
Increment::Increment( int c, int i )
    : increment( i )   // inicijalizator za const chlen
{ count = c; }

// Ispechati gi podatocite
void Increment::print() const
{
    cout << "count = " << count
         << ", increment = " << increment << endl;
} // kraj na funkcijata print

int main()
{
    Increment value( 10, 5 );

    cout << "Pred zgolemuvanje: ";
    value.print();

    for ( int j = 0; j < 3; j++ ) {
        value.addIncrement();
        cout << "Po zgolemuvanje " << j + 1 << ": ";
        value.print();
    } // kraj for

    return 0;
}
