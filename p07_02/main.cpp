// ****************************************************************
// *  p07_02.cpp				                                *
// *Ovaa C++ programa ilustrira koristenje na klаsi so funkciski  *
// *clenovi koi se preklopuvaat. Programata odreduva apsolutna    *
// *vrednost na integer i double podatok.                         *
// ****************************************************************

#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class presmetaj_aps
{
public:
    int najdi_aps (int);
    double najdi_aps (double);
};

int presmetaj_aps::najdi_aps (int vrednost)
{
    int aps_vred;
    aps_vred = abs(vrednost);
    return (aps_vred);
}

double presmetaj_aps::najdi_aps (double vrednost)
{
    double aps_vred;
    aps_vred = fabs(vrednost);
    return (aps_vred);
}

int main (  )
{
    int test_int;
    double test_double;
    presmetaj_aps test_vred;

    cout << " Vnesi cel broj: ";
    cin >> test_int;
    cout << " Vnesi realen broj: ";
    cin >> test_double;
    cout << "\n Apsolutna vrednost na " << test_int << " e: "
         << test_vred.najdi_aps(test_int) << endl;
    cout << "\n Apsolutna vrednost na " << test_double << " e: "
         << test_vred.najdi_aps(test_double) << endl;

    return 0;
}
