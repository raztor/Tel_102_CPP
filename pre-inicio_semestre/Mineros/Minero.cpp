//
// Created by raztor on 22-08-22.
//
#include <iostream>;

int main(){
    int dias, metros, horas, tot_km;
    std::cout << "Ingrese los dias: " << std::endl;
    std::cin >> dias;
    horas = dias * 24;
    tot_km = horas * 5;
    metros = tot_km * 1000;
    std::cout << "El total de kilometros recorridos es: " << tot_km << std::endl;
    return 0;
}