// p12_06.cpp
// Pokazhuvaci na objekti na izvedeni klasi

#include <iostream>

using namespace std;


class Vraboten
{
    int  broj;
    char *ime;
    int plata;
public:
    Vraboten(){}
    Vraboten(int, char *, int);
    ~Vraboten(){delete ime;}
    void pecati(void) {cout<<"Broj: "<<broj<<" Ime: "
                             <<ime<<" Plata: "<<plata<<endl;}
};

Vraboten::Vraboten(int a, char *b, int c )
{
    broj=a;
    ime = new char[strlen(b)+1 ];
    strcpy( ime, b);
    plata = c;
}

class Programer:public Vraboten{
    int  bodovi;
public:

    Programer(){}
    Programer(int, char *, int, int);
    void pecati(void) { cout << " Programer ";
        Vraboten::pecati();
        cout << " Bodovi: "<< bodovi<<endl;
    }
};

Programer::Programer(int a, char *b, int c, int d ):Vraboten(a,b,c)
{
    bodovi=d;
}

class Sekretar:public Vraboten{
    int  oddel;
public:

    Sekretar(){}
    Sekretar(int, char *, int, int);
    void pecati(void) { cout << " Sekretar ";
        Vraboten::pecati();
        cout << " Oddelenie: "<<oddel<<endl;
    }
};
Sekretar::Sekretar(int a, char *b, int c, int d ):Vraboten(a,b,c)
{
    oddel=d;
}

class Dizajner:public Vraboten{
    int  specijalnost;
public:

    Dizajner(){}
    Dizajner(int, char *, int, int);
    void pecati(void) { cout << " Dizajner ";
        Vraboten::pecati();
        cout << " Specijalnost: "<<
            specijalnost<<endl;
    }
};

Dizajner::Dizajner(int a, char *b, int c, int d ):Vraboten(a,b,c)
{
    specijalnost=d;
}




int main()
{
    Programer *A;
    Sekretar *B;
    Dizajner *C;

    A=new Programer(10, "Mile Milevski", 15000,100);
    B=new Sekretar(11, "Maja Milevska", 10000, 3);
    C=new Dizajner(15, "Petar Petrov", 15000, 10);

    A->pecati();
    B->pecati();
    C->pecati();

    delete A;
    delete B;
    delete C;

    return 0;
}
