#include <iostream>
using namespace std;

int main()
{
    int n, m, o;
    cin >> n >> m;
    o=n;
    while (1)
    {
        for (int i=0;i<o;i++)
        {
            cout << "$" << " ";
            m--;
            if (m==0)
                break;
        }
        cout << endl;
        if (m==0)
            break;
        o+=2;
    }
    return 0;
}