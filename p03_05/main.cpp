/*
2. Да се направи програма која ќе ја користи класата Штедач и ќе овозможи:
a)	Внесување на нов штедач во системот
b)	Приказ на податоците
c)	Уплата на средства
d)	Исплата на средства (со контрола дали е можна таква исплата)
e)	Приказ на салдото за даден штедач
class Stedac
{
 public:
        void vnesi_podatoci();
        void prikazi_podatoci();
        void uplata(unsigned long i);
        void isplata(unsigned long i);
        long sostojba();

  private:
        int broj;
        char imeprezime[30], adresa[50];
        long saldo;
};

*/
#include <iostream>
#include <cstring>

using namespace std;

class Stedac {
public:
    void vnesi_podatoci() {
        cout << "Vnesi broj na stedac: ";
        cin >> broj;
        cin.ignore(); // Чистење на баферот
        cout << "Vnesi ime i prezime: ";
        cin.getline(imeprezime, 30);
        cout << "Vnesi adresa: ";
        cin.getline(adresa, 50);
        saldo = 0; // Иницијално салдото е нула
        cout << "Stedacot e vnesen vo sistemot." << endl;
    }

    void prikazi_podatoci() {
        cout << "Broj: " << broj << endl;
        cout << "Ime i prezime: " << imeprezime << endl;
        cout << "Adresa: " << adresa << endl;
        cout << "Saldo: " << saldo << " denari" << endl;
    }

    void uplata(unsigned long i) {
        saldo += i;
        cout << "Uplateni se " << i << " denari." << endl;
    }

    void isplata(unsigned long i) {
        if (i <= saldo) {
            saldo -= i;
            cout << "Isplateni se " << i << " denari." << endl;
        } else {
            cout << "Nema dovolno sredstva na smetkata za isplata!" << endl;
        }
    }

    long sostojba() {
        return saldo;
    }

private:
    int broj;
    char imeprezime[30], adresa[50];
    long saldo;
};

int main() {
    Stedac stedac;
    char izbor;
    unsigned long iznos;

    do {
        cout << "\nMeni:\n";
        cout << "a) Vnesi nov stedac\n";
        cout << "b) Prikazi podatoci za stedacot\n";
        cout << "c) Uplata na sredstva\n";
        cout << "d) Isplata na sredstva\n";
        cout << "e) Prikazi saldo\n";
        cout << "0) Izlez\n";
        cout << "Izbor: ";
        cin >> izbor;

        switch (izbor) {
        case 'a':
            stedac.vnesi_podatoci();
            break;
        case 'b':
            stedac.prikazi_podatoci();
            break;
        case 'c':
            cout << "Vnesi iznos za uplata: ";
            cin >> iznos;
            stedac.uplata(iznos);
            break;
        case 'd':
            cout << "Vnesi iznos za isplata: ";
            cin >> iznos;
            stedac.isplata(iznos);
            break;
        case 'e':
            cout << "Saldo: " << stedac.sostojba() << " denari" << endl;
            break;
        case '0':
            cout << "Izlez od programata." << endl;
            break;
        default:
            cout << "Greshen izbor! Obidi se povtorno." << endl;
            break;
        }
    } while (izbor != '0');

    return 0;
}
