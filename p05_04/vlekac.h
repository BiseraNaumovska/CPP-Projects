#ifndef VLEKAC_H
#define VLEKAC_H

#include "zivotno.h"
#include <iostream>

using namespace std;


class Vlekac : public Zivotno {
public:
    Vlekac(const string& i, char p, const Datum& dRagjanje, const Datum& dDonesuvanje, const Datum& dVakcinacija);
    bool trebaVakcinacija(const Datum& denes) const override;
};

#endif // VLEKAC_H
