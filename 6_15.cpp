#include <iostream>
#include <string>
using namespace std;

void porownaj_je(const double & a, string opis1, const double &b, string opis2) 
{
    cout << opis1 << " = " << a << ", " << opis2 << " = " << b << ". " << "Ich adresy sa "
        << ( (&a == &b)? "Identyczne (referencja)" : "rozne (kopia)" ) 
        << endl;
}

int main()
{
    double d = 5.5;
    double & rd = d;
    const double & crd = d; 
    auto v1 = d; 
    auto v2 = rd; 
    auto v3 = crd; 
    d = -20;
    cout << endl;
    porownaj_je(v1, "v1", d, "d "); 
    porownaj_je(v2, "v2", rd, "rd ");
    porownaj_je(v3, "v3", crd, "crd");
    cout << endl << "--- Tworzymy prawdziwe referencje " << endl;
    auto & ref_d = d;
    auto & ref_rd = rd;
    auto & ref_crd = crd;
    d = -40; 
    porownaj_je(ref_d, "ref_d ", d, "d ");
    porownaj_je(ref_rd, "ref_rd ", rd, "rd ");
    porownaj_je(ref_crd, "ref_crd", crd, "crd");
    ref_rd = 177; 
    cout << endl << "Po probach przypisania przy uzyciu obu (zwyklych) referencji" << endl;
    porownaj_je(ref_rd, "ref_rd ", rd, "rd "); 
    porownaj_je(ref_crd, "ref_crd", crd, "crd");
    const auto & cref_rd = rd; 
    const auto & cref_crd = crd; 
    rd = 6.6; 
    cout << endl << "Po probach przypisania przy uzyciu obu (stalych) referencji" << endl;
    porownaj_je(cref_rd, "cref_rd ", rd, "rd "); 
    porownaj_je(cref_crd, "cref_crd", crd, "crd");
    cout << endl;
}