#include "fighter.h"

// implementar constructores de clases acá
fighter::fighter(float hp, float attk) {
    this->hp = hp;
    this->attk = attk;
}

street::street(float hp, float attk) : fighter(hp, attk) {
    this->style = 0;
}

marvelo::marvelo(float hp, float attk) : fighter(hp, attk) {
    this->style = 1;
}

villain::villain(float hp, float attk) : fighter(hp, attk) {
    this->style = 2;
}


// implementar métodos de clases acá

int fighter::getStyle() {
    return this->style;
}

float fighter::getHp() {
    return this->hp;
}

float fighter::getAttk() {
    return this->attk;
}

void street::recibir_dmg(fighter *rival) {
    if (rival->getStyle() == 0) {
        this->hp -= rival->getAttk() * 1;
    } else if (rival->getStyle() == 1) {
        this->hp -= rival->getAttk() * 0.8;
    } else if (rival ->getStyle()== 2){
        this->hp -= rival->getAttk() * 1.3;
    }
}

void marvelo::recibir_dmg(fighter *rival) {
    if (rival->getStyle() == 0) {
        this->hp -= rival->getAttk() * 1.3;
    } else if (rival->getStyle() == 1) {
        this->hp -= rival->getAttk() * 1;
    } else if (rival ->getStyle()== 2){
        this->hp -= rival->getAttk() * 0.8;
    }
}

void villain::recibir_dmg(fighter *rival) {
    if (rival->getStyle() == 0) {
        this->hp -= rival->getAttk() * 0.9;
    } else if (rival->getStyle() == 1) {
        this->hp -= rival->getAttk() * 1.2;
    } else if (rival ->getStyle()== 2){
        this->hp -= rival->getAttk() * 1;
    }
}







int fight(fighter * u1, fighter * u2){
    cout << "Peleador de tipo " << u1->getStyle() << " vs. " << "Peleador de tipo " << u2->getStyle() << endl;
    cout<< "Peleador " << u1->getStyle() << ". HP: " << u1->getHp() << endl;
    cout<< "Peleador " << u2->getStyle() << ". HP: " << u2->getHp() << endl;

    while(u1->getHp() >0 && u2->getHp() > 0){
        u1->recibir_dmg(u2);
        u2->recibir_dmg(u1);
    }
    cout<< "Peleador " << u1->getStyle() << ". HP: " << u1->getHp() << endl;
    cout<< "Peleador " << u2->getStyle() << ". HP: " << u2->getHp() << endl;


    if(u1->getHp()<=0 && u2->getHp()<=0){
        return 0;
    }else if(u2->getHp()<=0){
        return 1;
    }else{
        return 2;
    }
}

void team_fight(vector<fighter *> f1, vector<fighter *> f2) {
    int e1=0, e2=0;
    for(int i=0; i<f1.size(); i++){
        int k=fight(f1[i], f2[i]);
        if(k!=0){
            if(k==1){
                e1++;
            }else if(k==2){
                e2++;
            }
            std::cout << "Gana Peleador Equipo " << k << std::endl;
        }else{
            std::cout << "Empate entre Peleadores" << std::endl;
        }
    }
    if(e1>e2){
        std::cout << "Gana Equipo 1" << std::endl;
    }else if(e2>e1){
        std::cout << "Gana Equipo 2" << std::endl;
    }else{
        std::cout << "Empate entre Equipos" << std::endl;
    }
}


int main(){

    vector<fighter *> team1 = {new street(100,7), new villain (110,6), new villain(100, 10)};
    vector<fighter *> team2 = {new marvelo(70, 13), new street(110,9), new villain(100,10)};

    team_fight(team1, team2);

    for(int i = 0; i < (int) team1.size(); i++){
        delete team1[i];
        delete team2[i];
    }

    team1.clear();
    team2.clear();

    return 0;
}