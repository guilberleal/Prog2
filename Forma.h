#ifndef PONTO_H
#define PONTO_H
#include "Ponto.h"
#include <string>

class Forma{
	friend class Ponto;
	private:
		Ponto ponto;
	public:
		//Construtores
		Forma();
		Forma(Ponto p);
		Forma(int x, int y);
		Forma(int x, int y, int z);
		//Acessors
		void showForma();
		Ponto getPonto();
		void setPonto(Ponto p);
		//Sobrecarga de operadores
		Forma operator+(Forma f);	
		
};
#endif
