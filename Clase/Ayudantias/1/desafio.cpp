//
// Created by raztor on 03/09/2022.
//
#include <iostream>
struct Estudiante{
    char nombre[100];
    int paralelo;
    int controles[4];
    int proyecto[3];
    bool cumple_restric;
    float promedio_controles;
    float promedio_proyecto;
    int NI;
    int NF;
    int situacion;//(1)Aprobado,(2)Controlrecuparetivoy(3)Reprobado.
} usm;

int main(){
    int sum_controles=0, sum_proyecto=0;
    std::cout << "Ingrese nombre del alumno:" << std::endl;
    std::cin >> usm.nombre;
    std::cout << "Ingrese las notas de los controles:" << std::endl;
    for (int i=1;i<5;i++){
        std::cout << "Control " << i << ": "<< std::endl;;
        std::cin >> usm.controles[i];
    }
    std::cout << "Ingrese las notas del proyecto:" << std::endl;
    for (int i=1;i<4;i++){
        std::cout << "Hito " << i <<": "<< std::endl;;
        std::cin >> usm.proyecto[i];
    }
    std::cout << "Ingrese la nota individual: ";
    std::cin >> usm.NI;
    std::cout << std::endl;

    for(int i = 0; i <= 4; i++) {
        sum_controles += usm.controles[i];
    }
    for(int i = 0; i <= 3; i++) {
        sum_proyecto += usm.proyecto[i];

    }std::cout << sum_controles << std::endl;
    usm.promedio_controles = sum_controles/4;
    usm.promedio_proyecto = ((sum_proyecto/3)*0.8)+(usm.NI*0.2);
    usm.NF = (usm.promedio_controles*0.5)+(usm.promedio_proyecto*0.5);
    if(usm.promedio_proyecto >= 54.5){
        if(usm.NF < 54.5){
            usm.situacion = 2;
            //codigo para ver si es posible un control recuperativo
            }
    }else{
        usm.situacion = 3;
        std::cout << "Has sido reprobado por tener un promedio de proyecto menor a 50" << std::endl;
    }

    return 0;
}