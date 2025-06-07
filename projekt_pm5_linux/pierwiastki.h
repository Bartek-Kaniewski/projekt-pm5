#ifndef PIERWIASTKI_H
#define PIERWIASTKI_H

#include <iostream>
#include <iomanip> //żeby po przecinku były dwa miejsca
#include <cmath>

class Pierwiastki{
private:
    double a;
    double b;
    double c;
    double delta;
    double x1;
    double x2;
public:
    Pierwiastki();

    void czytaj_dane();

    void przetworz_dane();

    void wyswietl_wynik() const;
};

#endif