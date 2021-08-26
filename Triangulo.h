#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Quadrado.h"
#include "Circulo.h"
#include "Forma2D.h"
class Circulo;
class Quadrado;
class Triangulo: public Forma2D{
	friend std::ostream& operator<<(std::ostream& out, Triangulo &t);
	friend Quadrado;
	friend Circulo;
	private:
		double base, altura;
	public:
		//Construtores
		Triangulo();
		Triangulo(double base, double altura, Ponto p);
		Triangulo(double base, double altura, int x, int y);
		//Sobrecarga de operadores
		Triangulo operator+(Triangulo t);
		Triangulo operator-(Triangulo t);
		Triangulo operator+(double valor);
		Triangulo operator-(double valor);
		//Sobrecarga de operadores relacionais
		bool operator<(Triangulo &t);
		bool operator<=(Triangulo &t);
		bool operator>(Triangulo &t);
		bool operator>=(Triangulo &t);
		bool operator==(Triangulo &t);
		//TRI-QUAD
		bool operator<(Quadrado &q);	
		bool operator<=(Quadrado &q);
		bool operator>(Quadrado &q);
		bool operator>=(Quadrado &q);
		bool operator==(Quadrado &q);
		//TRI-CIRC
		bool operator<(Circulo &c);
		bool operator<=(Circulo &c);
		bool operator>(Circulo &c);
		bool operator>=(Circulo &c);
		bool operator==(Circulo &c);
		//Acessors
		double getBase();
		double getAltura();
		void setBase(double base);
		void setAltura(double altura);
		void setAreaTri();
};
#endif
