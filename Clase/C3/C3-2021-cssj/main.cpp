//
// Created by Raztor on 20/10/2022.
//

#include "control3.h"

int Telefono::getSaldo() {
    int saldo_actual=prepago-saliente;
    return saldo_actual;
}

void Telefono::reset() {
    ocupado = false;
    discando = false;
}

bool Telefono::discar() {
    if(getSaldo() && !ocupado){
        return true;
    }else{
        return false;
    }
}

bool Telefono::recibir() {
    if(!ocupado){
        return true;
    } else{
        return false;
    }
}

void Telefono::finalizar(int tiempo) {
    saliente+=tiempo;

}

float Telefono::getPromedio() {

}


void printStatus(Telefono *list[]){
    for (int i = 0; i < TELEFONOS; ++i){
        int temp_saldo = list[i]->getSaldo();
        std::cout<<"Telefono"<<i<<"saldo = "<<temp_saldo<<" Promedio = "<<list[i]->getPromedio();
    }
}


int main (){
    Telefono * list [TELEFONOS];
    list [0]= new Telefono (100);
    list [1]= new Telefono (50);
    list [2]= new Telefono (35);
    list [3]= new Telefono (67);
    list [4]= new Telefono (32);
    Llamada call_1 (1 , list [0] , list [1]);
    Llamada call_2 (2 , list [1] , list [2]);
    Llamada call_3 (3 , list [2] , list [0]);
    Llamada call_4 (4 , list [4] , list [3]);
    Llamada call_5 (5 , list [4] , list [0]);
    Llamada call_6 (6 , list [0] , list [2]);
    Llamada call_7 (7 , list [3] , list [0]);
    Llamada call_8 (8 , list [2] , list [3]);
    Llamada call_9 (9 , list [1] , list [2]);
    call_1 . iniciar ();
    call_2 . iniciar ();
    call_1 . finalizar (50);
    call_2 . iniciar ();
    call_2 . finalizar (40);
    call_3 . iniciar ();
    call_3 . finalizar (40);
    call_4 . iniciar ();
    call_5 . iniciar ();
    call_4 . finalizar (30);
    call_5 . iniciar ();
    call_5 . finalizar (20);
    call_6 . iniciar ();
    call_7 . iniciar ();
    call_6 . finalizar (20);
    call_8 . iniciar ();
    call_9 . iniciar ();
    call_9 . finalizar (10);
    printStatus (list);
    for ( int i =0; i < TELEFONOS ; i ++)
        delete list [i ];
    return 0;
}