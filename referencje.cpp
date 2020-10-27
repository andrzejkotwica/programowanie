#include <iostream>

using namespace std;

void testuj(int & a)
{
    if (a<0)
        cout <<"liczba jest mniejsza od zera";
    else
        cout<<"liczba jest wieksza od zera";
}

int main()
{
    int a;
    int &ref_a=a;
    cout<<"a="; cin>>ref_a;
    testuj(ref_a);
    return 0;
}
