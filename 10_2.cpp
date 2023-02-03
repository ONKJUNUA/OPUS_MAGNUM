#include <iostream>
#include <string>
#include <iomanip> 
#include <vector> 
using namespace std;

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

int main()
{
    vector<vector<int>> plansza;
    pokaz_wektor2D(plansza, "plansza (definiowana bez inicjalizacji) ");

    vector<vector<int>> arkusz
        {{10, 20, 25},
        {44, 46, 48}};
    pokaz_wektor2D(arkusz, "arkusz liczb (z klamra inicjalizacyjna)" );

    vector<vector<int> > tabliczka {5,vector<int>(5)};
    pokaz_wektor2D(tabliczka, "tabliczka (napompowana)" );
}