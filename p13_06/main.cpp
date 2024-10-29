/*
Вежби:

Во една зоолошка градина се води евиденција за животните кои се чуваат во неа: птици, влекачи и цицачи. Користејќи ги концептите на ООП да се моделираат соодветни класи според спецификациите дадени на слика 1. Цицачите се вакцинираат секоја година, птиците на секои 6 месеци, а за влекачите овој податок варира. Во main() функцијата да се конструира низа од долунаведените класи (влекачи, птици и цицачи) и да се имплементира кориснички посредник преку мени со следните опции:
1.	Додавање на животно во листата
2.	Прикажување на бројна состојба
3.	Прикажување на животни од дадена група
4.	Прикажување на целата листа
5.	Прикажување на сите животни кои треба да се вакцинираат во рок од 1 недела
6.	Излез од менито

Klasa: zivotno
Podatoci:
Datum_na_ragjanje
Datum_na_donesuvawe_vo_zoo
Pol (m/z)
Ime
Datum_na_posledna_vakcinacija
Metodi:
Konstruktor()
Prikazi_Podatoci()
Presmetaj_vakcinacija() //виртуелна

наследуваат од zivotno
Klasa: vlekaci	Klasa: ptici	Klasa: cicaci
Podatoci:
Datum_na_ragjanje
Datum_na_donesuvawe_vo_zoo
Pol (m/z)
Ime
Datum_na_posledna_vakcinacija
Datum_na_sledna_vakcinacija	Podatoci:
Datum_na_ragjanje
Datum_na_donesuvawe_vo_zoo
Pol (m/z)
Im
Datum_na_posledna_vakcinacija
Letac (d/n)	Podatoci:
Datum_na_ragjanje
Datum_na_donesuvawe_vo_zoo
Pol (m/z)
Ime
Datum_na_posledna_vakcinacija
Prezivar (d/n)
Metodi:
Konstruktor()
Prikazi_Podatoci()
Presmetaj_vakcinacija()	Metodi:
Konstruktor()
Prikazi_Podatoci()
Presmetaj_vakcinacija()	Metodi:
Konstruktor()
Prikazi_Podatoci()
Presmetaj_vakcinacija()




*/

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

const int MAX_ANIMALS = 100;


class Datum {
private:
    int day;
    int month;
    int year;

public:
    Datum(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    string prikaziDatum() const {
        return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    }

    bool trebaVakcinacija() const {
        time_t now = time(0);
        tm *ltm = localtime(&now);
        tm vaccinationDate = {0};
        vaccinationDate.tm_year = year - 1900;
        vaccinationDate.tm_mon = month - 1;
        vaccinationDate.tm_mday = day;

        double seconds = difftime(mktime(ltm), mktime(&vaccinationDate));
        double days = seconds / (60 * 60 * 24);

        return days < 7 && days >= 0;
    }
};

// Base class for animals
class zivotno {
protected:
    Datum datum_na_ragjanje;
    Datum datum_na_donesuvawe_vo_zoo;
    char pol;
    string ime;
    Datum datum_na_posledna_vakcinacija;

public:
    zivotno(Datum ragjanje, Datum donesuvanje, char p, string ime, Datum posledna_vakcinacija)
        : datum_na_ragjanje(ragjanje), datum_na_donesuvawe_vo_zoo(donesuvanje), pol(p), ime(ime), datum_na_posledna_vakcinacija(posledna_vakcinacija) {}

    virtual void Prikazi_Podatoci() {
        cout << "Ime: " << ime << ", Pol: " << pol << ", Datum na ragjanje: " << datum_na_ragjanje.prikaziDatum()
        << ", Datum na donesuvanje: " << datum_na_donesuvawe_vo_zoo.prikaziDatum()
        << ", Datum na posledna vakcinacija: " << datum_na_posledna_vakcinacija.prikaziDatum();
    }

    virtual Datum Presmetaj_vakcinacija() = 0;
};

class vlekaci : public zivotno {
private:
    Datum datum_na_sledna_vakcinacija;

public:
    vlekaci(Datum ragjanje, Datum donesuvanje, char p, string ime, Datum posledna_vakcinacija, Datum sledna_vakcinacija)
        : zivotno(ragjanje, donesuvanje, p, ime, posledna_vakcinacija), datum_na_sledna_vakcinacija(sledna_vakcinacija) {}

    void Prikazi_Podatoci() override {
        zivotno::Prikazi_Podatoci();
        cout << ", Datum na sledna vakcinacija: " << datum_na_sledna_vakcinacija.prikaziDatum() << endl;
    }

    Datum Presmetaj_vakcinacija() override {
        return datum_na_sledna_vakcinacija;
    }
};

class ptici : public zivotno {
private:
    char letac;

public:
    ptici(Datum ragjanje, Datum donesuvanje, char p, string ime, Datum posledna_vakcinacija, char l)
        : zivotno(ragjanje, donesuvanje, p, ime, posledna_vakcinacija), letac(l) {}

    void Prikazi_Podatoci() override {
        zivotno::Prikazi_Podatoci();
        cout << ", Letac: " << (letac == 'd' ? "Yes" : "No") << endl;
    }

    Datum Presmetaj_vakcinacija() override {
        return datum_na_posledna_vakcinacija;
    }
};

class cicaci : public zivotno {
private:
    char prezivar;

public:
    cicaci(Datum ragjanje, Datum donesuvanje, char p, string ime, Datum posledna_vakcinacija, char pr)
        : zivotno(ragjanje, donesuvanje, p, ime, posledna_vakcinacija), prezivar(pr) {}

