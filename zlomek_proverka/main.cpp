#include <iostream>
#include "zlomek.h"

using namespace std;

int main() {
    // 8. Uživatelské rozhraní - Úvodní text podle ukázky [cite: 10]
    cout << "zlomek" << endl;

    // 2. Vytvoření objektů podle zadání
    // Objekt z1: konstruktor bez parametrů (nastaví 1/1)
    Zlomek z1;
    // Objekty z2, z3, z4: konstruktor s vlastními hodnotami
    Zlomek z2(3, 2);
    Zlomek z3(2, 6);
    Zlomek z4(0, 2);

    // 3. & 4. Výpis počátečních stavů
    cout << "Objekt 'z1' vytvoreny konstruktorem bez parametru: ";
    z1.vypis(); cout << ", " << z1.naDesetinne() << endl;

    cout << "Objekt 'z2' vytvoreny konstruktorem s parametry: ";
    z2.vypis(); cout << ", " << z2.naDesetinne() << endl;

    cout << "Objekt 'z3' vytvoreny konstruktorem s parametry: ";
    z3.vypis(); cout << ", " << z3.naDesetinne() << endl;

    cout << "objekt 'z4' vytvoreny konstruktorem s parametry: ";
    z4.vypis(); cout << ", " << z4.naDesetinne() << endl;

    // 4. Převrácení zlomku (pomocí swapu)
    cout << "\nObjekt 'z2' po prevraceni: ";
    z2.prevrat(); // Prohodí 3/2 na 2/3
    z2.vypis();
    cout << endl;

    // Kontrola, zda lze z4 převrátit (v čitateli je 0) [cite: 12]
    if (z4.getCitatel() == 0) {
        cout << "Zlomek 'z4' nelze prevratit." << endl;
    }

    // 3. Změna zlomku uživatelem přes Settery [cite: 13, 14, 15]
    int c, j;
    cout << "\nZmena zlomku 'z1'" << endl;
    cout << "Zadej citatele: ";
    cin >> c;
    cout << "Zadej jmenovatele: ";
    cin >> j;

    z1.setCitatel(c);
    z1.setJmenovatel(j);

    cout << "Objekt 'z1' po zmene: ";
    z1.vypis();
    cout << endl;

    // 8. Ukončení programu [cite: 20]
    cout << "\nPress [Enter] to close the terminal";
    cin.ignore();
    cin.get();

    return 0;
}