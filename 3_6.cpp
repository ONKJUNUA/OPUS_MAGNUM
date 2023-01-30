#include <iostream>
using namespace std;

enum class Tpraca_silnikow { 
    cala_wstecz = -100,
    pol_wstecz = -50,
    wolno_wstecz = -25,
    bardzo_wolno_wstecz = -5,
    stop = 0, 
    bardzo_wolno_naprzod = 5,
    wolno_naprzod = 20,
    pol_naprzod = 50,
    cala_naprzod = 100 };

int main(int argc, char *argv[ ])
{
    cout << "Kapitan na mostku sygnalizuje telegrafem." << endl;
    Tpraca_silnikow telegraf = Tpraca_silnikow::stop; 
    telegraf = Tpraca_silnikow::wolno_naprzod; 
    using Tsilniki = Tpraca_silnikow; 
    telegraf = Tsilniki::pol_naprzod; 
    cout << "Mowi mechanik. Kapitan przez telegraf rozkazal: ";
    
    switch(telegraf) 
    {
        case Tpraca_silnikow::bardzo_wolno_naprzod: 
            cout << "*bardzo wolno naprzod*" << endl;
            break;
        case Tsilniki::pol_naprzod: 
            cout << "*pol_naprzod*" << endl;
            break;
        case Tpraca_silnikow::cala_naprzod:
            cout << "*cala_naprzod*" << endl;
            break;
    }

    int moc_silnikow = static_cast<int>(telegraf); 
    cout << "co oznacza " << moc_silnikow << "% mocy silnikow " << endl;
    telegraf = Tpraca_silnikow::stop; 

    enum {
        liczba_kotwic = 2,
        liczba_ladowni = 6 };

    for(int k = 0 ; k < liczba_kotwic ; ++k) 
    {
        cout << "Opuszczamy kotwice nr " << k << " (z " << liczba_kotwic << ")"<< endl;
    }
    cout << "Obserwujemy kazda z " << liczba_ladowni << " ladowni" << endl;
}