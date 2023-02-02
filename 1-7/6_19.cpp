#include <iostream>
using namespace std;

void dwojkowo(int liczba, int & a)
{
    int reszta = liczba % 2; 
    if(liczba > 1)
    {
        a++;
        dwojkowo(liczba / 2, a);
    }
    cout << reszta;
    if (a%4==0)
        cout << " ";
    a--;
    return;
}

int main()
{
    for (int i=1;i<=200000;i*=2)
    {
        int a=0;
        cout << "\n" << i << " to dwojkowo ";
        dwojkowo(i, a); 
        cout << endl;
    }
    cout << endl;
    return 0;
}