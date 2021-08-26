#include "Circulo.h"
#include <iostream>
using namespace std;
//Construtores
Circulo::Circulo()
	:Forma2D(){
		this->raio = 0;
		this->setArea(0);
		this->setAreaCirc();
	}
Circulo::Circulo(double raio, int x, int y)
	:Forma2D(0,x, y){
		this->setRaio(raio);
		Ponto p(x,y);
		this->setPonto(p);
		this->setAreaCirc();
	}
Circulo::Circulo(double raio, Ponto ponto)
	:Forma2D(0,ponto){
		this->setRaio(raio);
		this->setPonto(ponto);
		this->setAreaCirc();
	}
//Sobrecarga de operadores
Circulo Circulo::operator+(Circulo c){
	double rAux;
	Ponto pAux;
	pAux = this->getPonto() + c.getPonto();
	rAux = this->getRaio() + c.getRaio();
	Circulo aux2(rAux, pAux);
	return aux2;
}
Circulo Circulo::operator-(Circulo c){
	double rAux;
	Ponto pAux;
	pAux = this->getPonto() - c.getPonto();
	rAux = this->getRaio() - c.getRaio();
	Circulo aux2(rAux, pAux);
	return aux2;
}
Circulo Circulo::operator+(double valor){
	double rAux;
	rAux = this->getRaio() + valor;
	Circulo aux2(rAux, this->getPonto());
	return aux2;
}
Circulo Circulo::operator-(double valor){
	double rAux;
	rAux = this->getRaio() - valor;
	Circulo aux2(rAux, this->getPonto());
	return aux2;
}
//Sobrecarga de operadores relacionais
bool Circulo::operator<(Circulo &c){
    if (this->getArea() < c.getArea()){
        return true;
    }else{
        return false;}
}
bool Circulo::operator<=(Circulo &c){
    if (this->getArea() <= c.getArea()){
        return true;
    }else{
        return false;}
}
bool Circulo::operator>(Circulo &c){
    if (this->getArea() > c.getArea()){
        return true;
    }else{
        return false;}
}
bool Circulo::operator>=(Circulo &c){
    if (this->getArea() >= c.getArea()){
        return true;
    }else{
        return false;}
}
bool Circulo::operator==(Circulo &c){
    if (this->getArea() == c.getArea()){
        return true;
    }else{
        return false;}
}
//CIRC-TRI
bool Circulo::operator<(Triangulo &t){
    if (this->getArea() < t.getArea()){
        return true;
    }else{
        return false;}
}
bool Circulo::operator<=(Triangulo &t){
    if (this->getArea() <= t.getArea()){
        return true;
    }else{
        return false;}
}
bool Circulo::operator>(Triangulo &t){
    if (this->getArea() > t.getArea()){
        return true;
    }else{
        return false;}
}
bool Circulo::operator>=(Triangulo &t){
    if (this->getArea() >= t.getArea()){
        return true;
    }else{
        return false;}
}
bool Circulo::operator==(Triangulo &t){
    if (this->getArea() == t.getArea()){
        return true;
    }else{
        return false;}
}
//CIRC-QUAD
bool Circulo::operator<(Quadrado &q){
    if (this->getArea() < q.getArea()){
        return true;
    }else{
        return false;}
}
bool Circulo::operator<=(Quadrado &q){
    if (this->getArea() <= q.getArea()){
        return true;
    }else{
        return false;}
}
bool Circulo::operator>(Quadrado &q){
    if (this->getArea() > q.getArea()){
        return true;
    }else{
        return false;}
}
bool Circulo::operator>=(Quadrado &q){
    if (this->getArea() >= q.getArea()){
        return true;
    }else{
        return false;}
}
bool Circulo::operator==(Quadrado &q){
    if (this->getArea() == q.getArea()){
        return true;
    }else{
        return false;}
}
//Acessors
void Circulo::setRaio(double raio){
	this->raio = raio;
}
double Circulo::getRaio(){
	return this->raio;
}
void Circulo::setAreaCirc(){
	double aAux;
	aAux = 3.14 * (this->getRaio() * this->getRaio());
	if(aAux >= 0){
		this->setArea(aAux);
	}else{
		aAux = aAux * (-1);
		this->setArea(aAux);
	}
	this->setArea(aAux);
}
std::ostream& operator<<(std::ostream& out, Circulo &c){
	cout << "X: "<< c.getPonto().getX() << " Y: "<< c.getPonto().getY() << endl;
	cout << "O raio do circulo e: " << c.getRaio() << endl;
	cout << "A area do circulo e: " << c.getArea() << endl;
}
