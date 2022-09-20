//
// Created by raztor on 18-09-2022.
//

#include <iostream>

const int M =5;
struct mesa {
    int personas ;
    int used ;
};
mesa * initMesas (){
    int i;
    mesa * local ;
    local = new mesa [M ];
    for (i =0; i < M;i ++){
        local [i ]. personas =0;
        local [i ]. used =0;
    }
    return local ;
}

mesa * checkMesa(mesa *local){
    mesa *mesa;
    std::cout << "Mesas inicializadas" << std::endl;
    for (int i=0 ; i<M;i++){
        std::cout << "Mesa " << i << ". Personas: " << local[i].personas << ". Usada: " << local[i].used << std::endl;
        if (local[i].used == 0){
            mesa = &local[i];
        }
    }
    return mesa;
}
void assignMesa(mesa *table){
    std::cout << "Ingrese cantidad de personas: " << std::endl;
    std::cin >> table->personas;
    std::cout << "Asignando mesa " << table << std::endl;
    table->used = 1;
}
int main (){
    mesa * local1 ;
    local1 = initMesas (); // dibujar este estado .
    for(int i=0; i<M; i++) {
        mesa *mesa1 = checkMesa(local1);
        assignMesa(mesa1);
    }
    delete [] local1 ; // liberar memoria
    return 0;
}