#ifndef COVEK_H
#define COVEK_H

#include <string>
using namespace std;

class Covek
{
private:
    string ime;
    string prezime;
    string adresa;
    string telefon;

public:
    Covek(const string& ime, const string& prezime, const string& adresa, const string& telefon);
    string getIme() const;
    string getPrezime() const;
    string getAdresa() const;
    string getTelefon() const;
};

#endif // COVEK_H
