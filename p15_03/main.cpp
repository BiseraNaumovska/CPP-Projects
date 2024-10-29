/*
Проект:
Да се направи хиерархија за класата Oblik, така да оваа класа е
апстрактна основна класа која содржи интерфејс за целата хиерархија.
Од неа директно наследуваат DvoDimenzionalni и TroDimenzionalni кои
исто така треба да се апстрактни. Од секоја од овие две  класи да се
изведат најмалку по 3 облици. Да се користи виртуелна print функција
за да се испечати типот и димензиите на секоја класа. Да се направат
и виртуелни функции ploshtina и volumen кои ќе ги пресметуваат ове
вредности за секој од облиците. Да се напише тест програма која ги
прикажува манипулациите со оваа хиерархија.

*/
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


class Oblik {
public:
    virtual void print() const = 0;
    virtual ~Oblik() {}
};

class DvoDimenzionalni : public Oblik {
public:
    virtual double ploshtina() const = 0;
    virtual ~DvoDimenzionalni() {}
};

class TroDimenzionalni : public Oblik {
public:
    virtual double volumen() const = 0;
    virtual ~TroDimenzionalni() {}
};







class Pravoagolnik : public DvoDimenzionalni {
private:
    double width, height;

public:
    Pravoagolnik(double w, double h) : width(w), height(h) {}

    void print() const override {
        cout << "Oblik: Pravoagolnik, Sirina: " << width << ", Visina: " << height << endl;
    }

    double ploshtina() const override {
        return width * height;
    }
};


class Krug : public DvoDimenzionalni {
private:
    double radius;

public:
    Krug(double r) : radius(r) {}

    void print() const override {
        cout << "Oblik: Krug, Radius: " << radius << endl;
    }

    double ploshtina() const override {
        return M_PI * radius * radius;
    }
};


class Triagolnik : public DvoDimenzionalni {
private:
    double base, height;

public:
    Triagolnik(double b, double h) : base(b), height(h) {}

    void print() const override {
        cout << "Oblik: Triagolnik, Osnova: " << base << ", Visina: " << height << endl;
    }

    double ploshtina() const override {
        return 0.5 * base * height;
    }
};


class Kocka : public TroDimenzionalni {
private:
    double side;

public:
    Kocka(double s) : side(s) {}

    void print() const override {
        cout << "Oblik: Kocka, Strana: " << side << endl;
    }

    double volumen() const override {
        return side * side * side;
    }
};


class Topka : public TroDimenzionalni {
private:
    double radius;

public:
    Topka(double r) : radius(r) {}

    void print() const override {
        cout << "Oblik: Topka, Radius: " << radius << endl;
    }

    double volumen() const override {
        return (4.0 / 3.0) * M_PI * radius * radius * radius;
    }
};


class Cilindar : public TroDimenzionalni {
private:
    double radius, height;

public:
    Cilindar(double r, double h) : radius(r), height(h) {}

    void print() const override {
        cout << "Oblik: Cilindar, Radius: " << radius << ", Visina: " << height << endl;
    }

    double volumen() const override {
        return M_PI * radius * radius * height;
    }
};


int main() {
    vector<Oblik*> oblici;

    //  2D
    oblici.push_back(new Pravoagolnik(5.0, 3.0));
    oblici.push_back(new Krug(4.0));
    oblici.push_back(new Triagolnik(4.0, 2.5));

    //  3D
    oblici.push_back(new Kocka(3.0));
    oblici.push_back(new Topka(2.0));
    oblici.push_back(new Cilindar(2.0, 5.0));

    for (const auto& oblik : oblici) {
        oblik->print();
        if (DvoDimenzionalni* d2D = dynamic_cast<DvoDimenzionalni*>(oblik)) {
            cout << "Ploshtina: " << d2D->ploshtina() << endl;
        }
        if (TroDimenzionalni* t3D = dynamic_cast<TroDimenzionalni*>(oblik)) {
            cout << "Volumen: " << t3D->volumen() << endl;
        }
        cout << endl;
    }

    for (auto oblik : oblici) {
        delete oblik;
    }

    return 0;
}
