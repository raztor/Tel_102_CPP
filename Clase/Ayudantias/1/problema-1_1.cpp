//
// Created by raztor on 03/09/2022.
//
#include <iostream>

double pow(double base, int exponente){
    double resultado = 1;
    if (exponente == 0){
        return 1;
    }
    for (int i=0; i<exponente;i++){
        resultado*=base;
    }
    return resultado;
}

int factorial(int n){
    int x;
    x = n;
    for (int i = 1; i <= n; i++) {
        x *= i;
    }
    return x;
}

double cosenoAprox(double x, int n){
    double result = 0;
    for (int i = 1; i <= n; i++){
        result += (((pow(-1,i))/(factorial(2*i)))*(pow(x,(2*1))));
    }
    std::cout << result << std::endl;
    return result;
}

int main() {
    float x;
    int n;
    std::cout << "Ingrese valor: " << std::endl;
    std::cin >> x;
    std::cout << "Ingrese n: " << std::endl;
    std::cin >> n;
    std::cout << "Resultado: " << cosenoAprox(x,n) << std::endl;
    return 0;
}
