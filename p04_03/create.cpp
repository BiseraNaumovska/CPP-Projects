#include <iostream>
#include "create.h"

CreateAndDestroy::CreateAndDestroy( int value )
{
    data = value;
    cout << "Objekt " << data << "   konstruktor";
} // kraj na CreateAndDestroy construktorot

CreateAndDestroy::~CreateAndDestroy()
{ cout << "Objekt " << data << "   destruktor " << endl; }

