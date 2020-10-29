#include <iostream>
#include <conio.h>
int main()
{
    using namespace std;
    //deklaracja tabeli ³añcuchem znaków
    char ciag_znak[ 10 ] = "DDT - C++";
    char tabznk[2]={'a','s'};

    /*kompilator sam liczy, jak du¿ej bêdzie potrzebowaæ tablicy by pomieœciæ ca³y ³añcuch*/
    char wyraz[] = "To ciekawe forum i nie tylko...";

    cout << ciag_znak << endl;
    cout << wyraz << endl;

    getch();
    return( 0 );
}
