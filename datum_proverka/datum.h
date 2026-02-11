#ifndef DATUM_H
#define DATUM_H
#include <iostream>

enum class DenVTyzdnu { Pondeli = 1, Utery, Streda, Ctvrtek, Patek, Sobota, Nedele };

class Datum {
    int d, m, r;
    static const int MIN = 1970;
    static const int MAX = 2050;

    bool jePrestupny(int rok) const { return (rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0); }
    int dnyVMesici(int mes, int rok) const;
    bool jePlatne(int den, int mes, int rok) const;
    void nastavitSystemove();

public:
    Datum();
    Datum(int den, int mes, int rok);
    Datum(const Datum& druhe);

    int getDen() const { return d; }
    int getMesic() const { return m; }
    int getRok() const { return r; }
    bool setDatum(int den, int mes, int rok);

    int pocetDniOd1970() const;
    int poradoveCisloDne() const;

    friend std::ostream& operator<<(std::ostream& os, const Datum& dt);
};
#endif