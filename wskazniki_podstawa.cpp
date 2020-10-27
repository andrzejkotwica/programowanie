#include <iostream>

using namespace std;

int main()
{   int zmienna1;
    int zm2=10;
    char tab[5]={'d','a','2','f','f'};
    char *tab2;

    int *wsk;
    wsk = &zmienna1;

    int & ref_zm2 = zm2;


    for (int i=0;i<3;i++)
    {
        *(tab2+i)='a';
    }


      for (int i=0;i<3;i++)
    {
        cout<<*(tab2+i);
    }
    return 0;
}
