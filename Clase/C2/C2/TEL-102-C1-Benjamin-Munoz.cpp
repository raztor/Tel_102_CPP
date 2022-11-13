//
// Created by Raztor on 06/10/2022.
//
# include <iostream>
# include <cstring>
int size = 3;
typedef struct pukamon {
    char nombre [21];
    int id ;
} pkmn ;
pkmn * initParty (){
    pkmn * le_party = new pkmn [ size ];
    int i ;
    for ( i =0; i < size ; i ++){
        strcpy ( le_party [ i ]. nombre , " MissingNo ");
        le_party [ i ]. id = -1;
    }
    return le_party ;
}
void chooseParty ( pkmn * le_party ){
    int i ;
    for ( i =0; i < size ; i ++){
        std::cout << " Ingrese el nombre del Pukamon : " ;
        std::cin >> le_party [ i ]. nombre ;
        std::cout << " Ingrese el id del Pukamon : " ;
        std::cin >> le_party [ i ]. id ;
    }
    std::cout << std::endl;



}
void printParty ( pkmn * le_party , const char * trainer ){
    int i ;
    std::cout << " El equipo de " << trainer << " es : " << std::endl;
    for ( i =0; i < size ; i ++){
        std::cout << " Pukamon : " << le_party [ i ]. nombre << " id : " << le_party [ i ]. id << std::endl;
    }
    std::cout << std::endl;

}
int main (){
    pkmn * party1 = NULL ;
    pkmn * party2 = NULL ;
    party1 = initParty (); // dibujar este momento en memoria .
    party2 = initParty ();
    chooseParty ( party1 ); // descomente y pruebe
    chooseParty ( party2 );
    printParty ( party1 , " Ash Ketchum "); // descomente y pruebe
    printParty ( party2 , " Gary Oak ");
    delete [] party1 ;
    delete [] party2 ;
    return 0;
}
///Se ve como se crean dos punteros en la memoria Heap, el A y el B, luego se les asigna al puntero A el puntero B y vice versa