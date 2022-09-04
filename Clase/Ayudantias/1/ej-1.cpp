//
// Created by raztor on 03/09/2022.
//
#include <iostream>

int main(){
    int n,x,k;
    std::cout << "Ingrese el numero a calcular: " << std::endl;
    std::cin >> n;
    k = n;
    x = n;
    for (int i = 1; i < n; ++i) {
        x = x*i;
    }
    std::cout << "El resultado de " << k << " factorial es: " << x << std::endl;
    return 0;
}