/*
1. Создади класа Dropki која извршува операции со дропки.
Напиши „драјвер“ за твојот програм да манипулира со оваа
класа.

Користи целоборјни променливи за броител и именител кои мора да се приватни.
 Обезбеди потребен број на контруктори кои нема да дозволат дефинирање на
грешни вредности (со 0 не се дели!). По секоја од наредните операции,
дропката треба да се зачува во редуцирана форма, т.е дропката 2/4 треба
да се зачува како 1/2. Обезбеди ги следните јавни функции членки:

    а) Собирање на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма.
    б) Одземање на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма
    в) Множење на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма
    г) Делење на два објекти од класа Dropki. Резултатот да се даде во редуцирана форма
    д) Печатење на објектот во форма a/b.
    ѓ) Печатење на објектот во форма на реален број.

*/
#include <iostream>
#include "dropki.h"

using namespace std;

int main()
{
    Dropki d1(2, 4); // 1/2
    Dropki d2(3, 6); // 1/2

    cout << "First fraction: ";
    d1.printFraction();

    cout << "Second fraction: ";
    d2.printFraction();

    Dropki sum = d1 + d2;
    cout << "Sum: ";
    sum.printFraction();
    sum.printReal();

    Dropki difference = d1 - d2;
    cout << "Difference: ";
    difference.printFraction();
    difference.printReal();

    Dropki product = d1 * d2;
    cout << "Product: ";
    product.printFraction();
    product.printReal();

    Dropki quotient = d1 / d2;
    cout << "Quotient: ";
    quotient.printFraction();
    quotient.printReal();
    return 0;
}
