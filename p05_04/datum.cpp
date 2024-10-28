#include "datum.h"
#include <iostream>
#include <cmath>

using namespace std;


Datum::Datum(int d, int m, int g):den(d), mesec(m) , godina(g) {}

void Datum::prikaziDatum() const{
    cout<<den<<"/"<<mesec<<"/"<<godina;
}

int Datum::getDen() const{
    return den;
}

int Datum::getMesec() const {
    return mesec;
}

int Datum::getGodina() const{
    return godina;
}

int brojNaDenoviVoMesec(int mesec, int godina) {
    static const int denoviVoMesec[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (mesec == 2 && (godina % 4 == 0 && (godina % 100 != 0 || godina % 400 == 0))) {
        return 29;
    }
    return denoviVoMesec[mesec - 1];
}

int presmetajDenoviOdPocetokot(int den, int mesec, int godina) {
    int totalDenovi = 0;

    for (int g = 1; g < godina; ++g) {
        totalDenovi += (g % 4 == 0 && (g % 100 != 0 || g % 400 == 0)) ? 366 : 365;
    }

    for (int m = 1; m < mesec; ++m) {
        totalDenovi += brojNaDenoviVoMesec(m, godina);
    }

    totalDenovi += den;

    return totalDenovi;
}

bool Datum::eVoRokOdEdnaNedela(const Datum& denes) const {
    int totalDenoviOvojDatum = presmetajDenoviOdPocetokot(den, mesec, godina);
    int totalDenoviDenes = presmetajDenoviOdPocetokot(denes.getDen(), denes.getMesec(), denes.getGodina());

    int razlikaDenovi = abs(totalDenoviOvojDatum - totalDenoviDenes);

    return razlikaDenovi <= 7;
}
