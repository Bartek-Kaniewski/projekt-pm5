#ifndef TABLICA_H
#define TABLICA_H

#include <iostream>
#include <random>

class Tablica{
private:
    int wielkosc;
    int zakr1;
    int zakr2;
    int** tab;
    int suma;

public:
    Tablica();

    void czytaj_dane(int wielkosc = 10, int zakr1 = 0, int zakr2 = 9);
    void przetworz_dane();
    void wyswietl_wynik() const;

    ~Tablica();
};

#endif