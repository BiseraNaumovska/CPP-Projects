/*

1. Да се формира класа Квадар (скриени елементи: должина, ширина и
висина; јавни функции: плоштина, волумен). Од неа да се имплементира
поле од објекти. Да се најде оној кој има најмала плоштина, а не е
коцка. Да се креира мени:
a)	Креирај нов објект
b)	Постави ги димензиите
c)	Печати ги димензиите на сите објекти
d)	Печати ги димензиите за поедин објект
e)	Печати ги оние кои го задоволуваат условот

*/


#include <iostream>
#include <vector>

using namespace std;

class Kvadar{
private:
    int dolzina, shirina, visina;
public:
    //konstruktor
    Kvadar(int d=1,int s=1,int v=1):dolzina(d),shirina(s),visina(v){}
    void setDim(int d, int s, int v){
        dolzina = d;
        shirina = s;
        visina = v;
    }
    double Ploshtina(){
        return 2*(dolzina * shirina + shirina * visina + visina * dolzina);
    }
    double Volumen(){
        return dolzina * shirina * visina;
    }
    bool eKocka() {
        return (dolzina == shirina && shirina == visina);
    }

    void printDim() {
        cout << "Dolzina: " << dolzina << ", Shirina: " << shirina << ", Visina: " << visina << endl;
    }
};

void pechatiMeni(){
    cout << "Menu:\n";
    cout << "a) Kreiraj nov objekt\n";
    cout << "b) Postavi gi dimenziite\n";
    cout << "c) Pechati gi dimenziite na site objekti\n";
    cout << "d) Pechati gi dimenziite za poedinechen objekt\n";
    cout << "e) Pechati gi onie koi go zadovoluvaat uslovot\n";
    cout << "0) Izlez\n";
}



int main()
{
    vector<Kvadar> kvadrati;
    char izbor;
    do {
        pecatiMeni();
        cout << "Izbor: ";
        cin >> izbor;

        switch (izbor) {
        case 'a': {
            // Kreiranje nov objekt
            Kvadar novKvadar;
            kvadrati.push_back(novKvadar);
            cout << "Kreiran e nov objekt.\n";
            break;
        }
        case 'b': {
            // Potavi dimenzii na objekt
            int index, d, s, v;
            cout << "Vnesi indeks na objekt: ";
            cin >> index;
            if (index >= 0 && index < kvadrati.size()) {
                cout << "Vnesi dolzina, shirina i visina: ";
                cin >> d >> s >> v;
                kvadrati[index].setDim(d, s, v);
                cout << "Dimenziite se postaveni.\n";
            } else {
                cout << "error.\n";
            }
            break;
        }
        case 'c': {
            // PEchati dimenzii na site objekti
            for (int i = 0; i < kvadrati.size(); i++) {
                cout << "Objekt " << i + 1 << ": ";
                kvadrati[i].printDim();
            }
            break;
        }
        case 'd': {
            // Pechati dimenzii na odreden objekt
            int index;
            cout << "Vnesi indeks na objekt: ";
            cin >> index;
            if (index >= 0 && index < kvadrati.size()) {
                kvadrati[index].printDim();
            } else {
                cout << "Невалиден индекс.\n";
            }
            break;
        }
        case 'e': {
            // Pechati objekti shto zadovoluvaat uslov
            int minPlostina = -1;
            int minIndex = -1;
            for (int i = 0; i < kvadrati.size(); i++) {
                if (!kvadrati[i].eKocka()) {
                    int plostina = kvadrati[i].Plostina();
                    if (minPlostina == -1 || plostina < minPlostina) {
                        minPlostina = plostina;
                        minIndex = i;
                    }
                }
            }
            if (minIndex != -1) {
                cout << "Objekt so najmala ploshtina, a ne e kocka:\n";
                kvadrati[minIndex].printDim();
            } else {
                cout << "Nema objekti shto zadovoluvaat uslov.\n";
            }
            break;
        }
        case '0': {
            cout << "Izlez.\n";
            break;
        }
        default:
            cout << "error.\n";
            break;
        }
    } while (izbor != '0');

    return 0;
}
