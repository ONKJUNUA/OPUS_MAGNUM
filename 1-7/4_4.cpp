#include <iostream>
using namespace std;

int main()
{
int c;
cout << "Musisz odpowiedziec TAK lub NIE \n"
<< "jesli TAK, to napisz cos innego niz 0 \n"
<< "jesli NIE, to napisz 0 \n"
<< "Rozumiesz? Odpowiedz: ";

cin >> c;
cout << "Odpowiedziales: "
<< ( c? "TAK" : "NIE" ) 
<< ", prawda?";
}
