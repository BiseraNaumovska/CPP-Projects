#include <iostream>
#include "zivotno.h"
using namespace std;

Zivotno::Zivotno(const std::string& i, char p, const std::string& t,
                 const Datum& ragjanje, const Datum& donesuvawe, const Datum& vakcinacija)
    : ime(i), pol(p), tip(t), datumNaRagjanje(ragjanje), datumNaDonesuvaweVoZoo(donesuvawe), datumNaPoslednaVakcinacija(vakcinacija) {}

void Zivotno::prikaziPodatoci() const {
    cout << "Ime: " << ime << ", Pol: " << pol << ", Tip: " << tip << endl;
    cout << "Datum na ragjanje: "; datumNaRagjanje.prikaziDatum(); cout << endl;
    cout << "Datum na donesuvawe vo zoo: "; datumNaDonesuvaweVoZoo.prikaziDatum(); cout << endl;
    cout << "Datum na posledna vakcinacija: "; datumNaPoslednaVakcinacija.prikaziDatum(); cout << endl;
}
