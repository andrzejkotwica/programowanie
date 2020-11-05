#include <iostream>

using namespace std;
void sortuj(int *tab, int &dlugosc)
    { int pom;
      int ilosc=dlugosc;
    for (int j=0;j<ilosc-1;j++)
    { for (int i=0;i<dlugosc;i++)
        {
            if (tab[i]>tab[i+1])
            {
                pom=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=pom;
            }
        }
    }
    }
int main()
{   int d=10;
    int tab[d]={4,5,1,-2,20,12,9,3,11,3};
    sortuj(tab, d);
    for (int k=0;k<d;k++)
    {
        cout<<tab[k]<<endl;
    }
    return 0;
}
