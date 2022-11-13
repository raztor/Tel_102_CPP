//
// Created by Raztor on 27/10/2022.
//

#ifndef TEL_102_CPP__KOMBATE_MORTAL_H
#define TEL_102_CPP__KOMBATE_MORTAL_H
#include<iostream>
#include<cstring>

using namespace std;

class kombatant{
public:
    kombatant();
    void setHP(float hp);
    void setPower(float power);
    void setDefense(float defense);

    float getHP();
    int getBlock();
    int getGauge();

    float attack();
    float special();
    void fatality();

private:
    float hp;
    float power;
    float defense;
    int gauge;

};
#endif //TEL_102_CPP__KOMBATE_MORTAL_H
