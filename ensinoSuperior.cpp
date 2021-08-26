#include <iostream>
#include <string>
#include "EnsinoSuperior.h"
using namespace std;

//inicializando construtor
EnsinoSuperior::EnsinoSuperior(string nome,int id,string nomeEscola,string escolaTermino,string universidade)
	:EnsinoMedio(nome,id,nomeEscola,escolaTermino){
		this->universidade = universidade;
}
//inicializando get
string EnsinoSuperior::getUniversidade(){
	return this->universidade;
}
//inicializando set
void EnsinoSuperior::setUniversidade(string universidade){
	this->universidade = universidade;
}
//show dados
void EnsinoSuperior::showDados(){
	EnsinoMedio::showDados();
	cout<<"O nome da Universidade que ele concluiu o ensino superior = "<<this->universidade<<endl;
}

void EnsinoSuperior::Salario(){
	double salario;
	
	salario = Analfabeto::getRenda() * 2.0;
	Analfabeto::setRenda(salario);
}

