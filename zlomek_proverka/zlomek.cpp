#include "zlomek.h"
#include <iostream>

// Konstruktor bez parametrů (Bod 2)
Zlomek::Zlomek() {
    citatel = 1;
    jmenovatel = 1;
}

// Konstruktor s parametry a kontrolou (Bod 2)
Zlomek::Zlomek(int c, int j) {
    citatel = c;
    if (j == 0) jmenovatel = 1;
    else jmenovatel = j;
}

Zlomek::~Zlomek() {}

// Getters a Setters (Bod 3)
void Zlomek::setCitatel(int c) { citatel = c; }
void Zlomek::setJmenovatel(int j) { if (j != 0) jmenovatel = j; }
int Zlomek::getCitatel() const { return citatel; }
int Zlomek::getJmenovatel() const { return jmenovatel; }

// Výpis zlomku (Bod 3)
void Zlomek::vypis() const {
    std::cout << citatel << "/" << jmenovatel;
}

// Převod na desetinné číslo (Bod 4)
double Zlomek::naDesetinne() const {
    return (double)citatel / jmenovatel;
}

// Převrácení zlomku pomocí swapu (Bod 4)
void Zlomek::prevrat() {
    if (citatel != 0) {
        int pom = citatel;
        citatel = jmenovatel;
        jmenovatel = pom;
    }
}