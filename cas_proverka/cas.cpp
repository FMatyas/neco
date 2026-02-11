#include "cas.h"
#include <iostream>
#include <ctime>

// Pomocné metody
bool Cas::jeCasPlatny(int h, int m, int s) const {
    return (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59); //
}

void Cas::nastavSystemovyCas() {
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    hodiny = now->tm_hour;
    minuty = now->tm_min;
    sekundy = now->tm_sec; //
}

// Konstruktory
Cas::Cas() {
    nastavSystemovyCas();
}

Cas::Cas(int h, int m, int s) {
    if (jeCasPlatny(h, m, s)) {
        hodiny = h; minuty = m; sekundy = s;
    } else {
        nastavSystemovyCas();
    }
}

Cas::Cas(const Cas &other) {
    hodiny = other.hodiny; minuty = other.minuty; sekundy = other.sekundy;
}

Cas::~Cas() {}

// Metody pro výpis a nastavení
void Cas::vypis() const {
    if (hodiny < 10) std::cout << "0"; std::cout << hodiny << ":";
    if (minuty < 10) std::cout << "0"; std::cout << minuty << ":";
    if (sekundy < 10) std::cout << "0"; std::cout << sekundy;
}

void Cas::nastavCas(int h, int m, int s) {
    if (jeCasPlatny(h, m, s)) { hodiny = h; minuty = m; sekundy = s; }
}

int Cas::dejSekundyOdPulnoci() const {
    return hodiny * 3600 + minuty * 60 + sekundy;
}

int Cas::nastavZeSekund(int s) {
    int dny = s / 86400;
    int zbytek = s % 86400;

    // Ošetření případu, kdy by s bylo záporné
    if (zbytek < 0) zbytek += 86400;

    hodiny = zbytek / 3600;
    minuty = (zbytek % 3600) / 60;
    sekundy = zbytek % 60;
    return dny;
}