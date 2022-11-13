//
// Created by Raztor on 13/11/2022.
//

#ifndef TEL_102_CPP__CONTROL4_H
#define TEL_102_CPP__CONTROL4_H

#include <iostream>
#include <string>
#include <vector>

const float tasa_descarga_4g = 1;  // Gbps
const float tasa_descarga_5g = 20; // Gbps
struct Archivo{
    std::string nombre ;
    float tamano ;
};
class Servidor{
private:
    std::vector <Archivo> archivos ;
public:
    Servidor(std::vector <Archivo> & files);
    std::vector <Archivo> getArchivos ();

};
class Dispositivo{
public:
    Dispositivo();
    virtual void descargarArchivos(Servidor s) = 0;
    void estadoDescargas();
protected:
    std::vector <Archivo> archivos_total ;
    std::vector <Archivo> archivos ;
    float tiempo_total ;

};
class CuatroG : public Dispositivo{
public:
    CuatroG();
    void descargarArchivos(Servidor s);
private:
};

class CincoG : public Dispositivo{
public:
    void descargarArchivos(Servidor s);
    CincoG();
};


#endif //TEL_102_CPP__CONTROL4_H
