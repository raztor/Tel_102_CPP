

#ifndef TEL_102_CPP__TEL102_C4_BENJAMIN_MUNOZ_H
#define TEL_102_CPP__TEL102_C4_BENJAMIN_MUNOZ_H
#include<iostream>
#include<vector>

using namespace std;

class fighter{ //clase virtual, no puede crear objetos de este tipo, solo de sus herederos.
public:
    fighter(float hp, float attk);
    virtual void recibir_dmg(fighter * rival) = 0; //metodo virtual que
    //solamente deben implementarse en los hijos y no en la clase padre

    int getStyle();
    float getHp();
    float getAttk();

protected:
    int style;
    float hp;
    float attk;


};

class street: public fighter{
public:
    street(float hp, float attk);
    void recibir_dmg(fighter * rival);
};

class marvelo: public fighter{
public:
    marvelo(float hp, float attk);
    void recibir_dmg(fighter * rival);
};

class villain: public fighter{
public:
    villain(float hp, float attk);
    void recibir_dmg(fighter * rival);

};


#endif //TEL_102_CPP__TEL102_C4_BENJAMIN_MUNOZ_H
