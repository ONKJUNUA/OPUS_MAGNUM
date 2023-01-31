#include <iostream>
using namespace std;

void i1()
{
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    for (int i=1;i<=n;i++)
        if(i%10==0)
            cout << "Zakonczona dziesiatka nr: " << i/10 << endl;
}

void i2()
{
    int n;
    char znak='A';
    for(znak; znak<='H'; znak++)
    {   
        cout << znak << " ";
        if((znak-64)%2==0) cout << "\n";
    }
    cout << "Podaj ilosc znakow w rzedzie: ";
    cin >> n;
    for(znak; znak<='Z'; znak++)
    {   
        cout << znak << " ";
        if((znak-72)%n==0) cout << "\n";
    }
}

int main()
{
    int t;
    char co='T';
    while (co=='T' || co=='t') 
    {    
        cout << "Ktory chcesz program? [1-2]: ";
        cin >> t;
        switch (t)
        {
            case 1: 
                i1(); break;
            case 2:
                i2(); break;
        }
        cout << "\nZakonczono prace programu. Chcesz jeszcze raz? (T/N): ";
        cin >> co;
    }
}