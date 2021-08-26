#ifndef FORMA2_H
#define FORMA2_H
#include "Forma.h"
class Forma3D: public Forma{
	friend class Ponto;
	private:
		double volume;
	public:
		Forma3D();
		Forma3D(double volume, Ponto p);
		Forma3D(double volume, int x, int y, int z);
		void setVolume(double volume);
		double getVolume();
		Forma3D operator+(Forma3D &f);
		bool operator<(Forma3D &f);
		void showForma3D();		
};
#endif
