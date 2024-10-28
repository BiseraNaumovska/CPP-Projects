#include <iostream>
#include "ptica.h"
using namespace std;

Ptica::Ptica(const string& i, char p, const Datum& dRagjanje, const Datum& dDonesuvanje, const Datum& dVakcinacija)
    : Zivotno(i, p, "Ptica", dRagjanje, dDonesuvanje, dVakcinacija) {}

bool Ptica::trebaVakcinacija(const Datum& denes) const {
    // Pticite se vakciniraat na sekoe 6 meseci
    int meseciDiff = (denes.getGodina() - datumNaPoslednaVakcinacija.getGodina()) * 12 +
                     (denes.getMesec() - datumNaPoslednaVakcinacija.getMesec());
    return meseciDiff >= 6;
}
