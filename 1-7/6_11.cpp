#include <iostream>
#include <string>
using namespace std;
int globalny_jedynkowy = 25;
int globalny_inny = 77;

int f_wartosc(int ktory) 
{
    int lokalny = 4; 
    if(ktory == 1) return globalny_jedynkowy;
    else return globalny_inny;
}

int & f_ref_lwartosci(int ktory) 
{
    int lokalny = 4;
    if(ktory == 1) return globalny_jedynkowy;
    else return globalny_inny;
}

void wypisz(string txt, int a)
{
    cout << txt;
    if(a) cout << a << ", ";
        cout << "globalny_jedynkowy = " << globalny_jedynkowy
            << ", globalny_inny = " << globalny_inny << endl;
}
int main ()
{
    int n {0}; 

    n = f_wartosc(1);
    wypisz("Rezultat= ", n);

    n = f_wartosc(6); 
    wypisz("Rezultat= ", n);

    cout << "To wywolanie mozemy postawic takze po lewej stronie\n";
    
    f_ref_lwartosci(1) = 5000;
    wypisz("Czy wpisalismy? " , 0);
    
    f_ref_lwartosci(6) = 8000; 
    wypisz("Czy wpisalismy? " , 0);
}