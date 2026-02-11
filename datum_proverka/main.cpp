#include <iostream>
#include "datum.h"

int main() {
    Datum d1;
    std::cout << "Objekt d1 vytvoreny vychozim konstruktorem\n" << d1 << std::endl;

    Datum d2(1, 1, 2000);
    std::cout << "\nObjekt d2 vytvoreny konstruktorem s parametry\n" << d2 << std::endl;

    Datum d3(d2);
    std::cout << "\nObjekt d3 vytvoreny kopirovacim konstruktorem\n" << d3 << std::endl;

    char volba;
    do {
        int den, mes, rok;
        std::cout << "\nZadani noveho data\nZadej den: "; std::cin >> den;
        std::cout << "Zadej mesic: "; std::cin >> mes;
        std::cout << "Zadej rok: "; std::cin >> rok;

        if (d1.setDatum(den, mes, rok)) {
            std::cout << "Objekt d1 po zmene\n" << d1 << std::endl;
        } else {
            std::cout << "Neplatne datum!" << std::endl;
        }

        std::cout << "Klavesou 'k' bude zadavani ukonceno: ";
        std::cin >> volba;
    } while (volba != 'k');

    return 0;
}