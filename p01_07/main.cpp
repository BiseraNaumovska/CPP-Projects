/*
    2.	Нaпиши С++ програм со две посебни функции кои едноставно
ја триплираат вредноста на променливата count дефинирана
во main. Овие функции се:

    a.	Функцијата tripleCallByValue која предава копија од
count, ја триплира нејзината вредност и ја враќа новата
вредност

    b.	Функцијата tripleCallByReference која ja предава count
како референцен параметар, ја триплира самата променлива и
ја враќа новата вредност на count

*/


#include <iostream>

using namespace std;

int tripleByValue(int);
void tripleByReference(int &);

int main()
{
    int count = 2;
    cout<<"count= "<<count<<" pred tripleByValue"<<endl;
    cout<<"Vrednost vratena od tripleByVarue: "<<tripleByValue(count)<<endl;
    cout<<"count = "<<count<<" po tripleByValue"<<endl<<endl;
    tripleByReference( count );
    cout << "count = " << count << " po tripleByReference " << endl;
    system("pause"); // Ovaa linija gi zadrzuva prozorecot otvoren
    return 0;
}

int tripleByValue( int a )
{
    return a = a*a*a;   // povikuvachkiot argument ne e modificiran
}

void tripleByReference( int &cRef )
{
    cRef=cRef*cRef*cRef;    // povikuvachkiot argument e modificiran
}
