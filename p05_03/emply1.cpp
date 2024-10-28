#include <iostream>
#include "emply1.h"
#include <cstring>
#include "emply1.h"

Employee::Employee( char *fname, char *lname,
                   int bmonth, int bday, int byear,
                   int hmonth, int hday, int hyear )
    : birthDate( bmonth, bday, byear ),
    hireDate( hmonth, hday, hyear )
{
    // kopiraj fname vo firstName i obezbedi mesto
    int length = strlen( fname );
    length = ( length < 25 ? length : 24 );
    strncpy( firstName, fname, length );
    firstName[ length ] = '\0';

    // kopiraj lname vo lastName i obezbedi mesto
    length = strlen( lname );
    length = ( length < 25 ? length : 24 );
    strncpy( lastName, lname, length );
    lastName[ length ] = '\0';

    cout << "Konstruktor za objekt od klasata Employee: "
         << firstName << ' ' << lastName << endl;
} // kraj na konstruktor na Employee

void Employee::print() const
{
    cout << lastName << ", " << firstName << "\nVrabotena: ";
    hireDate.print();
    cout << "  Rodenden: ";
    birthDate.print();
    cout << endl;
} // kraj na funkcijata print

// Destruktor: za demonstriranje na redosledot na unishtuvanje objekti
Employee::~Employee()
{
    cout << "Destruktor na objekt od klasata Employee : "
         << lastName << ", " << firstName << endl;
} // kraj na destruktorot od Employee


