//
// Created by Raztor on 22-08-22.
//
#include <iostream>;

int main() {
    int cantidad, ahorro, costo_total, vuelto, precio;
    precio = 150;
    std::cout << "Ingrese la cantidad de dinero" << std::endl;
    std::cin >> ahorro;
    cantidad = ahorro/precio;
    vuelto = ahorro%precio;
    costo_total = cantidad*precio;
    std::cout << "Con mi ahorro de "<< ahorro << " puedo comprar " << cantidad <<
    " unidades por " << costo_total <<  " y me sobra " << vuelto << std::endl;
    return 0;
}