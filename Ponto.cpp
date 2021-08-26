#include "Ponto.h"
#include <iostream>
//Construtores
Ponto::Ponto(){
	this->x = 0;
	this->y = 0;
}
Ponto::Ponto(int x, int y){
	this->x = x;
	this->y = y;
}
Ponto::Ponto(int x, int y,int z){
	this->x = x;
	this->y = y;
	this->z = z;
}
//Acessors
int Ponto::getX(){
	return this->x;
}
int Ponto::getY(){
	return this->y;
}
int Ponto::getZ(){
	return this->z;
}
void Ponto::setX(int x){
	this->x = x;
}
void Ponto::setY(int y){
	this->y = y;
}
void Ponto::setZ(int z){
	this->z = z;
}
//Sobrecarga de operadores
Ponto Ponto::operator+(Ponto p){
	if(p.getZ() == 0L){
		int a,b;
		a = this->x + p.getX();
		b = this->y + p.getY();
		return Ponto(a,b);
	}else{
		int a,b,c;
		a = this->x + p.getX();
		b = this->y + p.getY();	
		c = this->z + p.getZ();
		return Ponto(a,b,c);	
	} 
}
Ponto Ponto::operator-(Ponto p){
	if(p.getZ() == 0L){
		int a,b;
		a = this->x + p.getX();
		b = this->y + p.getY();
		return Ponto(a,b);
	}else{
		int a,b,c;
		a = this->x + p.getX();
		b = this->y + p.getY();	
		c = this->z + p.getZ();
		return Ponto(a,b,c);	
	}
}
