#include <iostream>
using namespace std;

int kukulka(int ile); 

int main()
{
    int m = 20;
    cout << "Zaczynamy" << endl;

    m = kukulka(5); 
    cout << "\nNa koniec m = " << m; 
}

int kukulka(int ile) 
{ 
    for(int i = 0 ; i < ile ; ++i)
        cout << "Ku-ku! ";
    return 77;
} 