// p14_02.cpp
// Demonstracija na klasta od standardna biblioteka vector.
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void outputVector( const vector< int > & );
void inputVector( vector< int > & );

int main()
{
    vector< int > integers1( 7 );   // 7-elementen vector< int >
    vector< int > integers2( 10 );  // 10-elementen vector< int >

    // ispechati gi goleminata i sodrzhinata na integers1
    cout << "Goleminata na vector integers1 e "
         << integers1.size()
         << "\nvector-ot po inicijalizacija:\n";
    outputVector( integers1 );

    // ispechati gi goleminata i sodrzhinata na integers2
    cout << "\nGoleminata na vector integers2 e "
         << integers2.size()
         << "\nvector-ot po inicijalizacijata:\n";
    outputVector( integers2 );

    // vnesi i ispechati integers1 i integers2
    cout << "\nVnesi 17 celi broja:\n";
    inputVector( integers1 );
    inputVector( integers2 );

    cout << "\nPo vnesuvanjeto, vektorite sodrzhat:\n"
         << "integers1:\n";
    outputVector( integers1 );
    cout << "integers2:\n";
    outputVector( integers2 );

    // koristenje na preklopeniot operator za neednakvost (!=)
    cout << "\nPresmetuvam: integers1 != integers2\n";

    if ( integers1 != integers2 )
        cout << "integers1 i integers2 ne se ednakvi\n";

    // sozdadi vector integers3 so pomosh na integers1 kako
    // inicijalizator; ispechati za goleminata i sodrzhinata
    vector< int > integers3( integers1 );  // copy konstruktor

    cout << "\nGoleminata na integers3 e "
         << integers3.size()
         << "\nvector-ot po inicijalizacijata:\n";
    outputVector( integers3 );


    // koristenje na preklopeniot operator za dodeluvanje (=)
    cout << "\nDodeluavnje na integers2 na integers1:\n";
    integers1 = integers2;

    cout << "integers1:\n";
    outputVector( integers1 );
    cout << "integers2:\n";
    outputVector( integers1 );

    // koristenje na preklopeniot operator za ednakvost (==)
    cout << "\nPresmetuvam: integers1 == integers2\n";

    if ( integers1 == integers2 )
        cout << "integers1 i integers2 se ednakvi\n";

    // koristenje na preklopeniot indeksen operator za sozdavanje na rvalue
    cout << "\nintegers1[5] e " << integers1[ 5 ];

    // koristenje na preklopeniot indeksen operator za sozdavanje na lvalue
    cout << "\n\nDodeluvam 1000 na integers1[5]\n";
    integers1[ 5 ] = 1000;
    cout << "integers1:\n";
    outputVector( integers1 );

    // obid za koristenje na indeks koj e nadvor od opseg
    cout << "\nObid za dodeluvanje na 1000 na integers1.at( 15 )"
         << endl;
    integers1.at( 15 ) = 1000;  // GRESHKA: nadvor od opseg


    return 0;
}
// output vector sodrzhi
void outputVector( const vector< int > &array )
{
    for ( int i = 0; i < array.size(); i++ ) {
        cout << setw( 12 ) << array[ i ];

        if ( ( i + 1 ) % 4 == 0 ) // 4 broevi vo eden red
            cout << endl;
    } // kraj for

    if ( i % 4 != 0 )
        cout << endl;
} // kraj na funkcijata outputVector

// input vector sodrzhi
void inputVector( vector< int > &array )
{
    for ( int i = 0; i < array.size(); i++ )
        cin >> array[ i ];
} // kraj na funkcijata inputVector
