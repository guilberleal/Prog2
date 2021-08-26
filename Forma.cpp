#include "Forma.h"
#include <iostream>
using namespace std;

Forma::Forma(){
	Ponto p;
	this->ponto = p;
}
Forma::Forma(Ponto p){
	this->ponto = p;
}
Forma::Forma(int x, int y){
	Ponto p(x,y);
	this->ponto = p;
}
Forma::Forma(int x, int y, int z){
	Ponto p(x,y,z);
	this->ponto = p;
}
Ponto Forma::getPonto(){
	return this->ponto;
}
void Forma::setPonto(Ponto p){
	this->ponto = p;
}
Forma Forma::operator+(Forma f){
	Ponto aux;
	aux = this->getPonto() + f.getPonto();
	Forma aux2(aux.getX(),aux.getY());
	return aux2;
}
void Forma::showForma(){
	cout << "\n Localizacao - " << endl; 
	cout << "X - "<< this->ponto.getX() << endl;
	cout << "Y - "<< this->ponto.getY() << endl;
}
