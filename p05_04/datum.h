#ifndef DATUM_H
#define DATUM_H

class Datum
{
private:
    int den, mesec, godina;
public:
    Datum(int d=1, int m=1, int g=2000);
    void prikaziDatum() const;
    int getDen() const;
    int getMesec() const;
    int getGodina() const;
    bool eVoRokOdEdnaNedela(const Datum& denes) const;
};

#endif // DATUM_H
