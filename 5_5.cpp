#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> v {30,40,50};
    vector<string> k {"Nowak","Jankowski","Begowski"};
    k [0] = "Henryk Sienkiewicz";
    k.push_back("Jaslowski");
    for (auto &e : k)
    {
        cout << e << endl;
        e+=" - nie przejdzie";
    }
    for (int i=0;i<k.size();i++)
        cout << k[i] << endl;
}