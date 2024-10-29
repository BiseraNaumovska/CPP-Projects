
#include <iostream>
#include "dropki.h"
using namespace std;


int Dropki::gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Dropki::reduce() {
    int divisor = gcd(broitel, imenitel);
    broitel /= divisor;
    imenitel /= divisor;

    if (imenitel < 0) {
        broitel = -broitel;
        imenitel = -imenitel;
    }
}

Dropki::Dropki(int b, int i) : broitel(b), imenitel(i) {
    if (imenitel == 0) {
        throw invalid_argument("Imenitelot ne moze da bide 0!");
    }
    reduce();
}


Dropki Dropki::operator+(const Dropki& other) const {
    int newBroitel = broitel * other.imenitel + other.broitel * imenitel;
    int newImenitel = imenitel * other.imenitel;
    return Dropki(newBroitel, newImenitel);
}

Dropki Dropki::operator-(const Dropki& other) const {
    int newBroitel = broitel * other.imenitel - other.broitel * imenitel;
    int newImenitel = imenitel * other.imenitel;
    return Dropki(newBroitel, newImenitel);
}

Dropki Dropki::operator*(const Dropki& other) const {
    int newBroitel = broitel * other.broitel;
    int newImenitel = imenitel * other.imenitel;
    return Dropki(newBroitel, newImenitel);
}

Dropki Dropki::operator/(const Dropki& other) const {
    if (other.broitel == 0) {
        throw invalid_argument("Ne moze da se deli so 0!");
    }
    int newBroitel = broitel * other.imenitel;
    int newImenitel = imenitel * other.broitel;
    return Dropki(newBroitel, newImenitel);
}

Dropki Dropki::operator+(int value) const {
    return *this + Dropki(value, 1);
}

Dropki Dropki::operator-(int value) const {
    return *this - Dropki(value, 1);
}

Dropki Dropki::operator*(int value) const {
    return *this * Dropki(value, 1);
}

Dropki Dropki::operator/(int value) const {
    if (value == 0) {
        throw invalid_argument("Ne moze da se deli so 0!");
    }
    return *this / Dropki(value, 1);
}


void Dropki::print() const {
    cout << broitel << "/" << imenitel << endl;
}

void Dropki::printReal() const {
    cout << static_cast<double>(broitel) / imenitel << endl;
}
