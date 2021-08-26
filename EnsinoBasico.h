#ifndef ENSINOBASICO_H
#define ENSINOBASICO_H
#include "Analfabeto.h"
#include <iostream>
#include <string>

class EnsinoBasico: public Analfabeto{
	private:
		std::string nomeEscola;
	public:
		//construtor
		EnsinoBasico(std::string nome, int id,std::string nomeEscola);
		//gets
		std::string getNomeEscola();
		//sets
		void setNomeEscola(std::string nomeEscola);
		//show dados 
		void showDados();
		//Atualiza Salario
		void Salario();
};
#endif
