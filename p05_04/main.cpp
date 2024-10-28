/*
Во една зоолошка градина се води евиденција за различни типови животни кои
се чуваат во неа: птици, влекачи, цицачи.... Користејќи ги концептите на
ООП да се моделира класа според спецификациите дадени на слика 5.1. Цицачите
се вакцинираат секоја година, птиците на секои 6 месеци, а влекачите на секои
8 месеци. Датумите да се дефинираат во посебна класа Datum со приватни
податочни членки den, mesec и godina. Да се имплементира кориснички
посредник преку мени со следните опции:

1.	Додавање на животно во зоолошка градина
2.	Прикажување на бројна состојба
3.	Прикажување на животни од дадена група (тип: c- цицачи, v-влекачи, p-птици)
4.	Прикажување на целата листа
5.	Прикажување на сите животни кои треба да се вакцинираат во рок од 1 недела
6.	Излез од менито

Klasa: Zivotno
Podatoci:
Datum_na_ragjanje
Datum_na_donesuvawe_vo_zoo
tip
Pol (m/z)
Ime
Datum_na_posledna_vakcinacija
Metodi:
Konstruktor()
Prikazi_Podatoci()
Presmetaj_vakcinacija()

*/

#include <iostream>
#include <vector>
#include "cicac.h"
#include "zivotno.h"
#include "datum.h"
#include "ptica.h"
#include "vlekac.h"

using namespace std;

int main()
{
    vector<Zivotno*> zoo;
    int izbor;
    do {
        cout << "Menu:\n";
        cout << "1. Dodavanje na zivotno vo zooloshka gradina\n";
        cout << "2. Prikazhuvanje na brojna sostojba\n";
        cout << "3. Prikazhuvanje na zivotni od dadena grupa\n";
        cout << "4. Prikazhuvanje na celata lista\n";
        cout << "5. Prikazhuvanje na site zivotni koi treba da se vakciniraat vo rok od 1 nedela\n";
        cout << "6. Izlez od menito\n";
        cout << "Izbor: ";
        cin >> izbor;

        switch (izbor) {
        case 1: {
            // Add a new animal to the zoo
            break;
        }
        case 2: {
            cout << "Brojna sostojba: " << zoo.size() << endl;
            break;
        }
        case 3: {
            // Show animals from a specific group
            break;
        }
        case 4: {
            for (const auto& zivotno : zoo) {
                zivotno->prikaziPodatoci();
                cout << "---------------------" << endl;
            }
            break;
        }
        case 5: {
            Datum denes(14, 10, 2024); // Example current date
            for (const auto& zivotno : zoo) {
                if (zivotno->trebaVakcinacija(denes)) {
                    zivotno->prikaziPodatoci();
                    cout << "---------------------" << endl;
                }
            }
            break;
        }
        case 6:
            cout << "Izlez od programata.\n";
            break;
        default:
            cout << "Nevaliden izbor. Obidi se povtorno.\n";
        }
    } while (izbor != 6);

    // Clean up dynamically allocated memory
    for (auto& zivotno : zoo) {
        delete zivotno;
    }
    return 0;
}
