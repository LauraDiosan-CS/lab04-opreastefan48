

#include <iostream>
//#include "Tests.h"
#include "Cheltuieli.h"

using namespace std;

int main()
{
  

    char tip[100];
    int zi,luna,suma;

    cout << "Dati tipul cheltuielii: ";
    cin >> tip;
    cout << "Dati Ziua: ";
    cin >> zi;
    cout << "Dati Luna: ";
    cin >> luna;
    cout << "Dati suma platita: ";
    cin >> suma;


    Cheltuieli c1(tip,zi,luna,suma);

    cout << c1;

}

