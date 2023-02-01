#include <iostream>
using namespace std;

double cels_to_fahr(double stopnie)
{
    return stopnie*9/5+32;
}

double fahr_to_cels(double stopnie)
{
    return (stopnie-32)*5/9;
}

void temperatura(double stopnie, char wej, char wyj)
{
    switch(wej)
    {
        case 'C':
            switch(wyj)
            {
                case 'C':
                    cout << "Z cels na cels: " << stopnie << " C\n";
                    break;
                case 'K':
                    cout << "Z cels na kelw: " << (stopnie + 273) << " K\n";
                    break;
                case 'F':
                    cout << "Z cels na fahr: " << cels_to_fahr(stopnie) << " F\n";
                    break;
                default:
                    cout << "Nie ma takiego stopnia!\n";
                    break;
            }
            break;
        
        case 'K':
            switch(wyj)
            {
                case 'C':
                    cout << "Z kelw na cels: " << (stopnie-273) << " C\n";
                    break;
                case 'K':
                    cout << "Z kelw na kelw: " << stopnie << " K\n";
                    break;
                case 'F':
                    cout << "Z kelw na fahr: " << cels_to_fahr(stopnie-273) << " F\n";
                    break;
                default:
                    cout << "Nie ma takiego stopnia!\n";
                    break;
            }
            break;

        case 'F':
            switch(wyj)
            {
                case 'C':
                    cout << "Z fahr na cels: " << fahr_to_cels(stopnie) << " C\n";
                    break;
                case 'K':
                    cout << "Z fahr na kelw: " << (fahr_to_cels(stopnie)+273) << " K\n";
                    break;
                case 'F':
                    cout << "Z fahr na fahr: " << stopnie << " F\n";
                    break;
                default:
                    cout << "Nie ma takiego stopnia!\n";
                    break;
            }
            break;
        default:
            cout << "Nie ma takiego stopnia!\n";
            break;
    }
}

void test()
{
    temperatura(52.5, 'C', 'F');
    temperatura(20.1, 'F', 'K');
    temperatura(52.5, 'K', 'F');
    temperatura(100, 'M', 'C');
    temperatura(52.5, 'K', 'C');
    temperatura(60, 'F', 'C');
}

int main() {
    char wej, wyj, wybor='T';
    double temp;
    while (wybor=='T' || wybor=='t')
    {
        cout << "Podaj temperature: ";
        cin >> temp;
        cout << "Wybierz operacje konwersji [C, K, F, T]: ";
        cin >> wej >> wyj;

        if (wej=='T' || wyj=='T')
            test();
        else
            temperatura(temp, wej, wyj);

        cout << "Jeszcze raz? [T/N]: ";
        cin >> wybor;
    }
    cout << "Zakonczenie programu...";
}