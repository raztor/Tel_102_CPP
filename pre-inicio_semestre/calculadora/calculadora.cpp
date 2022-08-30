//
// Created by raztor on 26/08/2022.
//

#include <cstdio>

int main(){
    float a,b,c;
    int y = 1;
    char op, ex;
    while(y){
        printf("Ingrese el primer digito: ");
        scanf(" %f", &a);
        printf("Ingrese una operacion (+ - * /): ");
        scanf(" %c", &op);
        printf("Ingrese el segundo digito: ");
        scanf(" %f", &b);

        if (op == '+') {
            c=a+b;
            if (c == (int)c) {
                printf("El resultado es: %i", int(c));
            } else {
                printf("El resultado es: %.4f", c);
            }
        } else if (op == '-') {
            c=a-b;
            if (c == (int)c) {
                printf("El resultado es: %i", int(c));
            } else {
                printf("El resultado es: %.4f", c);
            }
        } else if (op == '*') {
            c=a*b;
            if (c == (int)c) {
                printf("El resultado es: %i", int(c));
            } else {
                printf("El resultado es: %.4f", c);
            }
        } else if (op == '/') {
            c=a/b;
            if (c == (int)c) {
                printf("El resultado es: %i", int(c));
            } else {
                printf("El resultado es: %.4f", c);
            }
            }
        printf("\nDesea continuar? (s / n): ");
        scanf(" %c", &ex);
        while (true) {
            if (ex == 's') {
                y = 1;
                break;
            } else if (ex == 'n') {
                y = 0;
                break;
            } else {
                printf("Opcion no valida, intente de nuevo: s / n ");
                scanf(" %c", &ex);
            }
        }
    }

    return 0;
}
