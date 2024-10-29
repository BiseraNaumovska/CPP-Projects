#include <iostream>
#include "array1.h"
using namespace std;

int main()
{
    // seushte nema objekti
    cout << "# na instancirani nizi = "
         << Array::getArrayCount() << '\n';

    // kreiraj dve nizi i ispechati go brojot na Array objekti
    Array integers1( 7 ), integers2;
    cout << "# na instancirani nizi = "
         << Array::getArrayCount() << "\n\n";

    // ispechati ja goleminata i sodrzhinata na integers1
    cout << "Goleminata na nizata integers1 e "
         << integers1.getSize()
         << "\nPo inicijalizacijata:\n"
         << integers1 << '\n';

    // ispechati ja goleminata i sodrzhinata na integers2
    cout << "Goleminata na nizata integers2 e "
         << integers2.getSize()
         << "\nPo inicijalizacijata:\n"
         << integers2 << '\n';

    // vnesi gi i ispechati gi integers1 i integers2
    cout << "Vnesi 17 celi broja:\n";
    cin >> integers1 >> integers2;
    cout << "Po vnesuvanjeto, nizite sodzhat:\n"
         << "integers1:\n" << integers1
         << "integers2:\n" << integers2 << '\n';

    // iskoristi go preklopeniot operator za neednakvost (!=)
    cout << "Presmetuvam: integers1 != integers2\n";
    if ( integers1 != integers2 )
        cout << "Ne se ednakvi\n";

    // sozdadi niza integers3 koristejki ja integers1 kako
    // inicijalizator; ispechati ja goleminata i sodrzhinata
    Array integers3( integers1 );

    cout << "\nGoleminata na nizata integers3 e "
         << integers3.getSize()
         << "\nNizata po inicijalizacijata:\n"
         << integers3 << '\n';

    // iskoristi go preklopeniot operator za dodeluvanje (=)
    cout << "Dodeli go integers2 na integers1:\n";
    integers1 = integers2;
    cout << "integers1:\n" << integers1
         << "integers2:\n" << integers2 << '\n';

    // iskoristi go preklopeniot operator za ednakvost (==)
    cout << "Presmetuvam: integers1 == integers2\n";
    if ( integers1 == integers2 )
        cout << "Ednakvi se\n\n";

    // iskoristi go preklopeniot indeksen operator za da sozdadesh rvalue
    cout << "integers1[5] e " << integers1[ 5 ] << '\n';

    // iskoristi go preklopeniot indeksen operator za da sozdadesh lvalue
    cout << "Dodeluvam 1000 na integers1[5]\n";
    integers1[ 5 ] = 1000;
    cout << "integers1:\n" << integers1 << '\n';

    // obid da se postavi indeks nadvor od rangott
    cout << "Obid za dodeluvanje na 1000 na integers1[15]" << endl;
    integers1[ 15 ] = 1000;  // GRESHKA: nadvor od rang

    return 0;
}
