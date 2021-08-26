#include <iostream>
#include <string>
#include "EnsinoBasico.h"
using namespace std;

//inicializando construtor
EnsinoBasico::EnsinoBasico(string nome,int id,string nomeEscola)
	:Analfabeto(nome,id){
		this->nomeEscola = nomeEscola;
}

//inicializando gets
string EnsinoBasico::getNomeEscola(){
	return this->nomeEscola;
}
//inicializando sets
void EnsinoBasico::setNomeEscola(string nomeEscola){
	this->nomeEscola = nomeEscola;
}
//show Dados
void EnsinoBasico::showDados(){
	Analfabeto::showDados();
	cout<<"O nome da Escola que ele estudou = "<<this->nomeEscola<<endl;
}
void EnsinoBasico::Salario(){
	double salario;
	
	salario = Analfabeto::getRenda() * 1.10;
	Analfabeto::setRenda(salario);
}

