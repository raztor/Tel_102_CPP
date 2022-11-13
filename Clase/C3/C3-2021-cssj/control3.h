//
// Created by Raztor on 20/10/2022.
//

#ifndef TEL_102_CPP__CONTROL3_H
#define TEL_102_CPP__CONTROL3_H

#include <iostream>
#define TELEFONOS 5
using namespace std;
class Telefono{
public:
    Telefono (int prepago): prepago(prepago),ocupado(false), discando(false),
    llamadas(0), entrante(0), saliente(0){}

    int getSaldo ();
    void reset ();
    bool discar ();
    bool recibir ();
    void finalizar (int tiempo);
    float getPromedio ();
private:
    bool ocupado;
    bool discando;
    int prepago;
    int llamadas;
    int entrante;
    int saliente;
};
class Llamada{
public:
    Llamada(int codigo, Telefono * origen, Telefono * destino);
    void iniciar();
    void finalizar(int tiempo);
private:
    Telefono * origen;
    Telefono * destino;
    int codigo;
};

#endif //TEL_102_CPP__CONTROL3_H
