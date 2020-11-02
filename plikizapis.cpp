#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream plikzapis("baza.txt"); //atrybut domyslny otwarcia czyli trunc

    /*
    ios::app - zapis  na koñcu pliku bez usuwania danych z pliku
    ios::ate - umieszcza nas na koncu pliku ale mozemy zapisywac w dowolnym miejscu
    ios::trunc  - argument domyslny, Nadpisuje istniejacy plik
    ios::nocreate - jesli plik nie istnieje otwarcie sie nie powiedzie
    ios::noreplace - jesli plik juz istnieje otwarcie sie nie powiedzie
    */
    if(plikzapis.good()==true)
        cout<<"otwarcie pliku powiodlo sie";
    else
        cout<<"otwarcie pliku NIE powiodlo sie";
char zmienna[]="Ala ma kota \n";
plikzapis<<zmienna;
plikzapis<<"pierwszy tekst zapisany";
plikzapis.close();
    return 0;
}
