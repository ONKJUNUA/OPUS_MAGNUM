#include <iostream>
using namespace std;
int main()
{
    int ile;
    bool rzeczywistosc=true;
    
    while(rzeczywistosc)
    {
        cout << "\nK: Stewardzie, ilu leci pasazerow?" << endl << "S: Kapitanie, pasazerow jest: ";
        cin >> ile;
        if (ile>0)
        {
            rzeczywistosc=false;
            for(int i=0;i<ile;i++)
            {
                cout << "S: Pasazer nr " << i+1 << " prosze zapiac pasy! \n";
            }
            cout << "K: Skoro wszyscy juz zapieli, to ladujemy." << endl << endl;
            if (ile>=10)
            {    
                cout << "S: Kapitanie, niestety nie przezylo " << ile/5 << " pasazerow..." << endl << "K: To wyplac ich rodzinom po 50 zlotych z kazdego biletu!" << endl << "S: To bedzie jakies... " << ile*50 << " zlotych." << endl << "K: No coz - trudno, kupie tansze";
                if (ile>=500) cout << " samochody...";
                else if (ile>=200) cout << " motorowki...";
                else if (ile>=50) cout << " whiskey...";
                else cout << " cygara...";
            }
        }
        else cout << "K: Masz mnie za glupca? Podaj prawdziwa ilosc!" << endl;
    }
}