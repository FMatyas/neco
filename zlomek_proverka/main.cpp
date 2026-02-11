#include <iostream>
#include "zlomek.h"

using namespace std;

int main() {
    cout << "zlomek" << endl;

    Zlomek z1;
    Zlomek z2(3, 2);
    Zlomek z3(4, 12); // Zlomek k vykrácení

    // Výpis pomocí operátoru <<
    cout << "z1: " << z1 << ", hodnota: " << z1.naDesetinne() << endl;
    cout << "z2: " << z2 << ", hodnota: " << z2.naDesetinne() << endl;

    // Test krácení (bod 4)
    cout << "z3 pred kracenim: " << z3 << endl;
    z3.zkrat();
    cout << "z3 po kraceni:    " << z3 << endl;

    // Test převrácení (bod 4)
    cout << "z2 po prevraceni: ";
    z2.prevrat();
    cout << z2 << endl;

    // Vstup od uživatele
    int c, j;
    cout << "\nZmena z1 - zadej citatele a jmenovatele: ";
    cin >> c >> j;
    z1.setCitatel(c);
    z1.setJmenovatel(j);
    cout << "Novy z1: " << z1 << endl;

    cout << "\nPress Enter to exit...";
    cin.ignore(); cin.get();
    return 0;
}
