#include <iostream>
using namespace std;

int main()
{
    float tab[5][2];
    char t[4][2][2];
    cout << endl;
    for (int i=0;i<sizeof(t);i++)
        cout << i+1 << ". " << &t+i << endl;
    cout << endl;
    
    int potega[10][6];
    for (int i=0;i<10;i++)
        potega[i][0]=i+1;

    for (int j=1;j<6;j++)
        for (int i=0;i<10;i++)
            potega[i][j]=potega[i][j-1]*potega[i][0];

    for (int j=0;j<10;j++)
    {
        for (int i=0;i<6;i++)
            cout << potega[j][i] << "\t|\t";
        cout << endl;
    }
    cout << endl;

    double tab2[4][5][6];
    for (int j=0;j<4;j++)
        for (int i=0;i<5;i++)
            for (int h=0;h<6;h++)
                tab2[i][j][h]=0;
    for (int j=0;j<4;j++)
    {
        for (int i=0;i<5;i++)
        {
            for (int h=0;h<6;h++)
                cout << tab2[i][j][h] << " ";
            cout << endl;
        }
        cout << endl;
    }
}