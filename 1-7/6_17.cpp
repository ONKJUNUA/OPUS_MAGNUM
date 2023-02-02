#include <iostream>
using namespace std;

int f(int a,double b)
{
    return (b*a)+0.5;
}

void f1(int n) {n++;}

void f2(int &n) {n++;}

int main()
{
    int x = 2;
    double z = 2.3;
    cout << "Funkcja (int f) dzielaca double przez inta: "<< f(x,z) << endl;
    //******************************************
    int liczba = 10;
    f1(liczba);
    cout << "Po f1 - liczba= " << liczba << endl;
    f2(liczba);
    cout << "Po f2 - liczba= " << liczba << endl;

}