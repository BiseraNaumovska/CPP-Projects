#include <iostream>
#include "array1.h"
#include <iomanip> // ne znam za shto e, da prochitam !!!
#include <cstdlib>
#include <cassert>

using namespace std;

int Array::arrayCount = 0; // seushte nema nitu eden objekt

Array::Array(int arraySize){
    size = (arraySize > 0 ? arraySize : 10);
    ptr = new int[size]; // sozdadi mesto za niza
    assert(ptr != 0); // zavrshi ako ne sme dobile dovolno memorija
    ++arrayCount;
    for(int i=0;i<size;i++){
        ptr[i] = 0; // inicijalizacija na niza
    }
} // kraj konstruktor

// Copy konstruktor za klasata Array mora da dobie
// referenca za da se onevozmozhi beskonechna rekurzija
Array::Array(const Array &init) : size(init.size){
    ptr = new int[size];
    assert(ptr !=0);
    ++arrayCount;
    for(int i=0;i<size;i++){
        ptr[i] = init.ptr[i]; //kopiraj init vo objekt
    }
} // kraj konstruktor

Array::~Array(){
    delete [] ptr;
    --arrayCount;
}

int Array::getSize() const {return size;}

// Preklopi go operatorot za dodeluvanje
// vrakjanje na const izbegnuva: ( a1 = a2 ) = a3
const Array &Array::operator=(const Array &right){
    if(&right != this){
        // proveri da ne ima samo-dodeluvanje
        // za nizi so razlichni golemini, dealociraj ja originalnata
        // niza od levata strana, potoa alociraj nova niza na levata strana.
        if(size != right.size){
            delete [] ptr;
            size = right.size;
            ptr = new int[size];
            assert(ptr != 0);

        }
        for(int i=0;i<size;i++){
            ptr[i] = right.ptr[i]; // kopiraj niza vo objekt
        }
    }
    return *this;
}


// Odredi dali dve nizi se ednakvi i vrati
// true, inaku vrati false.
bool Array::operator==( const Array &right ) const
{
    if ( size != right.size )
        return false;    // nizi so razlichni golemini

    for ( int i = 0; i < size; i++ )
        if ( ptr[ i ] != right.ptr[ i ] )
            return false; // nizite ne se ednakvi

    return true;        // nizite se ednakvi
} // kraj na funkcijata operator==

// Preklopen indeksen operator za ne-const nizi
// vrakjanjeto na referenca sozdava lvalue
int &Array::operator[]( int subscript )
{
    // proveri dali indeksite se vo potrebniot opseg
    assert( 0 <= subscript && subscript < size );
    return ptr[ subscript ]; // vrati referenca
} // kraj na funkcijata operator[]

// Preklopi indeksen operator za const nizi
// vrakjanje na const referenca return sozdava rvalue
const int &Array::operator[]( int subscript ) const
{
    // proveri dali indeksite se vo potrebniot opseg
    assert( 0 <= subscript && subscript < size );
    return ptr[ subscript ]; // vrakjanje na const referenca
} // kraj na funkcijata operator[]

// Vrati go brojot na instancirani objekti od klasata Array
// statichkite funkcii ne mozhat da bidat const
int Array::getArrayCount() { return arrayCount; }

// Preklopi go operatorot za vlez za klasata Array;
// vnesuva vrednosti za celata niza.
istream &operator>>( istream &input, Array &a )
{
    for ( int i = 0; i < a.size; i++ )
        input >> a.ptr[ i ];

    return input;   // ovozmozhuva cin >> x >> y;
} // kraj na funkcijata operator>>

// Preklopi go operatorot za izlez za klasata Array
ostream &operator<<( ostream &output, const Array &a )
{
    int i;

    for ( i = 0; i < a.size; i++ ) {
        output << setw( 12 ) << a.ptr[ i ];

        if ( ( i + 1 ) % 4 == 0 ) // 4 broevi vo red za izlez
            output << endl;
    }

    if ( i % 4 != 0 )
        output << endl;

    return output;   // ovozmozhuva cout << x << y;
} // kraj na funkcijata operator<<

