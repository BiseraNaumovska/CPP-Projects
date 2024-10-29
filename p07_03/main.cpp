// ******************************************************************
// *  p07_03.cpp								 	    *
// *  Ovaa C++ programa ilustrira preklopuvanje na funkciski  	    *
// *  clenovi na klasa. Korisnikot vnesuva agol vo decimalna ili    *
// *  vo stepeni/minuti/sekundi notacija. Prviot funkciski clen ja  *
// *  prima vrednosta na agolot kako decimalen broj, a vtoriot kako *
// *  stepeni/minuti/sekundi. Programata presmetuva cos, sin i tg.  *
// ******************************************************************

#include <math.h>
#include <iostream>

using namespace std;

const double StepenRad = 0.0174532925;

class TRIG_klasa
{
    double Agol;
    double AgolSin;
    double AgolCos;
    double AgolTan;
public:
    void PresmetTRIG (double);
    void PresmetTRIG (double, double, double );
};

void TRIG_klasa::PresmetTRIG (double Stepeni)
{
    Agol = Stepeni;
    AgolSin = sin (Agol * StepenRad);
    AgolCos = cos (Agol * StepenRad);
    AgolTan = tan (Agol * StepenRad);

    cout << "\n Za agol od " << Agol << " stepeni, " << endl;
    cout << " sinusot e: " << AgolSin << endl;
    cout << " kosinusot e: " << AgolCos << endl;
    cout << " i tangensot e: " << AgolTan << endl;
}

void TRIG_klasa::PresmetTRIG (double Stepeni, double Minuti, double Sekundi )
{
    Agol = Stepeni + Minuti / 60.0 + Sekundi /360.0;

    AgolSin = sin (Agol * StepenRad);
    AgolCos = cos (Agol * StepenRad);
    AgolTan = tan (Agol * StepenRad);

    cout << "\n Za agol od " << Agol << " stepeni, " << endl;
    cout << " sinusot e: " << AgolSin << endl;
    cout << " kosinusot e: " << AgolCos << endl;
    cout << " i tangensot e: " << AgolTan << endl;
}



int main()
{
    TRIG_klasa AgolKonv;

    AgolKonv.PresmetTRIG (65.0);
    AgolKonv.PresmetTRIG (45, 75 ,10);
    AgolKonv.PresmetTRIG (121.32);
    AgolKonv.PresmetTRIG (75, 30, 45);

    return 0;
}
