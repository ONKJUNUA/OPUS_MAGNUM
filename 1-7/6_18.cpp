#include <iostream>
using namespace std;

void tuzin(int & a,int & b)
{
    a++;
    if (a%12==0)
        {cout << b << ".Tuzin" << endl;
        b++;}
}

int main()
{
    int a=0;
    int b=1;

    for (int i=0;i<100;i++)
        tuzin(a,b);
}