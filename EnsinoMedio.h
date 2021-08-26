#ifndef ENSINOMEDIO_H
#define ENSINOMEDIO_H
#include "EnsinoBasico.h"
#include <iostream>
#include <string>

class EnsinoMedio: public EnsinoBasico{
	private:
		std::string escolaTermino;
	public:
		//construtor
		EnsinoMedio(std::string nome, int id,std::string nomeEscola,std::string escolaTermino);
		//gets
		std::string getEscolaTermino();
		//sets
		void setEscolaTermino(std::string escolaTermino);
		//showDados
		void showDados();
		void Salario();
};
#endif
