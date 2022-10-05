//
// Created by Raztor on 05-10-22.
//
# include <iostream>
const int team_size = 5;
struct team {
int players [ team_size ];
int pukamon [ team_size ];
};

void initTeam ( team * le_team ){
int i ;
for ( i =0; i < team_size ; i ++){
(* le_team ). players [ i ] = -1;
le_team -> pukamon [ i ] = -1;
}
}
void pickUp ( team * le_team ){
    std::cout<<"Escogiendo equipo..."<<std::endl;
    for(int i=0;i<team_size; i++){
        std::cout<<"Ingrese su id de usuario PukaLOL: ";
        std::cin>>le_team->players[i];
        std::cout<<"Ingrese el id de su Pukamon escogido: ";
        std::cin>>le_team->pukamon[i];
    }
    std::cout<<"Equipo listo..."<<std::endl;
}

void printTeam ( team * le_team , const char * nom ){
    std::cout<<"El equipo "<<nom<<" esta conformado por: "<<std::endl;
    for(int i=0;i<team_size; i++){
        std::cout<<"Player: "<<le_team->players[i]<<". Pukamon: "<<le_team->pukamon[i]<<std::endl;
    }
}
int main (){
team * team1 = new team ;
initTeam ( team1 ); // dibujar este momento
team * team2 = new team ;
initTeam ( team2 );
pickUp ( team1 ); // descomentar para probar
pickUp ( team2 );
printTeam ( team1 , " OverHeat "); // descomentar para probar
printTeam ( team2 , " Elite Five ");
delete team1 ;
delete team2 ;
return 0;
}
///Bono: La imagen explica que el personaje es un puntero (int *)y que esta apuntando a un dato de tipo int.
