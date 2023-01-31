#include <iostream>
using namespace std;

int main ()
{
    short int m = 0x0f0f;
    short int k = 0x0ff0;
    short int a, b, c, d;
    a = m & k;
    b = m | k;
    c = ~m;
    d = m ^ k;
    cout << m << " " << k << endl
    << a << " " << b << " " << c << " " << d << endl;
}