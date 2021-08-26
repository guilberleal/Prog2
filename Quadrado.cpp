#include "Quadrado.h"
#include <iostream>
using namespace std;
//Construtores
Quadrado::Quadrado()
	:Forma2D(){
		this->lado = 0;
		this->setArea(0);
	}
Quadrado::Quadrado(double lado, int x, int y)
	:Forma2D(0,x,y){
		this->setLado(lado);
		Ponto p(x,y);
		this->setPonto(p);
		this->setAreaQuad();
	}
Quadrado::Quadrado(double lado, Ponto p)
	:Forma2D(0,p){
		this->setLado(lado);
		this->setPonto(p);
		this->setAreaQuad();
	}
//Sobrecarga de operadores +|-
Quadrado Quadrado::operator+(Quadrado q){
	double lAux;
	Ponto pAux;
	pAux = this->getPonto() + q.getPonto();
	lAux = this->getLado() + q.getLado();
	Quadrado aux2(lAux, pAux);
	return aux2;
}
Quadrado Quadrado::operator-(Quadrado q){
	double lAux;
	Ponto pAux;
	pAux = this->getPonto() - q.getPonto();
	lAux = this->getLado() - q.getLado();
	Quadrado aux2(lAux, pAux);
	return aux2;
}
Quadrado Quadrado::operator+(double valor){
	double lAux;
	lAux = this->getLado() + valor;
	Quadrado aux2(lAux, this->getPonto());
	return aux2;
}
Quadrado Quadrado::operator-(double valor){
	double lAux;
	lAux = this->getLado() - valor;
	Quadrado aux2(lAux, this->getPonto());
	return aux2;
}
//Sobrecarga de operadores relacionais
bool Quadrado::operator<(Quadrado &q){
    if (this->getArea() < q.getArea()){
        return true;
    }else{
        return false;}
}
bool Quadrado::operator<=(Quadrado &q){
    if (this->getArea() <= q.getArea()){
        return true;
    }else{
        return false;}
}
bool Quadrado::operator>(Quadrado &q){
    if (this->getArea() > q.getArea()){
        return true;
    }else{
        return false;}
}
bool Quadrado::operator>=(Quadrado &q){
    if (this->getArea() >= q.getArea()){
        return true;
    }else{
        return false;}
}
bool Quadrado::operator==(Quadrado &q){
    if (this->getArea() == q.getArea()){
        return true;
    }else{
        return false;}
}
//QUAD-TRI
bool Quadrado::operator<(Triangulo &tri){
	if(this->getArea() < tri.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Quadrado::operator<=(Triangulo &tri){
	if(this->getArea() <= tri.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Quadrado::operator>(Triangulo &tri){
	if(this->getArea() > tri.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Quadrado::operator>=(Triangulo &tri){
	if(this->getArea() >= tri.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Quadrado::operator==(Triangulo &tri){
	if(this->getArea() == tri.getArea()){
		return true;
	}else{
		return false;
	}
}
//QUAD-CIRC
bool Quadrado::operator<(Circulo &c){
	if(this->getArea() < c.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Quadrado::operator<=(Circulo &c){
	if(this->getArea() <= c.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Quadrado::operator>(Circulo &c){
	if(this->getArea() > c.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Quadrado::operator>=(Circulo &c){
	if(this->getArea() >= c.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Quadrado::operator==(Circulo &c){
	if(this->getArea() == c.getArea()){
		return true;
	}else{
		return false;
	}
}
//Acessors
void Quadrado::setAreaQuad(){
	double aAux = (this->getLado() * this->getLado());
	if(aAux >= 0){
		this->setArea(aAux);
	}else{
		aAux = aAux * (-1);
		this->setArea(aAux);
	}
	this->setArea(aAux);
}
void Quadrado::setLado(double lado){
	this->lado = lado;
}
double Quadrado::getLado(){
	return this->lado;
}
ostream& operator<<(ostream& out, Quadrado &q){
	cout << "X: "<< q.getPonto().getX() << " Y: "<< q.getPonto().getY() << endl;
	cout << "O lado do quadrado e: " << q.getLado() << endl;
	cout << "A area do quadrado e: " << q.getArea() << endl;
}
