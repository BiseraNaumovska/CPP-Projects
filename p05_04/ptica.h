#ifndef PTICA_H
#define PTICA_H
#include "zivotno.h"
#include <iostream>
using namespace std;


class Ptica : public Zivotno {
public:
    Ptica(const string& i, char p, const Datum& dRagjanje, const Datum& dDonesuvanje, const Datum& dVakcinacija);
    bool trebaVakcinacija(const Datum& denes) const override;
};

#endif // PTICA_H
