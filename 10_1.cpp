#include <iostream>
using namespace std;

int a_function(int& i, double& f)
{
    i++;
    f--;
    cout << "Wewnatrz: i = " << i << ", f = " << f <<"\n";
    return 1;
}

int main (int argc, char* argv[])
{
    int j=7;
    double g=1.5;
    cout << "Przed: j = " << j << "g = " << g << endl;
    a_function(j,g);
    cout << "Po: j = " << j << "g = " << g << endl;
}