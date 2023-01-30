#include <iostream>
using namespace std;
int main()
{
    cout << "\nK: Stewardzie, ilu leci pasazerow?" << endl << "S: Kapitanie, pasazerow jest: ";
    int ile;
    cin >> ile;
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