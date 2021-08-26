#include "Cubo.h"
#include <iostream>
using namespace std;
//CONSTRUTORES
Cubo::Cubo()
	:Forma3D(){
		this->setAresta(0);
		this->setVolumeCubo();
	}
Cubo::Cubo(double aresta, int x, int y, int z)
	:Forma3D(0,x,y,z){
		this->setAresta(aresta);
		Ponto p(x,y,z);
		this->setPonto(p);
		this->setVolumeCubo();
	}

Cubo::Cubo(double aresta, Ponto p)
	:Forma3D(0,p){
		this->setAresta(aresta);
		this->setPonto(p);
		this->setVolumeCubo();
	}
//Sobrecarga de operadores
Cubo Cubo::operator+(Cubo &c){
	double aAux;
	Ponto pAux;
	pAux = this->getPonto() + c.getPonto();
	aAux = this->getVolume() + c.getVolume();
	Cubo cAux(aAux,pAux);
	return cAux;
}	
Cubo Cubo::operator-(Cubo &c){
	double aAux;
	Ponto pAux;
	pAux = this->getPonto() - c.getPonto();
	aAux = this->getVolume() - c.getVolume();
	Cubo cAux(aAux,pAux);
	return cAux;
}
Cubo Cubo::operator+(double valor){
	double aAux;
	aAux = this->aresta + valor;
	Cubo cAux(aAux, this->getPonto());
}
Cubo Cubo::operator-(double valor){
	double aAux;
	aAux = this->aresta - valor;
	Cubo cAux(aAux, this->getPonto());
}
//Sobrecarga de operadores relacinais
bool Cubo::operator<(Cubo &c){
	if(this->getVolume() < c.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Cubo::operator<=(Cubo &c){
	if(this->getVolume() <= c.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Cubo::operator>(Cubo &c){
	if(this->getVolume() > c.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Cubo::operator>=(Cubo &c){
	if(this->getVolume() >= c.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Cubo::operator==(Cubo &c){
	if(this->getVolume() == c.getVolume()){
		return true;
	}else{
		return false;
	}
}
//CUBO-TET
bool Cubo::operator<(Tetaedro &t){
	if(this->getVolume() < t.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Cubo::operator<=(Tetaedro &t){
	if(this->getVolume() <= t.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Cubo::operator>(Tetaedro &t){
	if(this->getVolume() > t.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Cubo::operator>=(Tetaedro &t){
	if(this->getVolume() >= t.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Cubo::operator==(Tetaedro &t){
	if(this->getVolume() == t.getVolume()){
		return true;
	}else{
		return false;
	}
}
//TET-ESF
bool Cubo::operator<(Esfera &e){
	if(this->getVolume() < e.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Cubo::operator<=(Esfera &e){
	if(this->getVolume() <= e.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Cubo::operator>(Esfera &e){
	if(this->getVolume() > e.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Cubo::operator>=(Esfera &e){
	if(this->getVolume() >= e.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Cubo::operator==(Esfera &e){
	if(this->getVolume() == e.getVolume()){
		return true;
	}else{
		return false;
	}
}
//acessors
void Cubo::setAresta(double aresta){
	this->aresta = aresta;
}
double Cubo::getAresta(){
	return this->aresta;
}
void Cubo::setVolumeCubo(){
	double vAux = this->getAresta();
	vAux = (vAux*vAux*vAux);
	this->setVolume(vAux);
}
std::ostream& operator<<(std::ostream& out, Cubo&c){
	cout << "Localizacao - " << endl;
	cout << "X: " << c.getPonto().getX() << endl;
	cout << "Y: " << c.getPonto().getY() << endl;
	cout << "Z: " << c.getPonto().getZ() << endl;
	cout << "Valor da aresta - " << c.getAresta() << endl;
	cout << "Volume do cubo - " << c.getVolume() << endl;
}
