#ifndef CIRCULO_H
#define CIRCULO_H
#include "Triangulo.h"
#include "Quadrado.h"
#include "Forma2D.h"
class Triangulo;
class Quadrado;
class Circulo: public Forma2D{
	friend std::ostream& operator<<(std::ostream& out, Circulo &c);
	friend class Quadrado;
	friend class Triangulo;
	private:
		double raio;
	public:
		//Construtores
		Circulo();
		Circulo(double raio, Ponto ponto);
		Circulo(double raio, int x, int y);
		//Sobrecarga de operadores
		Circulo operator+(Circulo c);
		Circulo operator-(Circulo c);
		Circulo operator+(double valor);
		Circulo operator-(double valor);
		//Sobrecarga de operadores relacionais
		bool operator<(Circulo &c);
		bool operator<=(Circulo &c);
		bool operator>(Circulo &c);
		bool operator>=(Circulo &c);
		bool operator==(Circulo &c);
		//CIRC-TRI
		bool operator<(Triangulo &t);
		bool operator<=(Triangulo &t);
		bool operator>(Triangulo &t);
		bool operator>=(Triangulo &t);
		bool operator==(Triangulo &t);
		//CIRC-QUAD
		bool operator<(Quadrado &q);
		bool operator<=(Quadrado &q);
		bool operator>(Quadrado &q);
		bool operator>=(Quadrado &q);
		bool operator==(Quadrado &q);
		//Acessors
		double getRaio();
		void setRaio(double raio);
		void setAreaCirc();
};
#endif
