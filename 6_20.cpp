#include <iostream>
#include <cmath>
using namespace std;

constexpr double pi = 3.14159265; 
constexpr double promien_orb_marsa = 228;
constexpr double poziom_zanurzenia = -333;

constexpr long long silnia(int n)
{
    return n > 0 ? n * silnia(n - 1) : 1;
}

constexpr long double nasz_sinus(double x)
{
    return x
    - (x*x*x) /silnia(3)
    + (x*x*x*x*x)/silnia(5)
    - (x*x*x*x*x*x*x) / silnia(7)
    + (x*x*x*x*x*x*x*x*x*x*x) / silnia(11);
}

constexpr long double nasz_sinus2(double x)
{
    return x
    - (x*x*x) /silnia(3)
    + (x*x*x*x*x)/silnia(5)
    - (x*x*x*x*x*x*x) / silnia(7)
    + (x*x*x*x*x*x*x*x*x*x*x) / silnia(11)
    - (x*x*x*x*x*x*x*x*x*x*x*x*x) / silnia(13)
    + (x*x*x*x*x*x*x*x*x*x*x*x*x*x*x) / silnia(15)
    - (x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x) / silnia(17)
    + (x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x) / silnia(19);
}

constexpr double stopnie_na_radiany(double stopni)
{
    return pi* stopni / 180;
}

constexpr double dwa_pi_r(const double & promien) 
{
    return 2 * pi* promien ;
}

constexpr long double tablica_sinusow[ ] = {
nasz_sinus(stopnie_na_radiany(270)),
nasz_sinus(stopnie_na_radiany(300)),
nasz_sinus(stopnie_na_radiany(330)),
nasz_sinus(stopnie_na_radiany(360))
};

constexpr long double tablica_sinusow2[ ] = {
nasz_sinus2(stopnie_na_radiany(270)),
nasz_sinus2(stopnie_na_radiany(300)),
nasz_sinus2(stopnie_na_radiany(330)),
nasz_sinus2(stopnie_na_radiany(360))
};

int main()
{
    cout <<endl;
    for(int i = 0 ; i < 4 ; ++i)
        cout << "Sinus " << 270+(i*30) << " stopni to = " << tablica_sinusow[i] << endl;
    cout <<endl; 
    for(int i = 0 ; i < 4 ; ++i)
        cout << "Sinus " << 270+(i*30) << " stopni to = " << tablica_sinusow2[i] << endl;
    cout <<endl;   
}