//
// Created by raztor on 01-09-22.
//

#include <iostream>

float calc(float a, float b, int op) {
    switch (op) {
        case 1:
            return a + b;
        case 2:
            return a - b;
        case 3:
            return a * b;
        case 4:
            return a / b;
        default:
            return 0;
    }
}

float printcalc(){
    float a, b;
    int op;
    std::cout << "Ingrese primer numero: " << std::endl;
    std::cin >> a;
    std::cout << "Ingrese operacion: \nSuma: 1\nResta: 2\nMultiplicacion: 3\nDivision: 4" << std::endl;
    std::cin >> op;
    std::cout << "Ingrese segundo numero: " << std::endl;
    std::cin >> b;
    std::cout << "Resultado: " << calc(a, b, op) << std::endl;
    return 0;

}

int main() {
    std::cout << printcalc() << std::endl;
    return 0;
}