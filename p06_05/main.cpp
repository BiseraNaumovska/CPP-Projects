/*
Вежби:
1. Создади класа Stedac во која ќе користиш статичка податочна членка
 kamata која ќе ја чува вредноста на годишната камата за сите штедачи
и статична податочна членка brojStedaci кој во секој момент кажува
колку штедачи има во банката. Останатите податочни членки се lice,
 bilans и kredit. Името, презимето, адресата и телефонот на секој
објeкт од класата Stedac  се сместени во приватна податочна членка
lice која е од класaта Covek.

*/


#include <iostream>
#include "covek.h"
#include "stedac.h"

using namespace std;

int main()
{
    Covek covek1("Petar","PEtrov", "Adresa 1", "071235478");
    Stedac stedac1(covek1, 10000.50, 5000.00);
    Stedac::setKamata(3.5);
    cout << "Ime: " <<stedac1.getLice().getIme()<<endl;
    cout << "Prezime: " <<stedac1.getLice().getPrezime()<<endl;
    cout << "Adresa: " <<stedac1.getLice().getAdresa()<<endl;
    cout << "Telefon: " <<stedac1.getLice().getTelefon()<<endl;
    cout << "Bilans: " <<stedac1.getBilans()<<endl;
    cout << "Kredit: " <<stedac1.getKredit()<<endl;
    cout << "Godishna kamata: " <<Stedac::getKamata()<< "%"<< endl;
    cout << "Broj na shtedachi: " <<Stedac::getBrojStedaci()<< endl;
    return 0;
}
