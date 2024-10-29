/*
Пример. Да се направи програма во која ќе се испитаат својствата на виртуелните функции. Да се опфатат случаи кога:
1.	во основната и изведената класа има иста функција која во основната  не е дефинирана како виртуелна,
2.	дадена функција е дефинирана во основната класа како виртуелна, но во изведената постои само функција со истото име но различен број на аргументи
3.	и во основната и во изведената класа има иста функција која во основната е дефинирана како виртуелна.
Да се користи покажувач кон основната класа кој покажува кон објекти од изведената.


*/

//p13_05.cpp
//Virtuelni funkcii
#include <iostream>

using std::cin;
using std::cout;
using std::endl;






class Osnovna {
public:
    virtual void poraka1(){cout << "Osnovna - poraka1\n";}
    virtual void poraka2(){cout << "Osnovna - poraka2\n";}
    void poraka3(){cout << "Osnovna - poraka3\n";}
};








class Izvedena: public Osnovna {
public:
    virtual void poraka1(){cout << "Izvedena - poraka1\n";}
    void poraka2(int);
    void poraka3(){cout << "Izvedena - poraka3\n";}
};

void Izvedena :: poraka2(int x)
{
    int y;
    y=x;
    cout <<"y=" << y << endl;
}






main()
{

    Izvedena B;
    Osnovna A, *bp = &B; //bp e od tip Osnovna,
    //a pokazuva kon Izvedena
    bp -> poraka1(); // se izvrsuva Izvedena::poraka1()
    bp -> poraka2(); // se izvrsuva Osnovna::poraka2()
    //bidejki Izvedena::poraka2 ima argument int
    bp -> poraka3(); // se izvrsuva Osnovna::poraka3() bidejki
        // Osnovna::poraka3 ne e virtuelna
    bp=&A;
    bp -> poraka1(); // se izvrsuva Osnovna::poraka1()
}
