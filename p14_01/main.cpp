// p14_01.cpp
// Klasata od standardnata biblioteka string.
// Test program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1( "happy" );
    string s2( " birthday" );
    string s3;

    // testiranje na preklopenite operatori za ednakvost
    // i na relacionite operatori
    cout << "s1 e \"" << s1 << "\"; s2 e \"" << s2
         << "\"; s3 e \"" << s3 << '\"'
         << "\n\nRezultataite od sporeduvanje na s2 i s1:"
         << "\ns2 == s1 dava "
         << ( s2 == s1 ? "true" : "false" )
         << "\ns2 != s1 dava "
         << ( s2 != s1 ? "true" : "false" )
         << "\ns2 >  s1 dava "
         << ( s2 > s1 ? "true" : "false" )
         << "\ns2 <  s1 dava "
         << ( s2 < s1 ? "true" : "false" )
         << "\ns2 >= s1 dava "
         << ( s2 >= s1 ? "true" : "false" )
         << "\ns2 <= s1 dava "
         << ( s2 <= s1 ? "true" : "false" );

    // testiranje na funkcijata chlenka empty
    cout << "\n\nTestiranje na s3.empty():\n";

    if ( s3.empty() ) {
        cout << "s3 e prazen; dodeli s1 na s3;\n";
        s3 = s1;  // dodeli s1 na s3
        cout << "s3 e \"" << s3 << "\"";
    }

    // testiranje na preklopeniot operator za konkatenacija
    cout << "\n\ns1 += s2 dava s1 = ";
    s1 += s2;  // preklopena konkatenacija
    cout << s1;

    // testiranje na operatorot za konkatenacija na stringovi
    // so string od C-stil
    cout << "\n\ns1 += \" to you\" dava\n";
    s1 += " to you";
    cout << "s1 = " << s1 << "\n\n";

    // testiranje na funkcijata chlenka substr
    cout << "Podstringot na s1 koj pochnuva na lokacija 0 od\n"
         << "14 karakteri, s1.substr(0, 14), e:\n"
         << s1.substr( 0, 14 ) << "\n\n";

    // testiranje na substr
    cout << "Podstringot na s1 na\n"
         << "lokacija 15, s1.substr(15), e:\n"
         << s1.substr( 15 ) << '\n';

    // testiranje na  copy konstruktorot
    string *s4Ptr = new string( s1 );
    cout << "\n*s4Ptr = " << *s4Ptr << "\n\n";

    // testiranje na operatorot za dodeluvanje (=)
    //so samo-dodeluvanje
    cout << "dodeluvanje *s4Ptr na *s4Ptr\n";
    *s4Ptr = *s4Ptr;
    cout << "*s4Ptr = " << *s4Ptr << '\n';

    // testiranje na destruktor
    delete s4Ptr;

    // testiranje na indeksen operator za sozdavanje na lvalue
    s1[ 0 ] = 'H';
    s1[ 6 ] = 'B';
    cout << "\ns1 posle s1[0] = 'H' i s1[6] = 'B' e: "
         << s1 << "\n\n";

    // testiranje na indeks nadvor od opseg so
    // funkcijata chlenka "at"
    cout << "Obid za dodeluvanje na 'd' na s1.at( 30 ) dava:" << endl;
    s1.at( 30 ) = 'd';     // GRESHKA: indeks nadvor od opseg

    return 0;
}
