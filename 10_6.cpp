#include <iostream>
#include <vector>
using namespace std;

void funkcja(vector<double> &wiersz)
{
    for(unsigned int i = 0 ; i < wiersz.size(); ++i)
        wiersz[i] *= 3;
}
void funkcja2(vector<double> &wiersz)
{
    for(unsigned int i = 0 ; i < wiersz.size(); ++i)
        wiersz[i] += 10;
}
void funkcja3(vector<double> &wiersz)
{
    for(unsigned int i = 0 ; i < wiersz.size(); ++i)
        wiersz[i] -= 1;
}
void pokaz(vector<vector<double>> v)
{
    for(unsigned int y = 0 ; y < v.size() ; ++y) {
        for(unsigned int x = 0 ; x < v[y].size() ; ++x)
        {
            cout << "v["<< y << "]" "["
            << x << "] = " << v[y][x] << "\t" ;
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    vector<vector<double>> dane {
        {0, 1, 2, 3, 4, },
        {10, 11, 12, 13, 14 },
 	   { 20, 21, 22, 23, 24 }
    };

    pokaz(dane);
    funkcja(dane[1]);
    pokaz(dane);
    funkcja2(dane[0]);
    pokaz(dane);
    funkcja3(dane[2]);
    pokaz(dane);
}  