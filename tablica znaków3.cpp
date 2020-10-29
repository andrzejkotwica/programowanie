#include <iostream>
#include <conio.h>
int main()
{
    using namespace std;
    const short rozmiar = 50;
    char ciag_znak[ rozmiar ];
    char lancuch[ rozmiar ];

    cout << "Podaj swoje imie i nazwisko programisto "
    << endl;
    /*sk³adnia getline gdzie kopiowaæ, oraz ile znaków skopiowaæ*/
    cin.getline( ciag_znak, rozmiar );
    cout << "Nazywasz sie: " << ciag_znak
    << endl
    << "Teraz wszystko jest OK !\n";

    cout << "\nPodaj swoje 2 imiona ";
    //sk³adnia get jest identyczna jak getline
    cin.get( ciag_znak, rozmiar );
    cout << "Podaj swoje nazwisko ";
    cin.get( lancuch, rozmiar );
    cout << endl << endl;

    cout << "Nazywasz sie : " << ciag_znak
    << " " << lancuch << endl;
    cout << "Co jest grane ? Nie masz nazwiska!?!\n";

    getch();
    return( 0 );
}
