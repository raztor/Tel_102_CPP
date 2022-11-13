//
// Created by Raztor on 13/11/2022.
//
#include "control4.h"

Servidor::Servidor(std::vector<Archivo> &files){
    archivos = files;
}

std::vector<Archivo> Servidor::getArchivos() {
    return archivos;
}

Dispositivo::Dispositivo() {
    tiempo_total = 0;
}

void Dispositivo::estadoDescargas(){
    std::cout << "Mostrando estado de Descargas" << std::endl;
    for (int i = 0; i < archivos_total.size(); ++i) {
        std::cout << "Nombre de archivo: " << archivos_total[i].nombre << ". Tamano del archivo: "
        << archivos_total[i].tamano << " Giga bits." << std::endl;
    }
    std::cout << "Tiempo total de descarga: " << tiempo_total << " [s]" << std::endl;
}

CuatroG::CuatroG(){
    tiempo_total = 0;
}

void CuatroG::descargarArchivos(Servidor s){
    archivos = s.getArchivos();
    for (int i = 0; i < archivos.size(); ++i) {
        archivos_total.push_back(archivos[i]);
        tiempo_total += (archivos[i].tamano/tasa_descarga_4g);

    }
}

CincoG::CincoG() : Dispositivo() {
    tiempo_total = 0;
}

void CincoG::descargarArchivos(Servidor s){
    archivos = s.getArchivos();
    for (int i = 0; i < archivos.size(); ++i) {
        archivos_total.push_back(archivos[i]);
        tiempo_total += (archivos[i].tamano/tasa_descarga_5g);
    }
}

int main (){

// Creacion de archivos
    Archivo a1 = {"Archivo 1",1.2};
    Archivo a2 = {"Archivo 2",0.4};
    Archivo a3 = {"Archivo 3",3.5};
    Archivo a4 = {"Archivo 4",2};
    Archivo a5 = {"Archivo 5",0.1};
// Creacion de vectores de archivos
    std::vector <Archivo> archivos1 = {a1, a2, a4};
    std::vector <Archivo> archivos2 = {a3, a5};
// Inicializacion de servidores con archivos
    Servidor s1 (archivos1), s2 (archivos2);
// Creacion de dispositivo 4G y 5G
    CuatroG d1;
    CincoG d2;
// Descarga de archivos desde servidores
    d1.descargarArchivos (s1);
    d1.descargarArchivos (s2);
    d2.descargarArchivos (s1);
    d2.descargarArchivos (s2);
// Estado de las descargas de cada dispositivo
    d1.estadoDescargas();
    d2.estadoDescargas();
    return 1;
}