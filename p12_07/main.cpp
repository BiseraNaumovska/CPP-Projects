/*
Проект 2:

Да се направи проект кој ќе покрива што е можно повеќе облици, дводимензионални и тродимензионални.
Хиерархијата треба да има основна класа Oblik од која се изведуваат класите DvoDomenzionalni и TroDimenzionalni.
Секоја од овие две класи треба да се подели на што е можно повеќе облици. Да се даде можност за внесување на објект,
како и негово директно креирање од главната програма. Да се прикажат испечатувања на различни објекти.
Да има во секоја класа вградено бројач за објектите инстанцирани од класата.

*/



/*
clasa Oblik -> Dvodimenzionalna -> Circle
            -> Trodimenzionalna -> Sphere

3 sloja na klasi 1 glavna -> dve izvedeni -> po 3 izvedeni za sekoja (vkupno 6)


*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const int MAX = 100;


class Oblik{
protected:
    string name;
    static int oblikCount;
public:
    Oblik(const string& n){
        name = n;
        ++oblikCount;
    }
    virtual ~Oblik(){
        --oblikCount;
    }
    virtual void print() const = 0;
    static int getOblikCount() {
        return oblikCount;
    }

};

int Oblik::oblikCount = 0;

class DvoDimenzionalni : public Oblik {
protected:
    static int dvoDimenzionalniCount;
public:
    DvoDimenzionalni(const string& n) : Oblik(n) {
        ++dvoDimenzionalniCount;
    }
    virtual ~DvoDimenzionalni() {
        --dvoDimenzionalniCount;
    }
    static int getDvoDimenzionalniCount() {
        return dvoDimenzionalniCount;
    }
};

int DvoDimenzionalni::dvoDimenzionalniCount = 0;

class TroDimenzionalni : public Oblik {
protected:
    static int troDimenzionalniCount;
public:
    TroDimenzionalni(const string& n) : Oblik(n) {
        ++troDimenzionalniCount;
    }
    virtual ~TroDimenzionalni() {
        --troDimenzionalniCount;
    }
    static int getTroDimenzionalniCount() {
        return troDimenzionalniCount;
    }
};

int TroDimenzionalni::troDimenzionalniCount = 0;

class Circle : public DvoDimenzionalni {
private:
    double radius;
    static int circleCount;
public:
    Circle(double r) : DvoDimenzionalni("Circle"), radius(r) {
        ++circleCount;
    }
    ~Circle() {
        --circleCount;
    }
    void print() const override {
        cout << "Shape: " << name << ", Radius: " << radius << endl;
    }
    static int getCircleCount() {
        return circleCount;
    }
};

int Circle::circleCount = 0;

class Sphere : public TroDimenzionalni {
private:
    double radius;
    static int sphereCount;
public:
    Sphere(double r) : TroDimenzionalni("Sphere"), radius(r) {
        ++sphereCount;
    }
    ~Sphere() {
        --sphereCount;
    }
    void print() const override {
        cout << "Shape: " << name << ", Radius: " << radius << endl;
    }
    static int getSphereCount() {
        return sphereCount;
    }
};

int Sphere::sphereCount = 0;

int main() {
    Oblik* shapes[MAX];
    int shapeCount = 0;

    // Creating some shapes and adding them to the array
    if (shapeCount < MAX) {
        shapes[shapeCount++] = new Circle(5.0);
    }
    if (shapeCount < MAX) {
        shapes[shapeCount++] = new Circle(3.2);
    }
    if (shapeCount < MAX) {
        shapes[shapeCount++] = new Sphere(7.5);
    }

    cout << "Shapes details:\n";
    for (int i = 0; i < shapeCount; ++i) {
        shapes[i]->print();
    }

    cout << "\nTotal Oblik instances: " << Oblik::getOblikCount() << endl;
    cout << "Total DvoDimenzionalni instances: " << DvoDimenzionalni::getDvoDimenzionalniCount() << endl;
    cout << "Total TroDimenzionalni instances: " << TroDimenzionalni::getTroDimenzionalniCount() << endl;
    cout << "Total Circle instances: " << Circle::getCircleCount() << endl;
    cout << "Total Sphere instances: " << Sphere::getSphereCount() << endl;

    for (int i = 0; i < shapeCount; ++i) {
        delete shapes[i];
    }

    return 0;
}
