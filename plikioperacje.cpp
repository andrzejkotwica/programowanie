#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{   srand(time(NULL));
    int liczbalosowa=(rand() % 5) + 0;
    string tablica[5];
    ifstream plikodczyt("dane.txt"); //atrybut domyslny otwarcia czyli trunc

       if(!plikodczyt.good()==true)
        cout<<"otwarcie pliku NIE powiodlo sie";

string przyslowie;
     //plikodczyt>>zmienna;
int i=0;
while(getline(plikodczyt, przyslowie))
    {
      tablica[i]=przyslowie;
      i++;
    }
cout<<tablica[liczbalosowa];
  plikodczyt.close();
    return 0;
}
