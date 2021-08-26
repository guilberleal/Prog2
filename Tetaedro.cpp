#include "Tetaedro.h"
#include <iostream>
using namespace std;

Tetaedro::Tetaedro()
	:Forma3D(){
		this->setAresta(0);
		this->setVolumeTet();
	}
Tetaedro::Tetaedro(double aresta, Ponto p)
	:Forma3D(0,p){
		this->setAresta(aresta);
		this->setVolumeTet();
	}
Tetaedro::Tetaedro(double aresta, int x, int y, int z)
	:Forma3D(0,x,y,x){
		this->setAresta(aresta);
		Ponto p(x,y,z);
		this->setPonto(p);
		this->setVolumeTet();
	}
//Sobrecarga de operadores ADIC e SUB
Tetaedro Tetaedro::operator+(Tetaedro &t){
	double aAux;
	Ponto pAux;
	pAux = this->getPonto() + t.getPonto();
	aAux= this->getAresta() + t.getAresta();
	Tetaedro tAux(aAux,pAux);
	return tAux;
}
Tetaedro Tetaedro::operator-(Tetaedro &t){
	double aAux;
	Ponto pAux;
	pAux = this->getPonto() - t.getPonto();
	aAux= this->getAresta() - t.getAresta();
	Tetaedro tAux(aAux,pAux);
	return tAux;
}
Tetaedro Tetaedro::operator+(double valor){
	double aAux;
	aAux = this->getAresta() + valor;
	Tetaedro tAux(aAux, this->getPonto());
	return tAux;
}
Tetaedro Tetaedro::operator-(double valor){
	double aAux;
	aAux = this->getAresta() - valor;
	Tetaedro tAux(aAux, this->getPonto());
	return tAux;
}
//Sobrecarga de operadores relacionais
bool Tetaedro::operator<(Tetaedro &t){
	if(this->getVolume() < t.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Tetaedro::operator<=(Tetaedro &t){
	if(this->getVolume() <= t.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Tetaedro::operator>(Tetaedro &t){
	if(this->getVolume() > t.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Tetaedro::operator>=(Tetaedro &t){
	if(this->getVolume() >= t.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Tetaedro::operator==(Tetaedro &t){
	if(this->getVolume() == t.getVolume()){
		return true;
	}else{
		return false;
	}
}
//Sobrecarga de operadores relacionais
//TET-ESF
bool Tetaedro::operator<(Esfera &e){
	if(this->getVolume() < e.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Tetaedro::operator<=(Esfera &e){
	if(this->getVolume() <= e.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Tetaedro::operator>(Esfera &e){
	if(this->getVolume() > e.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Tetaedro::operator>=(Esfera &e){
	if(this->getVolume() >= e.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Tetaedro::operator==(Esfera &e){
	if(this->getVolume() == e.getVolume()){
		return true;
	}else{
		return false;
	}
}
//TET-CUBO
bool Tetaedro::operator<(Cubo &c){
	if(this->getVolume() < c.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Tetaedro::operator<=(Cubo &c){
	if(this->getVolume() <= c.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Tetaedro::operator>(Cubo &c){
	if(this->getVolume() > c.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Tetaedro::operator>=(Cubo &c){
	if(this->getVolume() >= c.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Tetaedro::operator==(Cubo &c){
	if(this->getVolume() == c.getVolume()){
		return true;
	}else{
		return false;
	}
}
//Acessors
void Tetaedro::setAresta(double aresta){
	this->aresta = aresta;
}
double Tetaedro::getAresta(){
	return this->aresta;
}
void Tetaedro::setVolumeTet(){
	double Vol, arestaTet = this->getAresta();
	arestaTet = (arestaTet*arestaTet*arestaTet);
	Vol = (arestaTet * 1.41) / 12;
	this->setVolume(Vol); 	
}

std::ostream& operator<<(std::ostream& out, Tetaedro &t){
	cout << "Localizacao - " << endl;
	cout << "X: " << t.getPonto().getX() << endl;
	cout << "Y: " << t.getPonto().getY() << endl;
	cout << "Z: " << t.getPonto().getZ() << endl;
	cout << "Valor da aresta - " << t.getAresta() << endl;
	cout << "Volume do tetaedro - " << t.getVolume() << endl;
}

void Tetaedro::showDadosTet(){
	cout << "Localizacao - " << endl;
	cout << "X: " << this->getPonto().getX() << endl;
	cout << "Y: " << this->getPonto().getY() << endl;
	cout << "Z: " << this->getPonto().getZ() << endl;
	cout << "Valor da aresta - " << this->getAresta() << endl;
	cout << "Volume do tetaedro - " << this->getVolume() << endl;
}
