#include <iostream>
#include "pole.h"
#include "pierwiastki.h"
#include "tablica.h"
#include "sortowanie.h"

void wybierz_program(char wybor){
    switch(wybor){
        case '1': {
            std::cout<<"Wybrano program 1. Pole prostokata."<<std::endl;
            Pole pole1;
            pole1.czytaj_dane();
            pole1.przetworz_dane();
            pole1.wyswietl_wynik();
            break;
        }
        case '2': {
            std::cout<<"Wybrano program 2. Pierwiastki rownania kwadratowego."<<std::endl;
            Pierwiastki pierwiastki1;
            pierwiastki1.czytaj_dane();
            pierwiastki1.przetworz_dane();
            pierwiastki1.wyswietl_wynik();
            break;
        }
        case '3': {
            std::cout<<"Wybrano program 3. Tablica 2d."<<std::endl;
            Tablica tablica1;
            tablica1.czytaj_dane();
            tablica1.przetworz_dane();
            tablica1.wyswietl_wynik();
            break;
        }
        case '4': {
            std::cout<<"Wybrano program 4. Sortowanie."<<std::endl;
            Sortowanie sort1;
            sort1.czytaj_dane();
            sort1.wyswietl_wynik();
            sort1.przetworz_dane();
            sort1.wyswietl_wynik();
            break;
        }
        case 'Q': {
            std::cout<<"Koniec programu."<<std::endl;
            return;
        }
    }
    wybor = '0';
    std::cout<<"1. Powrót do wyboru programu."<<std::endl;
    std::cout<<"Q. Wyjście z programu."<<std::endl;
    std::cin>>wybor;
    if(wybor == '1'){
        wybierz_program(wybor);
    } 
    else{ //specjalnie jak cokolwiek innego sie wpisze to tez sie kończy
        std::cout<<"Koniec programu."<<std::endl;
        return;
    }

}

int main(){
    char wybor;
    std::cout<<"Bartłomiej Kaniewski"<<std::endl;
    std::cout<<"ZSEiL PM5"<<std::endl;
    std::cout<<"Wybierz program: "<<std::endl;
    std::cout<<"1. Pole prostokata"<<std::endl;
    std::cout<<"2. Pierwiastki rownania kwadratowego"<<std::endl;
    std::cout<<"3. Tablica 2d"<<std::endl;
    std::cout<<"4. Sortowanie"<<std::endl;
    std::cout<<"Q. Wyjscie"<<std::endl;
    std::cin>>wybor;

    wybierz_program(wybor);

    /*ZADANIE 1. POLE 
    Pole pole1;
    pole1.czytaj_dane();
    pole1.przetworz_dane();
    pole1.wyswietl_wynik();
   */

    /*ZADANIE 2. PIERWIASTKI
    Pierwiastki pierwiastki1;
    pierwiastki1.czytaj_dane();
    pierwiastki1.przetworz_dane();
    pierwiastki1.wyswietl_wynik();
*/
    /*ZADANIE 3.
    Tablica tablica1;
    tablica1.czytaj_dane();
    tablica1.przetworz_dane();
    tablica1.wyswietl_wynik();
     */
     /*ZADANIE 4
    Sortowanie sort1;
    sort1.czytaj_dane();
    sort1.wyswietl_wynik();
    sort1.przetworz_dane();
    sort1.wyswietl_wynik();
*/

    return 0;
}