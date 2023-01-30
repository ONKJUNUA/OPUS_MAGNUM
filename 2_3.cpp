#include <iostream>
using namespace std;
int main()
{
char litera;
do {
    cout << "Napisz jakas litere: ";
    cin >> litera;
    
    if (litera<=122 && litera>=97)
    {
        litera-=32;
        cout << "Duza to: " << litera << " \n";
        litera+=32;
    }
    else if (litera<=90 && litera>=65)
    {
        litera+=32;
        cout << "Mala to: " << litera << " \n";
        litera-=32;
    }
} while(litera != 'k' && litera != 'K');
cout << "Skoro napisales " << litera << " to konczymy!";
}