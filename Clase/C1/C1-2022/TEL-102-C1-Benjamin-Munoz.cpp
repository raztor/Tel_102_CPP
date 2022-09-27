//
// Created by raztor on 08/09/2022.
//
#include<iostream>
#include<cstring>

int PROF_NUM = 5;

typedef struct profesores{

    char rut[14];
    int edad;
    char nombre[21];
    char apellido[21];
    int genero; //Masculino = 0, Femenino = 1.

} profe_t;

profe_t add_profe(){

        profe_t profe;

        std::cout << "Ingresando informacion de Profesor " << std::endl;
        std::cout << "Ingrese rut: ";
        std::cin >> profe.rut;
        std::cout << "Ingrese edad: ";
        std::cin >> profe.edad;
        std::cout << "Ingrese nombre: ";
        std::cin >> profe.nombre;
        std::cout << "Ingrese apellido: ";
        std::cin >> profe.apellido;
        std::cout << "Ingrese genero (M=0, F=1): ";
        std::cin >> profe.genero;
        std::cout << std::endl;

        return profe;

}

void stats_academicas(profe_t profes[], int cant){
    float prom[cant], promedio_edad=0, genero[2];
    char prof_joven[21]="", prof_viejo[21]="", joven_apellido[21]="", viejo_apellido[21]="";
    int edad_joven=500, edad_viejo=0;
    int percent_m, percent_f;
    genero[0] = 0;
    genero[1] = 0;
    for (int i=0;i<cant;i++){
        prom[i] = profes[i].edad;
        promedio_edad += prom[i];
        if (profes[i].genero == 0){
            genero[0] += 1;}
        else if (profes[i].genero == 1){
            genero[1] += 1;}
        if (profes[i].edad > edad_viejo){
            edad_viejo = profes[i].edad;
            std::strcpy(prof_viejo, profes[i].nombre);
            std::strcpy(viejo_apellido, profes[i].apellido);
        }
        if (profes[i].edad < edad_joven){
            edad_joven = profes[i].edad;
            std::strcpy(prof_joven, profes[i].nombre);
            std::strcpy(joven_apellido, profes[i].apellido);
        }

    }
    promedio_edad = promedio_edad/cant;
    percent_m = (genero[0]/cant)*100;
    percent_f = (genero[1]/cant)*100;
    std::cout << "El promedio de edad de los profesores es: " << promedio_edad << std::endl;
    std::cout << "Existe un "<< percent_m <<"% de profesores de genero masculino y un "<< percent_f <<"% de genero femenino." << std::endl;
    std::cout << "El profesor mas joven es " << prof_joven << " " << joven_apellido << " con " << edad_joven << " anos" <<std::endl;
    std::cout << "El profesor mas longevo es " << prof_viejo << " " << viejo_apellido << " con " << edad_viejo << " anos" <<std::endl;
}


int main(){
    profe_t profes[PROF_NUM];
    for(int i=0;i<PROF_NUM;i++){
        profes[i] = add_profe();

    }
    stats_academicas(profes, PROF_NUM);



    return 0;

}