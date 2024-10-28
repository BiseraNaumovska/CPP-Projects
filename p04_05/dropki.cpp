#include <iostream>
#include <cmath>
#include "dropki.h"
using namespace std;

//NZD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Dropki::Dropki(int b, int i) : broitel(b), imenitel(i) {
    if (imenitel == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        imenitel = 1;
    }
    reduce();
}


void Dropki::reduce() {
    int divisor = gcd(abs(broitel), abs(imenitel));
    broitel /= divisor;
    imenitel /= divisor;

    if (imenitel < 0) {
        broitel = -broitel;
        imenitel = -imenitel;
    }
}


Dropki Dropki::operator+(const Dropki &other) const {
    int newBroitel = broitel * other.imenitel + other.broitel * imenitel;
    int newImenitel = imenitel * other.imenitel;
    return Dropki(newBroitel, newImenitel);
}


Dropki Dropki::operator-(const Dropki &other) const {
    int newBroitel = broitel * other.imenitel - other.broitel * imenitel;
    int newImenitel = imenitel * other.imenitel;
    return Dropki(newBroitel, newImenitel);
}


Dropki Dropki::operator*(const Dropki &other) const {
    int newBroitel = broitel * other.broitel;
    int newImenitel = imenitel * other.imenitel;
    return Dropki(newBroitel, newImenitel);
}

Dropki Dropki::operator/(const Dropki &other) const {
    if (other.broitel == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return Dropki();
    }
    int newBroitel = broitel * other.imenitel;
    int newImenitel = imenitel * other.broitel;
    return Dropki(newBroitel, newImenitel);
}


void Dropki::printFraction() const {
    cout << broitel << "/" << imenitel << endl;
}

void Dropki::printReal() const {
    cout << static_cast<double>(broitel) / imenitel << endl;
}
