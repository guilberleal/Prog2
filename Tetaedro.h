#ifndef TETAEDRO_H
#define TETAEDRO_H
#include "Esfera.h"
#include "Cubo.h"
#include "Forma3D.h"
class Cubo;
class Esfera;
class Tetaedro: public Forma3D{
	friend std::ostream& operator<<(std::ostream& out, Tetaedro &t);
	friend class Cubo;
	friend class Esfera;
	private:
		double aresta;
	public:
		Tetaedro();
		Tetaedro(double aresta, Ponto p);
		Tetaedro(double aresta, int x, int y, int z);
		//Sobrecarga de operadores
		Tetaedro operator+(Tetaedro &t);
		Tetaedro operator-(Tetaedro &t);
		Tetaedro operator+(double valor);
		Tetaedro operator-(double valor);
		//Sobrecarga de operadores relacionais
		bool operator<(Tetaedro &t);
		bool operator<=(Tetaedro &t);
		bool operator>(Tetaedro &t);
		bool operator>=(Tetaedro &t);
		bool operator==(Tetaedro &t);
		//TET-CUB
		bool operator<(Cubo &c);
		bool operator<=(Cubo &c);
		bool operator>(Cubo &c);
		bool operator>=(Cubo &c);
		bool operator==(Cubo &c);
		//TET-ESF
		bool operator<(Esfera &e);
		bool operator<=(Esfera &e);
		bool operator>(Esfera &e);
		bool operator>=(Esfera &e);
		bool operator==(Esfera &e);
		//Acessors
		void setAresta(double aresta);
		double getAresta();
		void setVolumeTet();
		void showDadosTet();
};
#endif
