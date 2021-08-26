#ifndef ENSINOSUPERIOR_H
#define ENSINOSUPERIOR_H
#include "EnsinoMedio.h"
#include <iostream>
#include <string>

class EnsinoSuperior: public EnsinoMedio{
	private:
		std::string universidade;
	public:
		//construtor
		EnsinoSuperior(std::string nome, int id,std::string nomeEscola,std::string escolaTermino,std::string universidade);
		//gets
		std::string getUniversidade();
		//sets
		void setUniversidade(std::string universidade);
		//show dados
		void showDados();
		
		void Salario();
};
#endif
