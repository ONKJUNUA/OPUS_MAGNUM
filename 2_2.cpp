#include <iostream>
using namespace std;
int main()
{
    int ile;
    cout << "\nIle gwiazdek ma miec kapitan?: ";
    cin >> ile;
    cout << "No to narysujmy wszystkie " << ile << ": ";

    while(ile)
    {
    if (ile<0)
        cout << "-";
    cout << "*";
    if (ile>0)
        ile = ile - 1;
    else ile = ile + 1;
    }

    cout << "\nTeraz zmienna ile ma wartosc " << ile << ".";
}