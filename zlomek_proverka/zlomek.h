#ifndef ZLOMEK_H
#define ZLOMEK_H
#include <iostream>

class Zlomek {
private:
    int citatel;   
    int jmenovatel;

    // Pomocná metoda pro krácení (vnitřní logika)
    int najdiNSD(int a, int b) const;

public:
    Zlomek(); 
    Zlomek(int c, int j);
    ~Zlomek();

    // Gettery a Settery (rozepsané v .cpp)
    void setCitatel(int c);
    void setJmenovatel(int j);
    int getCitatel() const;
    int getJmenovatel() const;

    // Metody pro bod 4
    void zkrat();           // Metoda, NE operátor
    void prevrat();         // Metoda se swapem
    double naDesetinne() const;

    // Přetížený operátor pro výpis (bod 3)
    friend std::ostream& operator<<(std::ostream& os, const Zlomek& z);
};

#endif
