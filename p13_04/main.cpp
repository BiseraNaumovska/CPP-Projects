#include <iostream>

using namespace std;
class plostina {
    double dim1, dim2; //dimenzii na slikata
public:
    void postavi_plost(double d1, double d2)
    {
        dim1=d1;
        dim2=d2;
    }
    void zemi_dim(double &d1, double &d2)
    {
        d1=dim1;
        d2=dim2;
    }
    virtual double zemi_plost()
    {
        cout<<"Mora da se predefinira ovaa funkcija"<<endl;
        return 0.0;
    }
};

class pravoagolnik : public plostina {
public:
    double zemi_plost()
    {
        double d1, d2;
        zemi_dim(d1,d2);
        return d1*d2;
    }
};

class triagolnik : public plostina {
public:
    double zemi_plost()
    {
        double d1, d2;
        zemi_dim(d1,d2);
        return d1*d2*0.5;
    }
};

int main()
{
    plostina *p;
    triagolnik t;
    pravoagolnik r;

    r.postavi_plost(3.3, 4.5);
    t.postavi_plost(4.0, 5.0);

    p=&r;
    cout<<"Pravoagolnikot ima plostina: "<<p->zemi_plost() <<endl;

    p=&t;
    cout<<"Triagolnikot ima plostina: "<<p->zemi_plost() <<endl;

    return 0;
}
