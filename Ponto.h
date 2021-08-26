class Ponto{
	friend class Forma;
	private:
		int x, y, z = 0L;
	public:
		//Construtores
		Ponto();
		Ponto(int x, int y);
		Ponto(int x, int y, int z);
		//Acessors
		int getX();
		int getY();
		int getZ();
		void setX(int x);
		void setY(int y);
		void setZ(int z);
		//Sobrecarga
		Ponto operator+(Ponto p);
		Ponto operator-(Ponto p);
};
