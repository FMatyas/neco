#include "datum.h"
#include <ctime>

int Datum::dnyVMesici(int mes, int rok) const {
    int dny[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    return (mes == 2 && jePrestupny(rok)) ? 29 : dny[mes - 1];
}

bool Datum::jePlatne(int den, int mes, int rok) const {
    return rok >= MIN && rok <= MAX && mes >= 1 && mes <= 12 && den >= 1 && den <= dnyVMesici(mes, rok);
}

void Datum::nastavitSystemove() {
    time_t t = time(0); tm* n = localtime(&t);
    d = n->tm_mday; m = n->tm_mon + 1; r = n->tm_year + 1900;
}

Datum::Datum() { nastavitSystemove(); }

Datum::Datum(int den, int mes, int rok) {
    if (!setDatum(den, mes, rok)) nastavitSystemove();
}

Datum::Datum(const Datum& druhe) : d(druhe.d), m(druhe.m), r(druhe.r) {}

bool Datum::setDatum(int den, int mes, int rok) {
    if (jePlatne(den, mes, rok)) { d = den; m = mes; r = rok; return true; }
    return false;
}

int Datum::pocetDniOd1970() const {
    int suma = 0;
    for (int i = MIN; i < r; ++i) suma += jePrestupny(i) ? 366 : 365;
    for (int i = 1; i < m; ++i) suma += dnyVMesici(i, r);
    return suma + d - 1;
}

int Datum::poradoveCisloDne() const {
    return (pocetDniOd1970() + 3) % 7 + 1;
}

std::ostream& operator<<(std::ostream& os, const Datum& dt) {
    return os << dt.d << ". " << dt.m << ". " << dt.r << ", pocet dni od 1. 1. 1970 je "
              << dt.pocetDniOd1970() << ", den v tydnu je " << dt.poradoveCisloDne() << ".";
}