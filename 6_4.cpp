#include <iostream>
using namespace std;
void zer(int wart, int &ref);

int main()
{
    int a = 44, b = 77;
    cout << "Przed wywolaniem funkcji: zer a = " << a << ", b = " << b << endl;
    zer(a, b); 
    cout << "Po powrocie z funkcji: zer a = " << a << ", b = " << b << endl; 
}

void zer(int wart, int &ref)
{
    cout << "\tW funkcji zer przed zerowaniem \n"
        << "\twart = " << wart << ", ref = " << ref << endl; 
    wart = 0;
    ref = 0; 
    cout << "\tW funkcji zer po zerowaniu \n"
        << "\twart = " << wart << ", ref = " << ref << endl; 
} 