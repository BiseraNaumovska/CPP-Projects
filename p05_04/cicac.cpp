#include <iostream>
#include "cicac.h"
using namespace std;
Cicac::Cicac(const string& i, char p, const Datum& dRagjanje, const Datum& dDonesuvanje, const Datum& dVakcinacija)
    : Zivotno(i, p, "Cicac", dRagjanje, dDonesuvanje, dVakcinacija) {}

bool Cicac::trebaVakcinacija(const Datum& denes) const {
    return datumNaPoslednaVakcinacija.eVoRokOdEdnaNedela(denes);
}
