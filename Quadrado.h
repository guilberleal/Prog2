#ifndef QUADRADO_H
#define QUADRADO_H
#include <iostream>
#include "Triangulo.h"
#include "Circulo.h"
#include "Forma2D.h"
class Triangulo;
class Circulo;
class Quadrado: public Forma2D{
	friend std::ostream& operator<<(std::ostream& out, Quadrado &q);
	friend Triangulo;
	friend Circulo;
	
	private:
		double lado;
	public:	
		//Construtores
		Quadrado();
		Quadrado(double lado, Ponto p);
		Quadrado(double lado, int x, int y);
		//Sobrecarga de operadores
		Quadrado operator+(Quadrado q);
		Quadrado operator-(Quadrado q);
		Quadrado operator+(double valor);
		Quadrado operator-(double valor);
		//Sobrecarga de operadores relacionais 
		//ENTRE O MESMO OBJETO
		bool operator<(Quadrado &q);
		bool operator<=(Quadrado &q);
		bool operator>(Quadrado &q);
		bool operator>=(Quadrado &q);
		bool operator==(Quadrado &q);
		//Sobrecarga entre operadores de objetos diferentes
		//QUAD-TRI
		bool operator<(Triangulo& tri);
		bool operator<=(Triangulo& tri);
		bool operator>(Triangulo& tri);
		bool operator>=(Triangulo& tri);
		bool operator==(Triangulo& tri);
		//QUAD-CIRC
		bool operator<(Circulo &c);
		bool operator<=(Circulo &c);
		bool operator>(Circulo &c);
		bool operator>=(Circulo &c);
		bool operator==(Circulo &c);
		//Acessors
		void setLado(double lado);
		double getLado();
		void setAreaQuad();
};
#endif
