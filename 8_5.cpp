#include <iostream>
using namespace std;

enum class ruch {w_przod=5,w_tyl,stop=0};

int main()
{
    double tab[500]{};
    cout << &tab[99] << endl << tab+99 << " " << tab[99] << endl;
    cout << &tab[100] << endl << tab+100 << " " << tab[100] << endl;

    ruch ruszanie[15] = {ruch::w_przod, ruch::w_tyl, ruch::stop, ruch::w_tyl, ruch::stop}; 
    
    char g[] = {"programowanie"};
    char h[] = {'x','y','z',0};
    cout << h << endl << g;
}