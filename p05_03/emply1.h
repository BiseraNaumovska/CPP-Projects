#ifndef EMPLY1_H
#define EMPLY1_H

#include "date1.h"

class Employee {
public:
    Employee( char *, char *, int, int, int, int, int, int );
    void print() const;
    ~Employee();  // za otslikuvanje na redosledot na unishtuvanje objekti
private:
    char firstName[ 25 ];
    char lastName[ 25 ];
    const Date birthDate;
    const Date hireDate;
}; // kraj na klasata Employee

#endif
