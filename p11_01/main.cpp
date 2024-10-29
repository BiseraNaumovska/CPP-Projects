// pointtest.cpp
// Testiranje na klasata Point.
#include <iostream>
#include <iomanip>

using std::setprecision;

#include "circle.h"
#include "point2.h"
#include "circle3.h"
#include "circle4.h"



using std::cout;
using std::endl;
using std::endl;
using std::fixed;


#include "point.h"

int main()
{
    Point point( 72, 115 );     // instanciraj objekt od klasata Point

    // ispechati gi koordinatite na tochkata
    cout << "X koordinatata e " << point.getX()
         << "\nY koordinatata e " << point.getY();

    point.setX( 10 ); // postavi x-koordinata
    point.setY( 10 ); // postavi y-koordinata

    // ispechati ja vrednosta na novata tochka
    cout << "\n\nNovata lokacija na tochkata e ";
    point.print();
    cout << endl;

    Circle circle( 37, 43, 2.5 );  // instanciraj objekt od klasta Circle

    // ispechati gi koordinatite na tochkata
    cout << "X koordinatata e " << circle.getX()
         << "\nY koordinatata e " << circle.getY()
         << "\nRadiusot e " << circle.getRadius();

    circle.setX( 2 );          // postavi nova x-koordinata
    circle.setY( 2 );          // postavi nova y-koordinata
    circle.setRadius( 4.25 );  // postavi nov radius

    // ispechati ja novata pozicija na tochkata
    cout << "\n\nNovata lokacija na radiusot na krugot e \n";
    circle.print();

    // ispechati realni vrednosti so prciznost od 2 cifri
    cout << fixed << setprecision( 2 );

    // ispechati go dijametarot na krugot
    cout << "\nDiametarot e " << circle.getDiameter();

    // ispechati go perimetarot na krugot
    cout << "\nPerimetarot e " << circle.getCircumference();

    // ispechati ja ploshtinata na krugot
    cout << "\nPloshtinata e " << circle.getArea();

    cout << endl;
    Circle3 circlee( 37, 43, 2.5 ); // instanciraj objekt od klasata Circle3

    // ispechati gi koordinatite na tochkata
    cout << "X koordinatata e " << circlee.getX()
         << "\nY koordinatata e " << circlee.getY()
         << "\nRadiusot e " << circlee.getRadius();

    circlee.setX( 2 );          // postavi nova x-koordinata
    circlee.setY( 2 );          // postavi nova y-koordinata
    circlee.setRadius( 4.25 );  // postavi nov radius

    // ispechati ja novatat vrednost na tochkata
    cout << "\n\nNovata lokacija i radiusot na krugot se\n";
    circlee.print();

    // ispechati realni vrednosti so preciznost od 2 cifri
    cout << fixed << setprecision( 2 );

    // ispechati go dijametarot na krugot
    cout << "\nDiametarot e " << circlee.getDiameter();

    // ispechati go perimetarot na krugot
    cout << "\nPerimetarot e " << circlee.getCircumference();

    // ispechati ja ploshtinata na krugot
    cout << "\nPloshtinata e " << circlee.getArea();

    cout << endl;

    Circle4 ccircle( 37, 43, 2.5 ); // instanciraj objekt od klasta Circle4
    // ispechati gi koordinatite na tochkata
    cout << "X koordinatata e " << ccircle.getX()
         << "\nY koordinatata e " << ccircle.getY()
         << "\nRadiusot e " << ccircle.getRadius();

    ccircle.setX( 2 );          // postavi nova x-koordinata
    ccircle.setY( 2 );          // postavi nova y-koordinata
    ccircle.setRadius( 4.25 );  // postavi nov radius

    // ispechati gi novite vrednosti za krugot
    cout << "\n\nNovite vrednosti za krugot se\n";
    ccircle.print();

    // ispechati realni vrednosti so 2 cifri preciznost
    cout << fixed << setprecision( 2 );

    // ispechati go dijametarot na krugot
    cout << "\nDiametarot e " << ccircle.getDiameter();

    // ispechati go perimetarot na krugot
    cout << "\nPerimetarot e " << ccircle.getCircumference();

    // ispechati ja ploshtinata na krugot
    cout << "\nPloshtinata e " << ccircle.getArea();

    cout << endl;




    return 0;
} // kraj main

