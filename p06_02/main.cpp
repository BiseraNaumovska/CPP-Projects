// Koristenje na this pokazhuvach za da se dostapi
// do chlenovi na objektot.

#include <iostream>

using namespace std;

class Test {
public:
    Test( int = 0 );             // predefiniran konstruktor
    void print() const;
private:
    int x;
}; // kraj na klasata Test

Test::Test( int a ) { x = a; }  // konstruktor

void Test::print() const   /* ( ) okolu *this se zadolzhitelni ne se povikuva od konstanten object ako ne stavime const*/
{
    cout << "        x = " << x
         << "\n  this->x = " << this->x
         << "\n(*this).x = " << ( *this ).x << endl;
} // kraj na funkcijata print

int main()
{
    Test testObject( 12 );

    testObject.print();

    return 0;
}
