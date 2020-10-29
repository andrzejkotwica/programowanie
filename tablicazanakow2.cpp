#include <iostream>
#include <conio.h>
int main()
{
    using namespace std;
    char ciag_znak[ 40 ];
    char tekst[ 20 ] = "C++ to jest to!!!";

    cout << "Podaj swoje imie i nazwisko programisto "<< endl;
    cin >> ciag_znak;
    cout << "Nazywasz sie: " << ciag_znak<< endl
    << "Ups a co sie stalo z twoim nazwiskiem!!! \n"
    << endl;

    cout << "Oto tekst: " << tekst << endl;
    //co siê stanie jak zmienimy 4 znak w tablicy
    tekst[ 3 ] = '\0';
    cout << "Oto tekst: " << tekst << endl;

    getch();
    return( 0 );
}
