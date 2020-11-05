#include <iostream>
#include <fstream>

using namespace std;
int zapistablicy(char * tablica, int dlugosc)
{
    ofstream plikzapis("tablica.txt", ios::app); //atrybut domyslny otwarcia czyli trunc

    /*
    ios::app - zapis  na koñcu pliku bez usuwania danych z pliku
    ios::ate - umieszcza nas na koncu pliku ale mozemy zapisywac w dowolnym miejscu
    ios::trunc  - argument domyslny, Nadpisuje istniejacy plik
    ios::nocreate - jesli plik nie istnieje otwarcie sie nie powiedzie
    ios::noreplace - jesli plik juz istnieje otwarcie sie nie powiedzie
    */

    if(!plikzapis.good()==true)
        cout<<"otwarcie pliku NIE powiodlo sie";

plikzapis<<tablica;
plikzapis<<"\n\0";
plikzapis.close();
}
//************************************************************************************************
int odczyttablicy(char * tablica, int dlugosc)
{
    ifstream plikodczyt("tablica.txt"); //atrybut domyslny otwarcia czyli trunc

    if(!plikodczyt.good()==true)
        cout<<"otwarcie pliku NIE powiodlo sie";

string zawartosctablicy;
while(getline(plikodczyt, zawartosctablicy))
{
    cout<<zawartosctablicy<<endl;
}
plikodczyt.close();
}

//************************************************************************************************

int main()
{   const int d=20;
    const int &rd=d;
    char tab[rd]="tekstprobny";

    zapistablicy(tab, rd);
    odczyttablicy(tab, rd);
    return 0;
}
