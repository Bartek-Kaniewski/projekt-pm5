#include "pole.h"

Pole::Pole(){
    a = 0.0;
    b = 0.0;
    P = 0.0; //deafultowe wartosci
}

void Pole::czytaj_dane(){
    std::cout<<"Podaj dlugosc boku a: ";
    std::cin>>a;
    std::cout<<"Podaj dlugosc boku b: ";
    std::cin>>b;
}

void Pole::przetworz_dane(){
    P = a * b; //pole prostokata
}

void Pole::wyswietl_wynik()const{
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"Pole prostokata o boku a = "<<a<<" i boku b = "<<b<<" wynosi: "<<P<<std::endl;
}