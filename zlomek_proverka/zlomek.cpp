#include "zlomek.h"

// Bod 2: Konstruktory
Zlomek::Zlomek() {
    citatel = 1;
    jmenovatel = 1;
}

Zlomek::Zlomek(int c, int j) {
    citatel = c;
    if (j == 0) {
        jmenovatel = 1;
    } else {
        jmenovatel = j;
    }
}

Zlomek::~Zlomek() {}

// --- ROZEPSANÉ SETTERY ---
void Zlomek::setCitatel(int c) {
    citatel = c;
}

void Zlomek::setJmenovatel(int j) {
    if (j != 0) {
        jmenovatel = j;
    }
}

// --- ROZEPSANÉ GETTERY ---
int Zlomek::getCitatel() const {
    return citatel;
}

int Zlomek::getJmenovatel() const {
    return jmenovatel;
}

// Bod 4: Ostatní metody
double Zlomek::naDesetinne() const {
    return (double)citatel / jmenovatel;
}

void Zlomek::prevrat() {
    if (citatel != 0) {
        int pom = citatel;
        citatel = jmenovatel;
        jmenovatel = pom;
    }
}

// Bod 3: Výpis přes operátor <<
std::ostream& operator<<(std::ostream& os, const Zlomek& z) {
    os << z.citatel << "/" << z.jmenovatel;
    return os;
}
