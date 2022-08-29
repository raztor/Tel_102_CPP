//
// Created by raztor on 26/08/2022.
//

#include <iostream>

int main(){
    float a,b;
    char op;
    a=0;
    while(a != 975) {
        std::cout << " Ingrese el primer digito o 975 para salir: ";
        std::cin >> a;
        if (a == 975) {
            break;
        }

        std::cout << "Ingrese una operacion (+ - * /): ";
        std::cin >> op;
        std::cout << "Ingrese segundo digito: ";
        std::cin >> b;

        if (op == '+') {
            std::cout << "El resultado es: " << a + b << std::endl;
        } else if (op == '-') {
            std::cout << "\nEl resultado es: " << a - b << std::endl;
        } else if (op == '*') {
            std::cout << "\nEl resultado es: " << a * b << std::endl;
        } else if (op == '/') {
            std::cout << "\nEl resultado es: " << a / b << std::endl;
        }
    }
    return 0;
}