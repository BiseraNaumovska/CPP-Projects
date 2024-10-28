#ifndef ZIVOTNO_H
#define ZIVOTNO_H

#include "datum.h"
#include <string>

using namespace std;

class Zivotno{
protected:
    string ime;
    char pol;
    string tip;
    Datum datumNaRagjanje;
    Datum datumNaDonesuvaweVoZoo;
    Datum datumNaPoslednaVakcinacija;

public:
Zivotno(const string& i, char p, const string& t,
        const Datum& ragjanje, const Datum& donesuvawe,
            const Datum& vakcinacija);
virtual void prikaziPodatoci() const;
virtual bool trebaVakcinacija(const Datum& denes) const = 0; // Pure virtual function
};
#endif
