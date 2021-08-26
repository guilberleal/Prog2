#include <iostream>
#include <string>
#include "EnsinoMedio.h"
using namespace std;

//inicializando construtor
EnsinoMedio::EnsinoMedio(string nome,int id,string nomeEscola,string escolaTermino)
	:EnsinoBasico(nome,id,nomeEscola){
		this->escolaTermino = escolaTermino;
}
//inicializando gets
string EnsinoMedio::getEscolaTermino(){
	return this->escolaTermino;
}
//inicializando sets
void EnsinoMedio::setEscolaTermino(string escolaTermino){
	this->escolaTermino = escolaTermino;
}
//inicializando showDados
void EnsinoMedio::showDados(){
	EnsinoBasico::showDados();
	cout<<"O nome da Escola que ele concluiu o ensino medio = "<<this->escolaTermino<<endl;
}

void EnsinoMedio::Salario(){
	double salario;
	
	salario = Analfabeto::getRenda() * 1.50;
	Analfabeto::setRenda(salario);
}

