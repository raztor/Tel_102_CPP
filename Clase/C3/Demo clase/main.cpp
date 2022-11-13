#include "unidad.h"

unidad::unidad(): hp(-1), attk(-1.0){}

unidad::unidad(int hp): attk(-1.0){
	this->hp = hp;
}

unidad::unidad(int hp, float attk){
	this->hp = hp;
	this->attk = attk;
}

void unidad::recibir_dmg(float attk_rival){
	hp -= (int) attk_rival;
}

void unidad::setHp(int hp){
	this->hp = hp;

}

void unidad::setAttk(float attk){
	this->attk = attk;
}

int unidad::getHp(){
// es como si estuvieran DENTRO de la clase
	return hp;
}

float unidad::getAttk(){
	return attk;
}

int main(){

	int i;
	unidad U1(120, 7);
	std::cout << "U1 - Hp: " << U1.getHp() << " . Ataque: " << U1.getAttk() << std::endl;

	std::cout << "VERSUS" << std::endl;

	unidad U2;
	U2.setHp(140);
       	U2.setAttk(4);
	std::cout << "U2 - Hp: " << U2.getHp() << " . Ataque: " << U2.getAttk() << std::endl;

	for(i=1; U2.getHp()>0 && U1.getHp() > 0; i++){
		std::cout << i << " Attack" << std::endl;
		U1.recibir_dmg( U2.getAttk() );
		U2.recibir_dmg( U1.getAttk() );

		std::cout << "Resultados " << i << " Attack" << std::endl;
		std::cout << "U1 - Hp: " << U1.getHp() << " U2 - Hp: " << U2.getHp() << std::endl;
	}

	if (U1.getHp()<=0)
		std::cout << "U2 Wins" << std::endl;
	else if(U2.getHp()<=0)
		std::cout << "U1 Wins" << std::endl;

	return 0;
}
