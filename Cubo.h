#ifndef CUBO_H
#define CUBO_H
#include "Forma3D.h"
#include "Esfera.h"
#include "Tetaedro.h"
#include <iostream>
class Esfera;
class Tetaedro;
class Cubo: public Forma3D{
	friend std::ostream& operator<<(std::ostream& out, Cubo&c);
	friend class Esfera;
	friend class Tetaedro;
	private:
		double aresta;
	public:	
		//Construtores
		Cubo();
		Cubo(double aresta, Ponto p);
		Cubo(double aresta, int x, int y, int z);
		//Sobrecarga de operadores
		Cubo operator+(Cubo &c);
		Cubo operator-(Cubo &c);
		Cubo operator+(double valor);
		Cubo operator-(double valor);
		//Sobrecarga de operadores relacionais
		bool operator<(Cubo &c);
		bool operator<=(Cubo &c);
		bool operator>(Cubo &c);
		bool operator>=(Cubo &c);
		bool operator==(Cubo &c);
		//CUB-ESF
		bool operator<(Esfera &e);
		bool operator<=(Esfera &e);
		bool operator>(Esfera &e);
		bool operator>=(Esfera &e);
		bool operator==(Esfera &e);
		//CUB-TET
		bool operator<(Tetaedro &t);
		bool operator<=(Tetaedro &t);
		bool operator>(Tetaedro &t);
		bool operator>=(Tetaedro &t);
		bool operator==(Tetaedro &t);
		
		//Acessors
		double getAresta();
		void setAresta(double aresta);
		void setVolumeCubo();
};
#endif
