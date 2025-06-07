#ifndef SORTOWANIE_H
#define SORTOWANIE_H

#include <iostream>
#include <random>

class Sortowanie{
private:
    int* liczby;
    int n;
    bool czyLosowe;
public:
    Sortowanie(unsigned int n = 6, bool czyLosowe = true);

    void czytaj_dane(int* liczby = nullptr);
    void przetworz_dane();
    void quicksort(int* liczba, int lewa, int prawa);
    void wyswietl_wynik()const;
};
#endif