#include "Esfera.h"
#include <iostream>
using namespace std;
Esfera::Esfera()
	:Forma3D(){
		this->setRaio(0);
}
Esfera::Esfera(double raio, Ponto p)
	:Forma3D(0,p){
		this->setRaio(raio);
		this->setVolumeEsfera();
	}
Esfera::Esfera(double raio, int x, int y, int z)
	:Forma3D(0,x,y,z){
		this->setRaio(raio);
		Ponto p(x,y,z);
		this->setPonto(p);
		this->setVolumeEsfera();
	}
//SObrecarga de operadores ADICAO E SUBTRACAO
Esfera Esfera::operator+(Esfera &e){
	double rAux;
	Ponto pAux;
	pAux = this->getPonto() + e.getPonto();
	rAux= this->getRaio() + e.getRaio();
	Esfera eAux(rAux,pAux);
	return eAux; 
}
Esfera Esfera::operator-(Esfera &e){
	double rAux;
	Ponto pAux;
	pAux = this->getPonto() - e.getPonto();
	rAux= this->getRaio() - e.getRaio();
	Esfera eAux(rAux,pAux);
	return eAux; 
}
//Sobrecarga de operadores relacionais
bool Esfera::operator<(Esfera &e){
	if(this->getVolume() < e.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Esfera::operator<=(Esfera &e){
	if(this->getVolume() <= e.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Esfera::operator>(Esfera &e){
	if(this->getVolume() > e.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Esfera::operator>=(Esfera &e){
	if(this->getVolume() >= e.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Esfera::operator==(Esfera &e){
	if(this->getVolume() == e.getVolume()){
		return true;
	}else{
		return false;
	}
}
//SOBRECARGA DE OPERADORES RELACIONAIS
//ESFERA-TET
bool Esfera::operator<(Tetaedro &t){
	if(this->getVolume() < t.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Esfera::operator<=(Tetaedro &t){
	if(this->getVolume() <= t.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Esfera::operator>(Tetaedro &t){
	if(this->getVolume() > t.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Esfera::operator>=(Tetaedro &t){
	if(this->getVolume() >= t.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Esfera::operator==(Tetaedro &t){
	if(this->getVolume() == t.getVolume()){
		return true;
	}else{
		return false;
	}
}
//ESF-CUBO
bool Esfera::operator<(Cubo &c){
	if(this->getVolume() < c.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Esfera::operator<=(Cubo &c){
	if(this->getVolume() <= c.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Esfera::operator>(Cubo &c){
	if(this->getVolume() > c.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Esfera::operator>=(Cubo &c){
	if(this->getVolume() >= c.getVolume()){
		return true;
	}else{
		return false;
	}
}
bool Esfera::operator==(Cubo &c){
	if(this->getVolume() == c.getVolume()){
		return true;
	}else{
		return false;
	}
}
//acessors
void Esfera::setRaio(double raio){
	this->raio = raio;
}
double Esfera::getRaio(){
	return this->raio;
}
void Esfera::setVolumeEsfera(){
	double Vol, raioCubo = this->getRaio();
	raioCubo = (raioCubo*raioCubo*raioCubo);
	Vol = (4*3.14*(raioCubo))/3;
	this->setVolume(Vol);
}
std::ostream& operator<<(std::ostream& out, Esfera &e){
	cout << "Localizacao - " << endl;
	cout << "X: " << e.getPonto().getX() << endl;
	cout << "Y: " << e.getPonto().getY() << endl;
	cout << "Z: " << e.getPonto().getZ() << endl;
	cout << "Valor do raio - " << e.getRaio() << endl;
	cout << "Volume da esfera - " << e.getVolume() << endl;
}
