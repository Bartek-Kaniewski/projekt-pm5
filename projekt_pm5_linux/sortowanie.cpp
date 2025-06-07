#include "sortowanie.h"

Sortowanie::Sortowanie(unsigned int n, bool czyLosowe){
    this -> n = n;
    this -> czyLosowe = czyLosowe;
    liczby = new int[n];
}

void Sortowanie::czytaj_dane(int* liczby){
    if(czyLosowe){
        srand(std::random_device{}());
        for(int i = 0; i < n; i++){
            this -> liczby[i] = rand() % (1000 - 0 + 1) + 0;
        }
    }
    else{
        for(int i = 0; i < n; i++){
            this -> liczby[i] = liczby[i];
        }
    }
}

void Sortowanie::przetworz_dane(){
    quicksort(liczby, 0, n - 1);
}

void Sortowanie::quicksort(int* liczba, int lewa, int prawa){
    if(lewa < prawa){
        int pivot = liczba[prawa];
        int i = lewa - 1;
        for (int j = lewa; j < prawa; j++) {
            if (liczba[j] < pivot) {
                i++;
                int temp = liczba[i];
                liczba[i] = liczba[j];
                liczba[j] = temp;
            }
        }
        int temp = liczba[i + 1];
        liczba[i + 1] = liczba[prawa];
        liczba[prawa] = temp;
        int pi = i + 1;
        quicksort(liczba, lewa, pi - 1);
        quicksort(liczba, pi + 1, prawa);
    }
}

void Sortowanie::wyswietl_wynik()const{
    for(int i = 0; i < n; i++){
        std::cout<<liczby[i]<<", ";
    }
    std::cout<<std::endl;
}