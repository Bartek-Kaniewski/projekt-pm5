#include "tablica.h"

Tablica::Tablica(){
    wielkosc = 0;
    zakr1 = 0;
    zakr2 = 0;
    suma = 0;
    tab = nullptr;
}

void Tablica::czytaj_dane(int wielkosc, int zakr1, int zakr2){
    this->wielkosc = wielkosc;
    this->zakr1 = zakr1;
    this->zakr2 = zakr2;
    tab = new int*[wielkosc];
    for(int i = 0; i < wielkosc; i++){
        tab[i] = new int[wielkosc];
    }
}

void Tablica::przetworz_dane(){
    srand(std::random_device{}());
    suma = 0;
    for(int i = 0; i < wielkosc; i++){
        for(int j = 0; j < wielkosc; j++){
            if(i == j){
                tab[i][j] = rand() % (zakr2 - zakr1 + 1) + zakr1;
                suma += tab[i][j];
            }
            else{
                tab[i][j] = 0;
            }
        }
    }
}

void Tablica::wyswietl_wynik()const{
    std::cout<<"Suma elementow na przekatnej: "<<suma<<std::endl;
    std::cout<<"Zawartość tablicy"<< std::endl;
    for(int i = 0; i < wielkosc; i++){
        for(int j = 0; j < wielkosc; j++){
            std::cout<<tab[i][j]<<"\t";
        }
        std::cout<<std::endl;
    }
}


Tablica::~Tablica() {
    for(int i = 0; i < wielkosc; i++){
        delete[] tab[i];
        tab[i] = nullptr;
    }
    delete[] tab;
    tab = nullptr;
}