#ifndef STEDAC_H
#define STEDAC_H

#include <iostream>
#include "covek.h"

using namespace std;

class Stedac
{
public:
    Stedac(const Covek& lice, double bilans, double kredit); // konstruktor
    static void setKamata(double novaKamata);
    static double getKamata();
    static int getBrojStedaci();

    Covek getLice() const;
    double getBilans() const;
    double getKredit() const;

private:
    static double kamata;
    static int broiStedaci;
    Covek lice;
    double bilans;
    double kredit;

};

#endif // STEDAC_H
