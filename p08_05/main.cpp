// p08_05.cpp
// Preklopuvanje na operatorite za vmetnuvanje i ekstrakcija
// na pototci.

#include <iostream>
#include <iomanip>

using namespace std;

class PhoneNumber {
    friend ostream &operator<<( ostream&, const PhoneNumber & );
    friend istream &operator>>( istream&, PhoneNumber & );

private:
    char areaCode[ 4 ];  // 3-cifri kod na drzhava i null
    char exchange[ 4 ];  // 3-cifri i  null
    char line[ 5 ];      // 4-cifri i  null
}; // kraj na klasa PhoneNumber

// Preklopen operator za vmetnuvanje na potok (ne mozhe da e
// funkcija chlenka ako sakame da do povikame za
// cout << somePhoneNumber;).
ostream &operator<<( ostream &output, const PhoneNumber &num )
{
    output << "(" << num.areaCode << ") "
           << num.exchange << "-" << num.line;
    return output;     // mu ovozmozhuva na cout << a << b << c;
} // kraj na oprator<< funkcijata

istream &operator>>( istream &input, PhoneNumber &num )
{
    input.ignore();                     // preskokni (
    input >> setw( 4 ) >> num.areaCode; // vnesi kod na drzhava
    input.ignore( 2 );                  // preskokni ) i prazno
    input >> setw( 4 ) >> num.exchange; // vnesi tri cifri
    input.ignore();                     // preskokni crtka (-)
    input >> setw( 5 ) >> num.line;     // vnesi 4 cifri
    return input;      // ovozmozhuva cin >> a >> b >> c;
} // kraj na operator>> funkcijata



int main()
{
    PhoneNumber phone; // sozdadi objekt phone

    cout << "Vnesi telefonski broj od oblik (123) 456-7890:\n";

    // cin >> phone ja povikuva operator>> funkcijata so
    // povikot kon operator>>( cin, phone ).
    cin >> phone;

    // cout << phone ja povikuva operator<< funkcija so
    // povikot kon operator<<( cout, phone ).
    cout << "Vneseniot telefonski broj e: " << phone << endl;

    return 0;
}
