#ifndef ESFERA_H
#define ESFERA_H
#include "Tetaedro.h"
#include "Cubo.h"
#include <iostream>
#include "Forma3D.h"
class Tetaedro;
class Cubo;
class Esfera: public Forma3D{
	friend std::ostream& operator<<(std::ostream& out, Esfera &e);
	friend class Tetaedro;
	friend class Cubo;
	private:
		double raio;
	public:	
		//Construtores
		Esfera();
		Esfera(double raio, Ponto p);
		Esfera(double raio, int x, int y, int z);
		//Sobrecarga de operadores
		Esfera operator+(Esfera &e);
		Esfera operator-(Esfera &e);
		Esfera operator+(double valor);
		Esfera operator-(double valor);
		//Sobrecarga de operadores relacionais
		bool operator<(Esfera &e);
		bool operator<=(Esfera &e);
		bool operator>(Esfera &e);
		bool operator>=(Esfera &e);
		bool operator==(Esfera &e);
		//ESF-TET
		bool operator<(Tetaedro &t);
		bool operator<=(Tetaedro &t);
		bool operator>(Tetaedro &t);
		bool operator>=(Tetaedro &t);
		bool operator==(Tetaedro &t);
		//ESF-CUB
		bool operator<(Cubo &c);
		bool operator<=(Cubo &c);
		bool operator>(Cubo &c);
		bool operator>=(Cubo &c);
		bool operator==(Cubo &c);
		
		//Acessors
		double getRaio();
		void setRaio(double raio);
		void setVolumeEsfera();
};
#endif
