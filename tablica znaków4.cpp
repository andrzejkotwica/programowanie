#include <iostream>
#include <conio.h>
int main()
{
    using namespace std;
    char ciag_znak[ 100 ];
    cout<<"Przeszukam tablice znakow, szukam czy jest znak a "<<endl;
    int i=0 , licznik=0;
     cout<<"Podaj ciag znakow i nacisnij ENTER : " ;
    cin.get( ciag_znak, 99 );
    while (ciag_znak[i]!='\0')
    {   cout<<ciag_znak[i];

        if (ciag_znak[i]=='a')
            licznik++;
     i++;
    }
    cout<<"znak a wystapil razy : "<<licznik;
    getch();
    return( 0 );
}
