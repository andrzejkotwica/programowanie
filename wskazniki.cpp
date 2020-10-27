#include <iostream>

using namespace std;

void testuj(int *a)
{
    if (*a<0)
        cout <<"liczba jest mniejsza od zera";
    else
        cout<<"liczba jest wieksza od zera";
}

int main()
{
    int a, *wsk;
    wsk=&a;
    cout<<"a="; cin>>*wsk;
    testuj(&a);
    return 0;
}
