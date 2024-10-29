/*
Вежби:

Во една продавница се води евиденција за артиклите кои се продаваат
во неа: пантолони и кошули. Користејќи ги концептите на ООП да се
моделираат соодветни класи според спецификациите дадени на сликата.
Пратката на пантолони доаѓа секој месец, а нарачки на кошули се
прават по потреба. Во main() функцијата да се конструира низа од
долунаведените класи (пантолони, кошули) и да се имплементира
кориснички посредник преку мени со следните опции:

1.      Додавање на артикл во листата
2.      Прикажување на артикли од дадена група
3.      Прикажување на целата листа (со вкупна цена)
4.      Прикажување на сите артикли кои треба да се набават во рок од 1 недела и пари кои треба да се потрошат за да се набават потребните артикли
5.      Излез од менито

Klasa: artikl
Podatoci:
Ime_na_artikl
Golemina
Cena
Donesen_vo_prodavnica
Metodi:
Konstruktor()
Prikazi_Podatoci()
Presmetaj_nabavka()

наследуваат од artikl
Klasa: pantoloni	Klasa: kosuli
Podatoci:
Ime_na_artikl
Golemina
Cena
Donesen_vo_prodavnica
Datum_na_sledna_nabavka	Podatoci:
Ime_na_artikl
Golemina
Cena
Donesen_vo_prodavnica

Metodi:
Konstruktor()
Prikazi_Podatoci()
Presmetaj_nabavka()	Metodi:
Konstruktor()
Prikazi_Podatoci()
Presmetaj_nabavka()

Приватната членка Donesen_vo_prodavnica е од тип Datum кој треба да
се дефинира во посебна класа.


*/

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cmath>

using namespace std;

const int MAX = 100; // maksimalen broj na artikli

class Datum{
private:
    int day;
    int month;
    int year;
public:
    Datum(int d=1, int m=1, int y=2000): day(d), month(m), year(y){}
    string prikaziDatum() const {
        return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    }
    int daysDifference(const Datum& other) const {
        int days1 = year * 365 + month * 30 + day;
        int days2 = other.year * 365 + other.month * 30 + other.day;
        return abs(days1 - days2);
    }

    static Datum getCurrentDate() {
        time_t now = time(0);
        tm* ltm = localtime(&now);
        return Datum(ltm->tm_mday, 1 + ltm->tm_mon, 1900 + ltm->tm_year);
    }
};


class artikl{
protected:
    string Ime_na_artikl;
    string Golemina;
    double Cena;
    Datum Donesen_vo_prodavnica;
public:
    artikl(string ime="", string golemina = "", double cena=0, Datum doneseno=Datum()):Ime_na_artikl(ime), Golemina(golemina), Cena(cena),Donesen_vo_prodavnica(doneseno){}
    virtual void Prikazi_Podatoci(){
        cout<<"Artikl: "<<Ime_na_artikl<<", Golemina: "<<Golemina<<", Cena: "<<Cena<<", Donesen vo prodavnica: "<<Donesen_vo_prodavnica.prikaziDatum();
        cout<<endl;
    }
    virtual double Presmetaj_nabavka() = 0;
    virtual ~artikl() {}

};

class pantaloni:public artikl{
private:
    Datum Datum_na_sledna_nabavka;
public:
    pantaloni(string ime="", string golemina="",double cena=0, Datum doneseno=Datum(), Datum datum_nabavka = Datum()): artikl(ime, golemina, cena, doneseno),Datum_na_sledna_nabavka(datum_nabavka){}

    void Prikazi_Podatoci() override{
        artikl::Prikazi_Podatoci();
        cout<<"Datum na sledna nabavka: "<<Datum_na_sledna_nabavka.prikaziDatum();
        cout<<endl;
    }
    double Presmetaj_nabavka(){
      return Cena ;
    }
    Datum getDatumNaNabavka() const {
        return Datum_na_sledna_nabavka;
    }

};


class kosuli:public artikl{
public:
    kosuli(string ime = "", string golemina = "", double cena = 0, Datum doneseno = Datum())
        : artikl(ime, golemina, cena, doneseno) {}

    void Prikazi_Podatoci() override {
        artikl::Prikazi_Podatoci();
    }

    double Presmetaj_nabavka() override {
        return Cena;
    }
};



int main()
{
    artikl* artikli[MAX];
    int artiklCount = 0;
    int choice;

    do{
        cout << "Meni:\n"
             << "1. Dodadi artikl\n"
             << "2. Prikazi artikli od dadena grupa\n"
             << "3. Prikazi celosna lista\n"
             << "4. Prikazi artikli za nabavka vo rok od 1 nedela\n"
             << "5. Izlez\n"
             << "Izberete opcija: ";
        cin >> choice;

        if (choice == 1) {
            if (artiklCount >= MAX) {
                cout << "Ne moze da se dodade povekje artikli.\n";
                continue;
            }

            int tip;
            cout << "1. Pantoloni\n2. Kosuli\nIzberete tip: ";
            cin >> tip;

            string ime, golemina;
            double cena;
            int d, m, y;

            cout << "Vnesete ime na artikl: ";
            cin >> ime;
            cout << "Vnesete golemina: ";
            cin >> golemina;
            cout << "Vnesete cena: ";
            cin >> cena;
            cout << "Vnesete datum na donesuvanje (day month year): ";
            cin >> d >> m >> y;

            Datum doneseno(d, m, y);

            if (tip == 1) {
                cout << "Vnesete datum na sledna nabavka (day month year): ";
                cin >> d >> m >> y;
                Datum datum_nabavka(d, m, y);
                artikli[artiklCount++] = new pantaloni(ime, golemina, cena, doneseno, datum_nabavka);
            } else {
                artikli[artiklCount++] = new kosuli(ime, golemina, cena, doneseno);
            }

        } else if (choice == 2) {
            int tip;
            cout << "1. Pantoloni\n2. Kosuli\nIzberete tip: ";
            cin >> tip;

            cout << "Artikli:\n";
            for (int i = 0; i < artiklCount; ++i) {
                if ((tip == 1 && dynamic_cast<pantaloni*>(artikli[i])) ||
                    (tip == 2 && dynamic_cast<kosuli*>(artikli[i]))) {
                    artikli[i]->Prikazi_Podatoci();
                }
            }
        } else if (choice == 3) {
            double totalCena = 0;
            cout << "Celosna lista:\n";
            for (int i = 0; i < artiklCount; ++i) {
                artikli[i]->Prikazi_Podatoci();
                totalCena += artikli[i]->Presmetaj_nabavka();
            }
            cout << "Vkupna cena: " << totalCena << endl;
        } else if (choice == 4) {
            cout << "Artikli za nabavka:\n";
            double totalCena = 0;
            for (int i = 0; i < artiklCount; ++i) {
                if (pantaloni* p = dynamic_cast<pantaloni*>(artikli[i])) {
                    Datum nabavka = p->getDatumNaNabavka();
                    p->Prikazi_Podatoci();
                    totalCena += p->Presmetaj_nabavka();
                }
            }
            cout << "Totalna cena za nabavka: " << totalCena << endl;
        }
    }while (choice != 5);

    for (int i = 0; i < artiklCount; ++i) {
        delete artikli[i];
    }


    return 0;
}


























