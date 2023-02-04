#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> wekt {{0,1,2,3},{10,11,12,13}};

    wekt.resize(6);

    for(int kolumna=2;kolumna<6;++kolumna)
    {
        wekt[kolumna].resize(4);
        for (int wiersz=0;wiersz<4;++wiersz)
            wekt[kolumna][wiersz] = wekt[kolumna-1][wiersz]+10;
    }
    
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<6;j++)
            cout << wekt[j][i] << "\t";
        cout << endl;
    }
}
