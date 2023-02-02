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

constexpr double nasz_sinus(double x)
{
    return x
    - (x*x*x) /silnia(3)
    + (x*x*x*x*x)/silnia(5)
    - (x*x*x*x*x*x*x) / silnia(7)
    + (x*x*x*x*x*x*x*x*x) / silnia(9);
}

constexpr double stopnie_na_radiany(double stopni)
{
    return pi* stopni / 180;
}

constexpr double dwa_pi_r(const double & promien) 
{
    return 2 * pi* promien ;
}

constexpr double mile_na_kilometry(double mil) 
{
    return (1.609344 * mil);
}

constexpr int porownaj(char a, char b)
{
    return a < b ? -1 : (a == b) ? 0 : +1;
}

int main()
{
    constexpr double buty_kilometrowe = mile_na_kilometry(7); 
    cout << "7-milowe buty to inaczej buty " << buty_kilometrowe << "-kilometrowe" << endl;
    constexpr double dystans_mile = 2614;
    constexpr double dystans_km = mile_na_kilometry(dystans_mile); 
    cout << "Odleglosc Paryz - Dakar to " << dystans_km << " kilometrow" << endl;
    for(int m = 100 ; m <= 600 ; m+= 100)
    {
        cout << " " << m << " mil odpowiada "
            << mile_na_kilometry(m) << " km." <<endl; 
    }
    constexpr int r = porownaj('a', 'a');
    switch (r)
    {
        case 1: cout << "Pierwszy wiekszy od drugiego" << endl; break;
        case 0: cout << "Sa rowne" << endl; break;
        case -1: cout << "Pierwszy mniejszy od drugiego" << endl; break;
    }
    
    constexpr double dl_orbity_marsa = dwa_pi_r(promien_orb_marsa);
    cout << "Obwod orbiry Marsa: " << dl_orbity_marsa << endl;
    
    constexpr long long silnia14 = silnia(14);
    cout << "Silnia: 14! to " << silnia14 << endl;

    cout << "Nasz_sinus (1 rad) = " << nasz_sinus(1) << endl 
        << "Biblioteczny sinus (1 rad) = " << sin(1) << endl;

    cout << "Nasz_sinus (45 stopni) = "
        << nasz_sinus(stopnie_na_radiany(45)) << endl
        << "Biblioteczny sinus (45 stopni) = " << sin(stopnie_na_radiany(45))
        << endl;
}