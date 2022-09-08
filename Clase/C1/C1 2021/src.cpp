//
// Created by raztor on 06/09/2022.
//
#include <iostream>
#include <cmath>
#define NF 3

struct fuerza{
    float f_x;
    float f_y;
}f;

float grados2Radianes(float angle){
    return M_PI/180;
}

struct fuerza getComponentes(float mag, float angle){
    f.f_x = mag*cos(angle);
    f.f_y = mag* sin(angle);
    return f;
}
float magnitudFuerza(fuerza f){
    return sqrt(pow(f.f_x,2)+pow(f.f_y,2));
}

struct fuerza getFuerza(){
    float newt,grad;
    std::cout << "\nIndique magnitud de la fuerza en Newton [N]: ";
    std::cin >> newt;
    std::cout << "\nIndique el angulo de la fuerza en grados: ";
    std::cin >> grad;
    //grad = grados2Radianes(grad);
    return getComponentes(newt,grad);
}

int main(){
    struct fuerza X[NF];
    float fuerza_x=0, fuerza_y=0;
    for (int i = 0; i < NF; i++){
        X[i] = getFuerza();
        fuerza_x += X[i].f_x;
        fuerza_y += X[i].f_y;
    }
    fuerza f{};
    f.f_x = fuerza_x;
    f.f_y = fuerza_y;

    float a = magnitudFuerza(f);

    std::cout << "La magnitud del vector fuerza total es " << a << "[N]" << std::endl;


    return 0;
}