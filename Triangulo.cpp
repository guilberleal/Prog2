#include "Triangulo.h"
#include <iostream>
using namespace std;
//Construtores
Triangulo::Triangulo()
	:Forma2D(){
		this->setBase(0);
		this->setAltura(0);
		this->setAreaTri();
}
Triangulo::Triangulo(double base, double altura, Ponto p)
	:Forma2D(0,p){
		this->setTipoForma("Triangulo");
		this->setBase(base);
		this->setAltura(altura);
		this->setPonto(p);
		this->setAreaTri();
	}
Triangulo::Triangulo(double base, double altura, int x, int y)
	:Forma2D(0,x,y){
		this->setTipoForma("Triangulo");
		this->setBase(base);
		this->setAltura(altura);
		Ponto p(x,y);
		this->setPonto(p);
		this->setAreaTri();
}
//Sobrecarga de operadores
Triangulo Triangulo::operator+(Triangulo t){
	double bAux;
	double aAux;
	bAux = this->getBase() + t.getBase();
	aAux = this->getAltura() + t.getAltura();
	Triangulo aux2(bAux,aAux,this->getPonto());
	return aux2;
}
Triangulo Triangulo::operator-(Triangulo t){
	double bAux;
	double aAux;
	Ponto pAux;
	pAux = this->getPonto() - t.getPonto();
	bAux = this->getBase() - t.getBase();
	aAux = this->getAltura() - t.getAltura();
	Triangulo aux2(bAux,aAux,this->getPonto());
	return aux2;
}
Triangulo Triangulo::operator+(double valor){
	double bAux;
	double aAux;
	bAux = this->getBase() + valor;
	aAux = this->getAltura() + valor;
	Triangulo aux2(bAux,aAux,this->getPonto());
	return aux2;
}
Triangulo Triangulo::operator-(double valor){
	double bAux;
	double aAux;
	bAux = this->getBase() - valor;
	aAux = this->getAltura() - valor; 
	Triangulo aux2(bAux,aAux,this->getPonto());
	return aux2;
}
//Sobrecarga de operadores relacionais
//ENTRE O MESMO OBJETO
bool Triangulo::operator<(Triangulo &t){
    if (t.getArea() < this->getArea()){
        return true;
    }else{
        return false;}
}
bool Triangulo::operator<=(Triangulo &t){
    if (this->getArea() <= t.getArea()){
        return true;
    }else{
        return false;}
}
bool Triangulo::operator>(Triangulo &t){
    if (this->getArea() > t.getArea()){
        return true;
    }else{
        return false;}
}
bool Triangulo::operator>=(Triangulo &t){
    if (this->getArea() >= t.getArea()){
        return true;
    }else{
        return false;}
}
bool Triangulo::operator==(Triangulo &t){
    if (this->getArea() == t.getArea()){
        return true;
    }else{
        return false;}
}
//TRI-QUAD
bool Triangulo::operator<(Quadrado &q){
	if(this->getArea() < q.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Triangulo::operator<=(Quadrado &q){
	if(this->getArea() <= q.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Triangulo::operator>(Quadrado &q){
	if(this->getArea() > q.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Triangulo::operator>=(Quadrado &q){
	if(this->getArea() >= q.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Triangulo::operator==(Quadrado &q){
	if(this->getArea() == q.getArea()){
		return true;
	}else{
		return false;
	}
}
//TRI-CIRC
bool Triangulo::operator<(Circulo &c){
	if(this->getArea() < c.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Triangulo::operator<=(Circulo &c){
	if(this->getArea() <= c.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Triangulo::operator>(Circulo &c){
	if(this->getArea() > c.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Triangulo::operator>=(Circulo &c){
	if(this->getArea() >= c.getArea()){
		return true;
	}else{
		return false;
	}
}
bool Triangulo::operator==(Circulo &c){
	if(this->getArea() == c.getArea()){
		return true;
	}else{
		return false;
	}
}
//Acessors
void Triangulo::setAreaTri(){
	double aAux;
	aAux = (this->base * this->altura) / 2;
	if(aAux >= 0){
		this->setArea(aAux);
	}else{
		aAux = aAux * (-1);
		this->setArea(aAux);
	}
}
double Triangulo::getBase(){
	return this->base;
}
double Triangulo::getAltura(){
	return this->altura;
}
void Triangulo::setBase(double base){
	if(base < 0){
		base = base*(-1);
		this->base = base;
	}else{
		this->base = base;
	}
}
void Triangulo::setAltura(double altura){
	if(altura < 0){
		altura = altura*(-1);
		this->altura = altura;
	}else{
		this->altura = altura;
	}
}
std::ostream& operator<<(std::ostream& out, Triangulo &t){
	cout << "X: "<< t.getPonto().getX() << " Y: "<< t.getPonto().getY() << endl;
	cout << "A base do triangulo e: " << t.getBase() << endl;
	cout << "A altura do triangulo e: " << t.getAltura() << endl;
	cout << "A area do triangulo e: " << t.getArea() << endl;	
}