    void Prikazi_Podatoci() override {
        zivotno::Prikazi_Podatoci();
        cout << ", Prezivar: " << (prezivar == 'd' ? "Yes" : "No") << endl;
    }

    Datum Presmetaj_vakcinacija() override {
        return datum_na_posledna_vakcinacija;
    }
};

// Function prototypes
void dodajZivotno(zivotno* animals[], int &count);
void prikaziBrojnaSostojba(zivotno* animals[], int count);
void prikaziZivotniOdGrupa(zivotno* animals[], int count);
void prikaziCelosnaLista(zivotno* animals[], int count);
void prikaziVakcinacija(zivotno* animals[], int count);

int main() {
    zivotno* animals[MAX_ANIMALS];
    int animalCount = 0;
    int choice;

    do {
        cout << "Meni:\n"
             << "1. Dodaj zivotno\n"
             << "2. Prikazi brojna sostojba\n"
             << "3. Prikazi zivotni od dadena grupa\n"
             << "4. Prikazi celosna lista\n"
             << "5. Prikazi zivotni za vakcinacija vo rok od 1 nedela\n"
             << "6. Izlez\n"
             << "Izberete opcija: ";
        cin >> choice;

        switch (choice) {
        case 1:
            dodajZivotno(animals, animalCount);
            break;
        case 2:
            prikaziBrojnaSostojba(animals, animalCount);
            break;
        case 3:
            prikaziZivotniOdGrupa(animals, animalCount);
            break;
        case 4:
            prikaziCelosnaLista(animals, animalCount);
            break;
        case 5:
            prikaziVakcinacija(animals, animalCount);
            break;
        case 6:
            cout << "Izlez...\n";
            break;
        default:
            cout << "Nepoznata opcija!\n";
            break;
        }
    } while (choice != 6);

    for (int i = 0; i < animalCount; ++i) {
        delete animals[i];
    }

    return 0;
}

void dodajZivotno(zivotno* animals[], int &count) {
    if (count >= MAX_ANIMALS) {
        cout << "Ne moze da se dodade povekje zivotni.\n";
        return;
    }

    int tip;
    cout << "1. Vlekaci\n2. Ptici\n3. Cicaci\nIzberete tip: ";
    cin >> tip;

    Datum ragjanje, donesuvanje, posledna_vakcinacija;
    char pol, letac, prezivar;
    string ime;

    cout << "Vnesete datum na ragjanje (day month year): ";
    int d, m, y;
    cin >> d >> m >> y;
    ragjanje = Datum(d, m, y);

    cout << "Vnesete datum na donesuvanje (day month year): ";
    cin >> d >> m >> y;
    donesuvanje = Datum(d, m, y);

    cout << "Vnesete pol (m/z): ";
    cin >> pol;

    cout << "Vnesete ime: ";
    cin >> ime;

    cout << "Vnesete datum na posledna vakcinacija (day month year): ";
    cin >> d >> m >> y;
    posledna_vakcinacija = Datum(d, m, y);

    switch (tip) {
    case 1: {
        Datum sledna_vakcinacija;
        cout << "Vnesete datum na sledna vakcinacija (day month year): ";
        cin >> d >> m >> y;
        sledna_vakcinacija = Datum(d, m, y);
        animals[count++] = new vlekaci(ragjanje, donesuvanje, pol, ime, posledna_vakcinacija, sledna_vakcinacija);
        break;
    }
    case 2: {
        char letac;
        cout << "Vnesete letac (d/n): ";
        cin >> letac;
        animals[count++] = new ptici(ragjanje, donesuvanje, pol, ime, posledna_vakcinacija, letac);
        break;
    }
    case 3: {
        char prezivar;
        cout << "Vnesete prezivar (d/n): ";
        cin >> prezivar;
        animals[count++] = new cicaci(ragjanje, donesuvanje, pol, ime, posledna_vakcinacija, prezivar);
        break;
    }
    default:
        cout << "Nepoznat tip.\n";
        break;
    }
}

void prikaziBrojnaSostojba(zivotno* animals[], int count) {
    cout << "Brojna sostojba na zivotni: " << count << endl;
}

void prikaziZivotniOdGrupa(zivotno* animals[], int count) {
    int tip;
    cout << "1. Vlekaci\n2. Ptici\n3. Cicaci\nIzberete tip: ";
    cin >> tip;

    for (int i = 0; i < count; ++i) {
        if ((tip == 1 && dynamic_cast<vlekaci*>(animals[i])) ||
            (tip == 2 && dynamic_cast<ptici*>(animals[i])) ||
            (tip == 3 && dynamic_cast<cicaci*>(animals[i]))) {
            animals[i]->Prikazi_Podatoci();
        }
    }
}

void prikaziCelosnaLista(zivotno* animals[], int count) {
    for (int i = 0; i < count; ++i) {
        animals[i]->Prikazi_Podatoci();
        cout << endl;
    }
}

void prikaziVakcinacija(zivotno* animals[], int count) {
    cout << "Zivotni koi treba da se vakcinira vo rok od 1 nedela:\n";
    for (int i = 0; i < count; ++i) {
        if (animals[i]->Presmetaj_vakcinacija().trebaVakcinacija()) {
            animals[i]->Prikazi_Podatoci();
            cout << endl;
        }
    }
}


