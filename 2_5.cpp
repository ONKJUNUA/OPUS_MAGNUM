#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a<6)
        cout << 1 << endl;
    if (a)
        cout << 2 << endl;
    if (a+2)
        cout << 3 << endl;
    if ((a+7)<(10-2))
        cout << 4 << endl;
    if ((a+a)<(a-4))
        cout << 5 << endl;
}