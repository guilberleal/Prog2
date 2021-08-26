#ifndef FORMA1_H
#define FORMA1_H
#include "Forma.h"
#include <string>

class Forma2D: public Forma{
	friend class Ponto;
	private:
		std::string tipoForma;
		double area;
	public:
		Forma2D();
		Forma2D(double area, Ponto p);
		Forma2D(double area, int x, int y);
		void setArea(double area);
		double getArea();
		Forma2D operator+(Forma2D f);
		bool operator<(Forma2D &f);
		void showForma2D();	
		double maiorForma2D(Forma2D &f);
		void setTipoForma(std::string tipoForma);
		std::string getTipoForma();
};
#endif
