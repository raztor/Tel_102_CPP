//
// Created by raztor on 03/09/2022.
// Fuente: https://math.stackexchange.com/questions/2753610/easiest-way-to-check-whether-the-number-is-prime-or-not
//
#include <iostream>

bool primo(int check){
    for (int i = 2; i < check; ++i) {
        if (check%i == 0){
            return false;
        }
    }
    return true;
}
int main (){
    int a,b,c;
    std::cout << "Ingrese un numero: " << std::endl;
    std::cin >> a;
    for (int i = 1; i <= a; ++i) {
        if (primo(i)){
            std::cout << i << std::endl;
        }
    }
    return 0;
}