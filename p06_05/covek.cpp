#include "covek.h"
#include <iostream>
#include <string.h>

using namespace std;

Covek::Covek(const string& ime, const string& prezime, const string& adresa, const string& telefon): ime(ime), prezime(prezime), adresa(adresa), telefon(telefon) {}

string Covek::getIme() const{
    return ime;
}
string Covek::getPrezime() const{
    return prezime;
}
string Covek::getAdresa() const{
    return adresa;
}
string Covek::getTelefon() const{
    return telefon;
}
