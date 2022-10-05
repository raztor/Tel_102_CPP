//
// Created by Raztor on 05/10/2022.
//
#include <iostream>
const int repeticiones = 10;
const int M =5;
struct mesa {
    int personas ;
    int used ;
};
mesa * checkmesa(mesa *local){
    std::cout << "Mesas inicializadas" << std::endl;
    mesa *disponible;
    bool encontrado= false;
    for (int i=0; i<M; i++){
        std::cout << "Mesa "<<i<<". Personas: "<<local[i].personas<<". Usada: "<<local[i].used<<std::endl;
        if (local[i].used == 0 && encontrado == false){
            disponible = &local[i];
            encontrado = true;
        }
    }
    if (encontrado == false){
        return nullptr;
    }else if (encontrado== true){
        return disponible;
    }
}

void assignmesa(mesa *table){
    std::cout << "Ingrese el numero de personas: " << std::endl;
    std::cin >> table->personas;
    table->used = 1;
    std::cout<<"Asignando Mesa "<< &table<<std::endl;
}

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
int main (){
    mesa * local1 ;
    mesa *mesa_disponible;
    local1 = initMesas (); // dibujar este estado .
    for(int i=0; i<repeticiones; i++){
        mesa_disponible= checkmesa(local1);
        std::cout << "Mesa disponible: "<<mesa_disponible<<std::endl;
        assignmesa(mesa_disponible);
    }

    delete [] local1 ; // liberar memoria
    return 0;
}