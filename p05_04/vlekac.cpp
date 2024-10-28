
#include "vlekac.h"
#include "zivotno.h"
#include <iostream>

using namespace std;

Vlekac::Vlekac(const string& i, char p, const Datum& dRagjanje, const Datum& dDonesuvanje, const Datum& dVakcinacija)
    : Zivotno(i, p, "Vlekac", dRagjanje, dDonesuvanje, dVakcinacija) {}

bool Vlekac::trebaVakcinacija(const Datum& denes) const {
    // Vlekacite se vakciniraat na sekoe 8 meseci
    int meseciDiff = (denes.getGodina() - datumNaPoslednaVakcinacija.getGodina()) * 12 +
                     (denes.getMesec() - datumNaPoslednaVakcinacija.getMesec());
    return meseciDiff >= 8;
}
