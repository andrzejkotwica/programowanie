#include <iostream>
#include <conio.h>
int main()
{
    using namespace std;
    //deklaracja tabeli �a�cuchem znak�w
    char ciag_znak[ 10 ] = "DDT - C++";
    char tabznk[2]={'a','s'};

    /*kompilator sam liczy, jak du�ej b�dzie potrzebowa� tablicy by pomie�ci� ca�y �a�cuch*/
    char wyraz[] = "To ciekawe forum i nie tylko...";

    cout << ciag_znak << endl;
    cout << wyraz << endl;

    getch();
    return( 0 );
}
