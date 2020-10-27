#include <iostream>

using namespace std;
void zmiana(char tab[])
    {
        tab[5]='E';
    }
void test_wsk(char *wsk, int &dlugosc)
    {
        //*wsk='A';
        //*(wsk+1)='B';
        for (int i=0;i<dlugosc;i++)
        {
            *(wsk+i)='0';
        }
    }

int main()
{

char tab[5]={'a','b','c','d','e'};
//inna metod a inicjowania tablicy znaków
char A[]="Ala ma kota";
int d=11;
//wywoluje funkcje
zmiana(tab);
cout<<"po wywolaniu funkcji: "<<tab[5]<<endl;
//funkcja ze wskaznikiem
test_wsk(A,d);
cout<<A<<endl;

    return 0;
}
