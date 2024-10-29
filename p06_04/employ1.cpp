#include <iostream>
#include "employ1.h"
#include <cstring>
#include <cassert>

using namespace std;

int Employee::count = 0;

int Employee::getCount() {return count;}

Employee::Employee(const char *first, const char * last){
    firstName = new char[strlen(first) + 1];
    assert(firstName != 0); // osiguraj se deka imash alocirano memorija
    strcpy(firstName, first);

    lastName = new char[strlen(last) + 1];
    assert(lastName != 0);
    strcpy(lastName, last);

    ++count;
    cout<<"Konstruktor za vraboten "<<firstName<<" "<<lastName<<" e povikan! "<<endl;
}

Employee::~Employee(){
    cout << "~Employee() povikan za " << firstName<< ' ' << lastName << endl;
    delete [] firstName;  // predaj memorija
    delete [] lastName;   // predaj memorija
    --count;
}

const char *Employee::getFirstName() const{
    return firstName;
}

const char *Employee::getLastName() const{
    return lastName;
}



