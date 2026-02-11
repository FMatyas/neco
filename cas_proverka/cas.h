#ifndef CAS_H
#define CAS_H

class Cas {
private:
    int hodiny, minuty, sekundy; // [cite: 5]

    // Pomocné metody
    bool jeCasPlatny(int h, int m, int s) const;
    void nastavSystemovyCas();

public:
    // Konstruktory a destruktor
    Cas();
    Cas(int h, int m, int s);
    Cas(const Cas &other);
    ~Cas();

    // Veřejné metody
    void vypis() const;
    void nastavCas(int h, int m, int s);
    int dejSekundyOdPulnoci() const;
    int nastavZeSekund(int s);
};

#endif