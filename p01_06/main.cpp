/*1.	Напиши С++ програм кој користи inline функција
    circleArea која бара влез од корисникот за радиус
        на круг, ја пресметува и ја печати површината
        на кругот*/

#include <iostream>

using namespace std;

void circleArea(){
    double radius, povrshina;
    cout<<"Vnesi radius: ";
    cin>>radius;
    cout<<endl;
    povrshina =3.14*radius*radius;
    cout<<"Povrshina na krug so radius "<<radius<<" = "<<povrshina<<endl;

}

int main()
{
    cout << "Programata ke presmeta povrshina na krug so radius shto ti ke go vnesesh!" << endl;
    circleArea();
    system("pause");
    return 0;
}
