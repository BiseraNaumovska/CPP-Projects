/*
Користејќи ги концептите на ООП да се моделираат соодветни класи според
спецификациите дадени на слика 1, а потоа во функцијата main() да се
констуира низа со објекти од долунаведените класи (професор, асистент,
демонстратор) и имплементира кориснички посредник преку мени со следните
опции:

1.    Додавање на нов вработен во листата
2.    Прикажување на листата
3.    Крај

*/
#include <iostream>
#include <cstring>
using namespace std;

class vraboten{
protected:
    char ime[50];
    char prezime[50];
    int godina_na_vrabotuvanje;

public:
    vraboten(){
        ime[0] = '\0';
        prezime[0] = '\0';
        godina_na_vrabotuvanje = 0;
    }

    void postavi(const char* i, const char* p, int godina){
        strncpy(ime,i,sizeof(ime) -1);
        strncpy(prezime, p, sizeof(prezime) - 1);
        godina_na_vrabotuvanje = godina;
    }

    virtual void prikazi_podatoci() {
        cout << "Ime: " << ime << ", Prezime: " << prezime<< ", Godina na vrabotuvanje: " << godina_na_vrabotuvanje << endl;
    }
};

class profesor : public vraboten{
private:
    char zvanje[50];
    char oblast[50];
    int br_predmeti;

public:
    profesor() : br_predmeti(0) {
        zvanje[0] = '\0';
        oblast[0] = '\0';
    }

    void postavi(const char* i, const char* p, int godina, const char* z, const char* ob, int br) {
        vraboten::postavi(i, p, godina);
        strncpy(zvanje, z, sizeof(zvanje) - 1);
        strncpy(oblast, ob, sizeof(oblast) - 1);
        br_predmeti = br;
    }

    void prikazi_podatoci() override {
        vraboten::prikazi_podatoci();
        cout << "Zvanje: " << zvanje << ", Oblast: " << oblast<< ", Broj na predmeti: " << br_predmeti << endl;
    }
};

class asistent : public vraboten {
private:
    char zvanje[50];
    char mentor[50];
    int br_predmeti;

public:
    asistent() : br_predmeti(0) {
        zvanje[0] = '\0';
        mentor[0] = '\0';
    }

    void postavi(const char* i, const char* p, int godina, const char* z, const char* m, int br) {
        vraboten::postavi(i, p, godina);
        strncpy(zvanje, z, sizeof(zvanje) - 1);
        strncpy(mentor, m, sizeof(mentor) - 1);
        br_predmeti = br;
    }

    void prikazi_podatoci() override {
        vraboten::prikazi_podatoci();
        cout << "Zvanje: " << zvanje << ", Mentor: " << mentor<< ", Broj na predmeti: " << br_predmeti << endl;
    }
};


class demonstrator : public vraboten {
private:
    char rabotno_vreme[50];

public:
    demonstrator() {
        rabotno_vreme[0] = '\0';
    }

    void postavi(const char* i, const char* p, int godina, const char* rv) {
        vraboten::postavi(i, p, godina);
        strncpy(rabotno_vreme, rv, sizeof(rabotno_vreme) - 1);
    }

    void prikazi_podatoci() override {
        vraboten::prikazi_podatoci();
        cout << "Rabotno vreme: " << rabotno_vreme << endl;
    }
};

int main()
{
    vraboten* vraboteni[100]; // Niza od pokazuvaci do 100 vraboten
    int izbor, count = 0;

    do {
        cout << "1. Dodavanje na nov vraboten vo listata" << endl;
        cout << "2. Prikazuvanje na listata" << endl;
        cout << "3. Kraj" << endl;
        cout << "Izberete opcija: ";
        cin >> izbor;
        cin.ignore(); // Za da se ischisti vlezot

        if (izbor == 1) {
            int tip;
            cout << "Izberete tip na vraboten (1 - Profesor, 2 - Asistent, 3 - Demonstrator): ";
            cin >> tip;
            cin.ignore(); // Za da se ischisti vlezot

            char ime[50], prezime[50], zvanje[50], oblast[50], mentor[50], rabotno_vreme[50];
            int godina, br_predmeti;

            cout << "Vnesete ime: ";
            cin.getline(ime, 50);
            cout << "Vnesete prezime: ";
            cin.getline(prezime, 50);
            cout << "Vnesete godina na vrabotuvanje: ";
            cin >> godina;
            cin.ignore(); // Za da se ischisti vlezot

            if (tip == 1) { // Profesor
                cout << "Vnesete zvanje: ";
                cin.getline(zvanje, 50);
                cout << "Vnesete oblast: ";
                cin.getline(oblast, 50);
                cout << "Vnesete broj na predmeti: ";
                cin >> br_predmeti;
                profesor* p = new profesor();
                p->postavi(ime, prezime, godina, zvanje, oblast, br_predmeti);
                vraboteni[count++] = p;
            }
            else if (tip == 2) { // Asistent
                cout << "Vnesete zvanje: ";
                cin.getline(zvanje, 50);
                cout << "Vnesete mentor: ";
                cin.getline(mentor, 50);
                cout << "Vnesete broj na predmeti: ";
                cin >> br_predmeti;
                asistent* a = new asistent();
                a->postavi(ime, prezime, godina, zvanje, mentor, br_predmeti);
                vraboteni[count++] = a;
            }
            else if (tip == 3) { // Demonstrator
                cout << "Vnesete rabotno vreme: ";
                cin.getline(rabotno_vreme, 50);
                demonstrator* d = new demonstrator();
                d->postavi(ime, prezime, godina, rabotno_vreme);
                vraboteni[count++] = d;
            }
            else {
                cout << "Nevaliden tip na vraboten!" << endl;
            }
        }
        else if (izbor == 2) {
            cout << "Lista na vraboteni:" << endl;
            for (int i = 0; i < count; ++i) {
                vraboteni[i]->prikazi_podatoci();
                cout << endl;
            }
        }
    } while (izbor != 3);

    // Osloboduvawe na memorijata
    for (int i = 0; i < count; ++i) {
        delete vraboteni[i];
    }
    return 0;
}
