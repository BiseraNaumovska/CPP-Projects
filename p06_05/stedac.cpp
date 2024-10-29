#include<iostream>
#include "stedac.h"
using namespace std;

double Stedac::kamata = 0.0;
int Stedac::broiStedaci = 0;

Stedac::Stedac(const Covek& lice, double bilans, double kredit): lice(lice), bilans(bilans), kredit(kredit) {
    broiStedaci++;
}

void Stedac::setKamata(double novaKamata){
    kamata = novaKamata;
}

int Stedac::getBrojStedaci(){
    return broiStedaci;
}

double Stedac::getKamata(){
    return kamata;
}

Covek Stedac::getLice() const{
    return lice;
}

double Stedac::getBilans() const{
    return bilans;
}

double Stedac::getKredit() const{
    return kredit;
}

