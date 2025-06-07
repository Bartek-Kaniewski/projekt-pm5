#include "pierwiastki.h"

Pierwiastki::Pierwiastki(){
    a = 0.0;
    b = 0.0;
    c = 0.0;
    delta = 0.0;
    x1 = 0.0;
    x2 = 0.0;
}

void Pierwiastki::czytaj_dane(){
    std::cout<<"Podaj wspolczynnik a: ";
    std::cin>>a;
    if(a == 0){
        std::cout<<"Wspolczynnik a nie moze byc zerem!"<<std::endl;
        return;
    }
    std::cout<<"Podaj wspolczynnik b: ";
    std::cin>>b;
    std::cout<<"Podaj wspolczynnik c: ";
    std::cin>>c;

}

void Pierwiastki::przetworz_dane(){

    delta = b * b - 4 * a * c;
    switch((delta > 0) ? 2 : (delta == 0 ? 1 : 0)){
        case 2:
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            break;
        case 1:
            x1 = x2 = -b / (2 * a);
            break;
        case 0:
            break;
    }
}

void Pierwiastki::wyswietl_wynik()const{
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<std::endl;
    if(a == 0){
        std::cout<<"Rownanie nie jest kwadratowe."<<std::endl;
        return;
    }
    switch((delta > 0) ? 2 : (delta == 0 ? 1 : 0)){
        case 2:
            std::cout<<"Dwa pierwiastki rzeczywiste: x1 = "<<x1<<", x2 = "<<x2<<std::endl;
            break;
        case 1:
            std::cout<<"Jeden pierwiastek rzeczywisty: x = "<<x1<<std::endl;
            break;
        case 0:
            std::cout<<"Brak pierwiastkow rzeczywistych."<<std::endl;
            break;
    }
}


