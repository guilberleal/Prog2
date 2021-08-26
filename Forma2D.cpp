#include "Forma2D.h"
#include <iostream>
using namespace std;
Forma2D::Forma2D()
	: Forma(){
	this->area = 0;
}
Forma2D::Forma2D(double area,Ponto p)
	:Forma(p){
		this->area = area;
		this->setPonto(p);
	}
Forma2D::Forma2D(double area, int x, int y)
	:Forma(x,y){
		this->setArea(area);
		Ponto p(x,y);
		this->setPonto(p);
	}
void Forma2D::setArea(double area){
	this->area = area;
}
double Forma2D::getArea(){
	return this->area;
}
Forma2D Forma2D::operator+(Forma2D f){
	double aux;
	Ponto pAux;
	pAux = this->getPonto() + f.getPonto();
	aux = this->getArea() + f.getArea();
	Forma2D aux2(aux, pAux);
	return aux2;
}

bool Forma2D::operator<(Forma2D &f){
	if(this->area < f.getArea()){
		return true;
	}else{
		return false;
	}
}
double Forma2D::maiorForma2D(Forma2D &f2){
	if(this->getArea() < f2.getArea()){
		return this->getArea();
	}else{
		return f2.getArea();
	}
}
void Forma2D::setTipoForma(std::string tipoForma){
	this->tipoForma = tipoForma;
}
std::string Forma2D::getTipoForma(){
	return this->tipoForma;
}
void Forma2D::showForma2D() {
	cout << "\n Localizacao - " << endl; 
	cout << "X - "<< this->getPonto().getX() << endl;
	cout << "Y - "<< this->getPonto().getY() << endl;
	cout << "A area da forma 2D e: " << this->getArea() << endl;
	cout << "Essa forma é um " << this->getTipoForma() << endl;		
}
