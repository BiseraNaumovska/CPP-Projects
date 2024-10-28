#ifndef CICAC_H
#define CICAC_H

#include "zivotno.h"

using namespace std;

class Cicac : public Zivotno {
public:
    Cicac(const std::string& i, char p, const Datum& dRagjanje, const Datum& dDonesuvanje, const Datum& dVakcinacija);
    bool trebaVakcinacija(const Datum& denes) const override;
};

#endif // CICAC_H
