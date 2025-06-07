#ifndef POLE_H
#define POLE_H

#include <iostream>
#include <iomanip>

class Pole{
private:
    double a; //w poleceniu jest flout???
    double b;
    double P;
public:
    Pole();

    void czytaj_dane(); //cin w środku

    void przetworz_dane();

    void wyswietl_wynik()const;
};


#endif