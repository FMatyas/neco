#ifndef ZLOMEK_H
#define ZLOMEK_H

class Zlomek {
private:
    int citatel;   // Bod 1: Soukromé atributy
    int jmenovatel;

public:
    // Bod 2: Přetížené konstruktory
    Zlomek();
    Zlomek(int c, int j);
    ~Zlomek();

    // Bod 3: Získání/nastavení (Getters/Setters)
    void setCitatel(int c);
    void setJmenovatel(int j);
    int getCitatel() const;
    int getJmenovatel() const;

    // Bod 3 a 4: Metody pro výpis a operace
    void vypis() const;
    double naDesetinne() const;
    void prevrat(); // Prohození (swap)
};

#endif