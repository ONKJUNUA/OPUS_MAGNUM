#include <iostream>
#define PODWOZIE_707 1
#define PODWOZIE_747 2
#define PODWOZIE_DC11 3
#define PODWOZIE_ATR_72 4
#define TYP_PODWOZIA 4
using namespace std;

void wysun_kola()
{
    #line 128 "fikcja.cpp"
    #if (TYP_PODWOZIA == PODWOZIE_707)
    cout << "Tak jest, kapitanie, wysuwam 707\n";
    // funkcje w³aœciwe dla tego typu samolotu
    #elif (TYP_PODWOZIA == PODWOZIE_747)
    cout << "Tak jest, kapitanie, wysuwam 747\n";
    // funkcje w³aœciwe dla tego typu samolotu
    #elif (TYP_PODWOZIA == PODWOZIE_DC11)
    cout << "Tak jest kapitanie, wysuwam DC11\n";
    // funkcje w³aœciwe dla tego typu samolotu
    #elif (TYP_PODWOZIA == PODWOZIE_ATR_72)
    cout << "Tak jest, kapitanie, wysuwam ATR_72\n";
    // funkcje w³aœciwe dla tego typu samolotu
    #else
    cout << "To jakis inny, nieznany mi typ samolotu\n";
    #error "zle zdefiniowana wersja programu!!!!"
    #endif // TYP_PODWOZIA
}

 void penetracja()
 {
    cout << "To jest wydruk z funkcji o nazwie " << __func__ << endl;
 }

 void wersja_radaru()
{
    cout <<"Kompilacja " << __FILE__ << " " << __DATE__ << " " << __TIME__
        << "\nwydruk z funkcji " << __func__ << endl;
}


int main()
{
    wysun_kola();
    penetracja();
    wersja_radaru();
}
