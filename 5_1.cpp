#include <iostream>
using namespace std;

void pierwsza (int n)
{
    for(int i=1;i<=n;i++)
    {   for(int j=1;j<=i;j++)
            cout << j%10 << " ";
        cout << "\n";
    }
}

void druga (int n)
{
    for(int i=n;i>=1;i--)
    {   for(int j=1;j<=i;j++)
            cout << j%10 << " ";
        cout << "\n";
    }
}

void trzecia (int n)
{
    for(int i=n;i>=1;i--)
    {   for(int j=n;j>=1;j--)
        {   if (j>i) cout << "  ";
            else cout << j%10 << " ";
        }
        cout << "\n";
    }
}

void czwarta (int n)
{
    for(int i=1;i<=n;i++)
    {   for(int j=n;j>=1;j--)
        {   if (j>i) cout << "  ";
            else cout << j%10 << " ";
        }
        cout << "\n";
    }
}

void cala (int n)
{
    for(int i=1;i<n;i++)
    {   for(int j=n;j>=1;j--)
        {   if (j>i) cout << "  ";
            else cout << j%10 << " ";
        }
        for(int j=2;j<=i;j++)
            cout << j%10 << " ";
        cout << "\n";
    }
    for(int i=n;i>=1;i--)
    {   for(int j=n;j>=1;j--)
        {   if (j>i) cout << "  ";
            else cout << j%10 << " ";
        }
        for(int j=2;j<=i;j++)
            cout << j%10 << " ";
        cout << "\n";
    }
}

int main()
{
    int cw,n;
    bool t=1;
    char r;
    while (t)
    {
        cout << "Jaka cwiartke potrzebujesz? [5: calosc]: ";
        cin >> cw;
        cout << "Jaka dlugosc boku?: ";
        cin >> n;

        if (n>30) {cout << "Za duza liczba!" << endl;}
        else switch (cw)
            {
                case 1: pierwsza(n); break;
                case 2: druga(n); break;
                case 3: trzecia(n); break;
                case 4: czwarta(n); break;
                case 5: cala(n); break;
                default: cout << "NIE WYBRALES NIC!" << endl; break;
            }
        cout << "Chcesz jeszcze raz? [T/N]: ";
        cin >> r;
        if (r!='T'&& r!='t')
            t=0;
    }
}