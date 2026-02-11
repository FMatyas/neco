#include "zlomek.h"

// Pomocná metoda pro NSD (používá swapování hodnot)
int Zlomek::najdiNSD(int a, int b) const {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int zbytek = a % b;
        a = b;      // swap
        b = zbytek; // swap
    }
    return a;
}

// Konstruktory
Zlomek::Zlomek() {
    citatel = 1;
    jmenovatel = 1;
}

Zlomek::Zlomek(int c, int j) {
    citatel = c;
    if (j == 0) jmenovatel = 1;
    else jmenovatel = j;
}

Zlomek::~Zlomek() {}

// Rozepsané Settery
void Zlomek::setCitatel(int c) {
    citatel = c;
}

void Zlomek::setJmenovatel(int j) {
    if (j != 0) jmenovatel = j;
}

// Rozepsané Gettery
int Zlomek::getCitatel() const {
    return citatel;
}

int Zlomek::getJmenovatel() const {
    return jmenovatel;
}

// Metody pro bod 4
void Zlomek::zkrat() {
    int nsd = najdiNSD(citatel, jmenovatel);
    citatel = citatel / nsd;
    jmenovatel = jmenovatel / nsd;
}

void Zlomek::prevrat() {
    if (citatel != 0) {
        int pom = citatel;
        citatel = jmenovatel;
        jmenovatel = pom;
    }
}

double Zlomek::naDesetinne() const {
    return (double)citatel / jmenovatel;
}

// Přetížený operátor <<
std::ostream& operator<<(std::ostream& os, const Zlomek& z) {
    os << z.citatel << "/" << z.jmenovatel;
    return os;
}
