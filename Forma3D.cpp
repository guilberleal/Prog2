#include "Forma3D.h"
#include <iostream>
using namespace std;
Forma3D::Forma3D()
	: Forma(){
	this->volume = 0;
}
Forma3D::Forma3D(double volume,Ponto p)
	:Forma(p){
		this->setVolume(volume);
		this->setPonto(p);
	}
Forma3D::Forma3D(double volume, int x, int y, int z)
	:Forma(x,y,z){
		this->setVolume(volume);
		Ponto p(x,y,z);
		this->setPonto(p);
	}
void Forma3D::setVolume(double volume){
	this->volume = volume;
}
double Forma3D::getVolume(){
	return this->volume;
}
Forma3D Forma3D::operator+(Forma3D &f){
	double aux;
	Ponto pAux;
	pAux = this->getPonto() + f.getPonto();
	aux = this->getVolume() + f.getVolume();
	Forma3D aux2(aux, pAux);
	return aux2;
}
bool Forma3D::operator<(Forma3D &f){
	if(this->volume < f.getVolume()){
		return true;
	}else{
		return false;
	}
}

void Forma3D::showForma3D() {
	cout << "\n Localizacao - " << endl; 
	cout << "X - "<< this->getPonto().getX() << endl;
	cout << "Y - "<< this->getPonto().getY() << endl;
	cout << "A area da forma 2D e: " << this->getVolume() << endl;		
}
