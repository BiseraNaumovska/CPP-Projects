#include <iostream>

using namespace std;
#include "create.h"

void create(void); //prototip
CreateAndDestroy first( 1 );  // globalen objekt

int main()
{
    cout << "   (globalniot e kreiran pred main)" << endl;

    CreateAndDestroy second( 2 );        // lokalen objekt
    cout << "   (lokalen avtomatski vo main)" << endl;

    static CreateAndDestroy third( 3 );  // lokalen objekt
    cout << "   (lokalen statichki vo main)" << endl;

    create();  // povikaj funkcija za sozdavanje objekti

    CreateAndDestroy fourth( 4 );        // lokalen objekt
    cout << "   (lokalen avtomatski vo main)" << endl;

    return 0;
}

// Funkcija za sozdavanje objekti
void create( void )
{
    CreateAndDestroy fifth( 5 );
    cout << "   (lokalen avtomatski vo create)" << endl;

    static CreateAndDestroy sixth( 6 );
    cout << "   (lokalen statichki vo create)" << endl;

    CreateAndDestroy seventh( 7 );
    cout << "   (lokalen avtomatski vo create)" << endl;
}
