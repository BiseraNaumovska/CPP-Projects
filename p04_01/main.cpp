// Primer p04_01.cpp
// Driver za Time1 klasa
// Zabeleshka: Kompajliraj so  time1.cpp

#include <iostream>

using namespace std;

#include "time1.h"

// Drajver za testiranje na klasata Time
int main()
{
    Time t;  // instanciraj objekt t od klasata Time

    cout << "Inicijalnoto voeno vreme e ";
    t.printMilitary();
    cout << "\nInicijalnoto standardno vreme e ";
    t.printStandard();

    t.setTime( 13, 27, 6 );
    cout << "\n\nVoeno vreme posle setTime e ";
    t.printMilitary();
    cout << "\nStandardno vreme posle setTime e ";
    t.printStandard();

    t.setTime( 99, 99, 99 );  // probaj greshni vrednosti
    cout << "\n\nPo obid za postavuvanje greshni vrednosti:\n"
         << "Voeno vreme: ";
    t.printMilitary();
    cout << "\nStandardno vreme: ";
    t.printStandard();
    cout << endl;

    return 0;
}
