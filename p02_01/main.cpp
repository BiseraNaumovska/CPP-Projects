// Program p02_01.cpp
// Koristenje na predefinirani argumenti

#include <iostream>

using namespace std;

int boxVolume(int length=1, int width=1,int height=1);

int main()
{
    cout << "Predefiniraniot volumen na kutijata e: " << boxVolume()
    << "\n\nVolumenot na kutija so dolzhina 10,\n"
    << "shirina 1 i visina 1 e: " << boxVolume( 10 )
    << "\n\nVolumenot na kutija so dolzhina 10,\n"
    << "shirina 5 i visina 1 e: " << boxVolume( 10, 5 )
    << "\n\nVolumenot na kutija so dolzhina 10,\n"
    << "shirina 5 i visina 2 e: " << boxVolume( 10, 5, 2 )
    << endl;
    system("pause");

    return 0;
}

int boxVolume(int length, int width,int height){
    return length*width*height;
}
