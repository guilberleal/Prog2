#ifndef ANALFABETO_H
#define ANALFABETO_h
#include <iostream>
#include <string>

class Analfabeto{
	private:
		std::string nome;
		int id;
		double renda;
	
	public:
		//construtor
		Analfabeto(std::string nome, int id);
		//gets
		std::string getNome();
		int getId();
		double getRenda();
		//sets
		void setNome(std::string nome);
		void setId(int id);
		void setRenda(double renda);
		void showDados();
		
		void Salario();
	
		
};
#endif
