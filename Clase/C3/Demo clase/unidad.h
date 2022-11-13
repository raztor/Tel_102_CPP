#include<iostream>

class unidad{
	public:
		unidad();
		unidad(int hp);
		unidad(int hp, float attk);

		void recibir_dmg(float attk_rival);

		void setHp(int hp);
		void setAttk(float attk);

		int getHp();
		float getAttk();

	private:
		int hp;
		float attk;


};
