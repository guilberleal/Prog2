#include <iostream>
#include <string>
#include "Analfabeto.h"
using namespace std;

//inicializando o construtor
Analfabeto::Analfabeto(string nome, int id){
	this->nome = nome;
	this->id = id;
	this->renda = 1000;
}

//inicializando o get
string Analfabeto::getNome(){
	return this->nome;
}

int Analfabeto::getId(){
	return this->id;
}

double Analfabeto::getRenda(){
	return this->renda;
}
//inicializando os sets
void Analfabeto::setNome(string nome){
	this->nome = nome;
}
void Analfabeto::setId(int id){
	this->id = id;
}
void Analfabeto::setRenda(double renda){
	this->renda = renda;
}
//show dados

void Analfabeto::showDados(){
	cout<<"\nO nome = "<<this->nome<<endl;
	cout<<"O id = "<<this->id<<endl;
	cout<<"Renda = "<<this->renda<<endl;
	
}
void Analfabeto::Salario(){

}

