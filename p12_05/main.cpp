#include <iostream>
#include <iomanip>
#include "cylinder.h"
using namespace std;

int main()
{
    // instanciraj objekt od klasata Cylinder
    Cylinder cylinder( 12, 23, 2.5, 5.7 );

    // ispechati gi koordinatite na tochkite
    cout << "X koordinatata e " << cylinder.getX()
         << "\nY koordinatata e " << cylinder.getY()
         << "\nRadiusot e " << cylinder.getRadius()
         << "\nVisinata e " << cylinder.getHeight();

    cylinder.setX( 2 );          // postavi nova x-koordinata
    cylinder.setY( 2 );          // postavi nova y-koordinata
    cylinder.setRadius( 4.25 );  // postavi nov radius
    cylinder.setHeight( 10 );    // postavi nova visina

    // ispechati novi vrednosti za cilindar
    cout << "\n\nNovata lokacija i radiusot na cilindarot se\n";
    cylinder.print();

    // ispechati realni vrednosti so 2 cifri preciznost
    cout << fixed << setprecision( 2 ); // se shto se pojavuva posle ova a e od tip float/double ke bide ispechateno so 2 decimalni mesta

    // ispechati go dijametarot na cilindarot
    cout << "\n\nDiametarot e " << cylinder.getDiameter();

    // ispechati go perimetarot na cilindarot
    cout << "\nPerimetarot e "
         << cylinder.getCircumference();

    // ispechati ja ploshtinata na cilindarot
    cout << "\nPloshtinata e " << cylinder.getArea();

    // ispechati go volumenot na cilindarot
    cout << "\nVolumenot e " << cylinder.getVolume();

    cout << endl;

    return 0;
}
