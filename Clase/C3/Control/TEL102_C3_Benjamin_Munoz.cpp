//
// Created by Raztor on 27/10/2022.
//

#include "kombate_mortal.h"

kombatant::kombatant() {
    hp = 100;
    power = 10;
    defense = 10;
    gauge = 0;
}

void kombatant::setHP(float hp) {
    this->hp = hp;
}

void kombatant::setPower(float power) {
    this->power = power;
}

void kombatant::setDefense(float defense) {
    this->defense = defense;
}

float kombatant::getHP() {
    return hp;
}

int kombatant::getBlock() {
    return power/defense;
}

int kombatant::getGauge() {
    return gauge;
}

float kombatant::attack() {
    return power*(defense/100);
}

float kombatant::special() {
    return power*(defense/hp);
}

void kombatant::fatality() {
    // Movimiento
}


void kombate_mortal(kombatant &p1, kombatant &p2){

    int block1=0,block2=0;
    int gauge1=p1.getGauge(),gauge2=p1.getGauge();

    while(p1.getHP() > 0 && p2.getHP() > 0){
        if(block1-1==p1.getBlock() && block2-1!=p2.getBlock()){
            if(gauge1 == 100){
                p1.fatality();
                p2.setHP(0);
                // No entiendo si debo inventar un texto de fatality o algo?
                std::cout << "FATALITY!!!!" << std::endl;

            }else if (gauge1 >= 50){
                p1.attack();
                p2.setHP(p2.getHP()-p1.attack());
                gauge1+=5;
                std::cout << "kung_leo" << " Ataca normal"<< std::endl;

            }else if (gauge1 >= 0 && gauge1 < 50){
                p1.special();
                p2.setHP(p2.getHP()-p1.special());
                gauge1+=10;
                std::cout << "kung_leo" << " Ataca especial"<< std::endl;
            }
            block1=0;
            block2+=1;
            std::cout << "kung_leo" << " bloquea!" << std::endl;

        }else if(block2-1==p2.getBlock() && block1-1!=p1.getBlock()){
            if(gauge2 == 100){
                p2.fatality();
                p1.setHP(0);
                std::cout << "FATALITY!!!!" << std::endl;
            }else if (gauge2 >= 50){
                p2.attack();
                p1.setHP(p1.getHP()-p2.attack());
                gauge2+=5;
                std::cout << "luis_kang" << " Ataca normal"<< std::endl;
            }else if (gauge2 >= 0 && gauge2 < 50){
                p2.special();
                p1.setHP(p1.getHP()-p2.special());
                gauge2+=10;
                std::cout << "luis_kang" << " Ataca especial"<< std::endl;
            }
            block2=0;
            block1+=1;
            std::cout << "luis_kang" << " bloquea!" << std::endl;
        }else{
            if(gauge1 == 100){
                p1.fatality();
                p2.setHP(0);
                // No entiendo si debo inventar un texto de fatality o algo?
                std::cout << "FATALITY!!!!" << std::endl;

            }else if (gauge1 >= 50){
                p1.attack();
                p2.setHP(p2.getHP()-p1.attack());
                gauge1+=5;
                std::cout << "kung_leo" << " Ataca normal"<< std::endl;

            }else if (gauge1 >= 0 && gauge1 < 50){
                p1.special();
                p2.setHP(p2.getHP()-p1.special());
                gauge1+=10;
                std::cout << "kung_leo" << " Ataca especial"<< std::endl;
            }

            if(gauge2 == 100){
                p2.fatality();
                p1.setHP(0);
                std::cout << "FATALITY!!!!" << std::endl;
            }else if (gauge2 >= 50){
                p2.attack();
                p1.setHP(p1.getHP()-p2.attack());
                gauge2+=5;
                std::cout << "luis_kang" << " Ataca normal"<< std::endl;
            }else if (gauge2 >= 0 && gauge2 < 50){
                p2.special();
                p1.setHP(p1.getHP()-p2.special());
                gauge2+=10;
                std::cout << "luis_kang" << " Ataca especial"<< std::endl;
            }
            block1+=1;
            block2+=1;
        }
        std::cout << "kung_leo" << " HP: " << p1.getHP() <<". "<< "luis_kang" << " HP: " << p2.getHP() << std::endl;

    }
    if (p1.getHP() > p2.getHP()){
        std::cout << "kung_leo" << " Gana!" << std::endl;
    }else{
        std::cout << "luis_kang" << " Gana!" << std::endl;
    }

}

int main(){
    kombatant kung_leo;
    kombatant luis_kang;

    kung_leo.setPower(25);
    kung_leo.setDefense(7);

    luis_kang.setPower(23);
    luis_kang.setDefense(9);

    cout << "Final Round! FIGHT!" << endl;
    kombate_mortal(kung_leo, luis_kang);

    return 0;
}