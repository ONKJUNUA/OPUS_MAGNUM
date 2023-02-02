#include <iostream>
#include <string>
using namespace std;
double zielony = 1.1, czerwony = 2.2, niebieski = 7.7;

void porownaj_je(const double & a, string opis1, const double &b, string opis2) 
{
    cout << opis1 << " = " << a << ", " << opis2 << " = " << b << ". " << "Ich adresy sa "
        << ( (&a == &b)? "Identyczne (referencja)" : "rozne (kopia)" ) 
        << endl;
}

double & fun_referencja_zwykla(int nr) 
{
    if(nr == 1) return zielony;
    else if (nr == 2) return czerwony;
    else return niebieski;
}

const double & fun_referencja_const(int nr) 
{
    if(nr == 1) return zielony;
    else if (nr == 2) return czerwony;
    else return niebieski;
}

int main()
{
    cout << "\nTo samo, gdy w wyrazeniu inicjalizujacym jest wywolanie funkcji" << endl;
    auto w2 = fun_referencja_zwykla(15);
    auto w3 = fun_referencja_const(15);
    w2 = 11.1;
    w3 = 12.1;
    porownaj_je(w2, "v2", niebieski, "niebieski");
    porownaj_je(w3, "v3", niebieski, "niebieski");
    cout << endl << "Tworzymy prawdziwe referencje i inicjalizujemy wartosciami funkcji" << endl;
    auto & ref_niebfz = fun_referencja_zwykla(15);
    auto & ref_niebfc = fun_referencja_const(15);
    ref_niebfz = 5.5;
    porownaj_je(ref_niebfz, "ref_niebfz ",niebieski, "niebieski");
    porownaj_je(ref_niebfc, "ref_niebfc", niebieski, "niebieski");
    ref_niebfz = 2;
    cout << endl << "Gdy w definicji napiszemy const auto & " << endl;
    const auto & c_ref_niebfz = fun_referencja_zwykla(15); 
    const auto & c_ref_niebfc = fun_referencja_const(15); 
    niebieski = 120.2;
    porownaj_je(c_ref_niebfz, "c_ref_niebfz ",niebieski, "niebieski");
    porownaj_je(c_ref_niebfc, "c_ref_niebfc", niebieski, "niebieski");
    cout << endl;
}