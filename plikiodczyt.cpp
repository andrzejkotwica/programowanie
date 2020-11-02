#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream plikodczyt("dane.txt"); //atrybut domyslny otwarcia czyli trunc

       if(!plikodczyt.good()==true)
        cout<<"otwarcie pliku NIE powiodlo sie";

string zmienna;
     //plikodczyt>>zmienna;
while(getline(plikodczyt, zmienna))
    {cout<<zmienna<<endl;}
plikodczyt.close();
    return 0;
}
