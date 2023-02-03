#include <iostream>
using namespace std;
#include <cstring>

void fake_strcpy(char cel[ ], char zrodlo[ ]) 
{
    for(int i = 0;;i++) 
    {
        cel[i] = zrodlo[i]; 
        if(cel[i] == 0) break; 
    }
}

int main()
{
    char a[]="nwm";
    char b[]="tak";
    char c[]="nie";
    fake_strcpy(a,b);
    cout << a << " " << b << " " << c << endl;
    strcpy(b,c);
    cout << a << " " << b << " " << c << endl;
    fake_strcpy(a,c);
    cout << a << " " << b << " " << c << endl;

    char tekst[ ] = { "Uwaga, tarcza zostala przepalona!"};
    char komunikat[120];
    strcpy(komunikat, tekst);
    cout << komunikat << endl;
    strncpy(komunikat, "1234567890abcdef", 9 ); 
    cout << komunikat;
    strcpy(komunikat, "--A ku-ku --!" );
    cout << "\nNa koniec: " << komunikat << endl;
}