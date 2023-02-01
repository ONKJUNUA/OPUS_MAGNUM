#include <iostream>
using namespace std;

char reverse(char znak)
{
    int roznica = 'a' - 'A';
    if( (znak >= 'A') && (znak <= 'Z') )
        return (znak + roznica);
    else if( (znak >= 'a') && (znak <= 'z') )
        return (znak - roznica);
    else
        return znak;
}

int main()
{
    char a,b,c;
    cin >> a;
    b=a;
    c=b;
    a = reverse(a);
    b = tolower(b);
    c = toupper(c);
    cout << a << " " << b << " " << c;
}