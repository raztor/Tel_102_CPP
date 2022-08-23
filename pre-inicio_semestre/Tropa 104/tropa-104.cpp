//
// Created by raztor on 22-08-22.
//

#include <iostream>;

int main(){

    int dist_total, titanes, integrantes, gas_pp, gas_tot;
    std::cout << "Ingrese la distancia total al cuartel: " << std::endl;
    std::cin >> dist_total;
    std::cout << "Ingrese la cantidad de titanes: " << std::endl;
    std::cin >> titanes;
    std::cout << "Ingrese la cantidad de reclutas: " << std::endl;
    std::cin >> integrantes;
    gas_pp = dist_total*3 + 2*titanes;
    std::cout << "la gasolina necesaria para cada recluta es de " << gas_pp << " litros" << std::endl;
    std::cout << "la gasolina necesaria para todos los integrantes es de " << gas_pp*integrantes << " litros" << std::endl;

    return 0;
}