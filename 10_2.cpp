#include <iostream>
#include <string>
#include <iomanip> 
#include <vector> 
using namespace std;

void modyfikuj_wektor2D(vector<vector<int>> & tabl)
{
    for(auto & rzad : tabl )
    {
        for(auto & elem : rzad ) {
            elem = -elem;
        }
    }
}

void pokaz_wektor2D(vector<vector<int>> tabl, string opis) 
{
    cout << "\n"<< opis << " ma rzedow: " << tabl.size() << endl; 
    for(int r = 0 ; r < tabl.size() ; ++r) 
    {
        cout << "Rzad nr " << r << " dlugosc " << tabl[r].size() << " ---> |"; 
        for( int k = 0 ; k < tabl[r].size() ; ++k) 
        { 
            cout << setw(4) << tabl[r][k] << " | ";
        }
    cout << endl;
    }
}

void pokaz_wektor1D(vector<int> tabl, string opis) 
{
    cout << "\n" << opis << " ma elementow: " << tabl.size() << endl;
    int dlugosc_kreski = tabl.size() * 7; 
    string kreska(dlugosc_kreski, '*'); 
    cout << kreska << "\n|";
    for(auto elem : tabl)
        cout << setw(4) << elem << " | "; 
    cout << '\n' << kreska << endl;
}

int main()
{
    vector<vector<int>> plansza;
    pokaz_wektor2D(plansza, "plansza (definiowana bez inicjalizacji) ");

    vector<vector<int>> arkusz
        {{10, 20, 25},
        {44, 46, 48}};
    pokaz_wektor2D(arkusz, "arkusz liczb (z klamra inicjalizacyjna)" );

    vector<vector<int> > tabliczka {5,vector<int>(5)};
    tabliczka[1][3] = 222;
    tabliczka[0][3] = 111;
    pokaz_wektor2D(tabliczka, "tabliczka (napompowana)" );

    vector<vector<int>> rozklad;
    rozklad.resize(3);
    for(int rz = 0 ; rz < 3; ++rz)
        rozklad[rz].resize(5);
    rozklad[1][1] = 11;
    pokaz_wektor2D(rozklad, "rozklad jazdy");

    rozklad[1].resize(3);
    pokaz_wektor2D(rozklad, "po skroceniu rzedu nr 1 rozklad jazdy - ");
    rozklad.resize(1);
    pokaz_wektor2D(rozklad, "po zmniejszaniu liczby rzedow ");

    vector<vector<int> > pole_bitwy; 
    for(int rz = 0 ; rz < 3 ; ++rz) 
    {
        vector<int> dodawany_rzad; 
        for(int k = 0 ; k < 5 ; ++k) { 
            dodawany_rzad.push_back(100*rz + k); 
        }
        pole_bitwy.push_back( dodawany_rzad); 
        pokaz_wektor2D(pole_bitwy, "Biezaca tresc pola bitwy morskiej"); 
    }

    pole_bitwy[1].push_back(750);
    pole_bitwy.push_back(vector<int> {11, 12, 13} );
    pokaz_wektor2D(pole_bitwy, " pole_bitwy po dwukrotnej zmianie rozmiarow" );

    pole_bitwy[0].pop_back();
    pokaz_wektor2D(pole_bitwy, "pole bitwy (po pop_back jednego elementu)");
    pole_bitwy.pop_back();
    pokaz_wektor2D(pole_bitwy, "pole bitwy (po pop_back jednego rzedu)");

    cout << "========Funkcja mogaca modyfikowac wektor 2D " << endl;
    modyfikuj_wektor2D(pole_bitwy);
    pokaz_wektor2D(pole_bitwy, "Po modyfikacji tresc pola bitwy morskiej");

    pokaz_wektor1D(arkusz[1], "rzad nr 1 arkusza");
    pokaz_wektor1D(pole_bitwy[1], "rzad nr 1 pola bitwy");
}