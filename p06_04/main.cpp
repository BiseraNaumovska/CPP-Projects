#include <iostream>
#include "employ1.h"
using namespace std;

int main()
{
    cout << "Broj na vraboteni pred instanciranje e "<< Employee::getCount() << endl;   // koristi ime na klasata

    Employee *e1Ptr = new Employee( "Suzana", "Spasovska" );
    Employee *e2Ptr = new Employee( "Goce", "Arnaudov" );

    cout << "Broj na vraboteni po instanciranje e "<< e1Ptr->getCount();

    cout << "\n\nEmployee 1: "<< e1Ptr->getFirstName()<< " " << e1Ptr->getLastName()<<endl;
    cout<<"Employee 2: "<< e2Ptr->getFirstName()<< " " << e2Ptr->getLastName() << "\n\n";

    delete e1Ptr;   // vrati memorija
    e1Ptr = 0;
    delete e2Ptr;   // vrati memorija
    e2Ptr = 0;

    cout << "Broj na vraboteni po brishenje e "<< Employee::getCount() << endl;

    return 0;
}
