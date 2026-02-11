#include <iostream>
#include "cas.h"

using namespace std;

int main() {
    // 1. Inicializace objektů dle zadání
    Cas c1;              // Výchozí konstruktor (systémový čas)
    Cas c2(0, 0, 1);     // Konstruktor s parametry
    Cas c3(23, 59, 59);  // Konstruktor s parametry (limitní hodnota)
    Cas c4(c1);          // Kopírovací konstruktor

    cout << "cas oprava" << endl;

    // Výpisy sekund od půlnoci
    cout << "pocet sekund od pulnoci " << c1.dejSekundyOdPulnoci() << "." << endl;
    cout << "pocet sekund od pulnoci " << c2.dejSekundyOdPulnoci() << "." << endl;

    // Výpisy objektů
    cout << "\nObjekt vytvoreny vychozim konstruktorem c1" << endl;
    c1.vypis();
    cout << endl;

    cout << "\nObjekt vytvoreny konstruktorem s parametry c2" << endl;
    c2.vypis();
    cout << endl;

    cout << "\npocet sekund od pulnoci " << c3.dejSekundyOdPulnoci() << "." << endl;
    cout << "\nvytvoreny konstruktorem s parametry c3" << endl;
    c3.vypis();
    cout << endl;

    cout << "\npocet sekund od pulnoci " << c1.dejSekundyOdPulnoci() << "." << endl;
    cout << "\nObjekt vytvoreny kopirovacim konstruktorem c4(c1) ";
    c4.vypis();
    cout << endl;

    // 2. Interaktivní část - Nastavení času u objektu c1
    int h, m, s;
    cout << "\nNastaveni casu u objektu c1 (cas bude porovnavan s casem c3)" << endl;
    cout << " Zadej hodiny: "; cin >> h;
    cout << " Zadej minuty: "; cin >> m;
    cout << " Zadej sekundy: "; cin >> s;

    c1.nastavCas(h, m, s);
    cout << " pocet sekund od pulnoci " << c1.dejSekundyOdPulnoci() << endl;
    cout << " Cas po zmene ";
    c1.vypis();
    cout << endl;

    // 3. Porovnání (simulace výpisu bez operátorů)
    cout << "\nPorovnani c3 == c1" << endl;
    cout << " c3 "; c3.vypis(); cout << endl;
    cout << " c1 "; c1.vypis(); cout << endl;

    if (c3.dejSekundyOdPulnoci() == c1.dejSekundyOdPulnoci()) {
        cout << "casy se rovnaji." << endl;
    } else {
        cout << "casy se nerovnaji." << endl;
    }

    // 4. Převod zadaných sekund na čas u objektu c2
    int zadaneSekundy;
    cout << "\nPrevedeni sekund na cas u objektu c2" << endl;
    cout << " Zadej pocet sekund: "; cin >> zadaneSekundy;

    int dny = c2.nastavZeSekund(zadaneSekundy);
    cout << " Sekundy " << zadaneSekundy << " dny " << dny << " a cas ";
    c2.vypis();
    cout << endl;

    // 5. Závěr
    char klavesa;
    cout << "\nPro pokracovani stiskni klavesu 'k' ";
    cin >> klavesa;

    return 0;
}