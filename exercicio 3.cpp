#include <iostream>
#include <string>

using namespace std;


class Empregado{
	public:
		string nome = "henri ford";
		double salario = 1000;
		
		void aumento(float porcentagem){
			float porcento;
			porcento = porcentagem/100;
			salario = salario + (salario * porcento);
		}
		void mostraDados(){
			cout<<"O nome do Empregado eh: "<<nome<<endl;
			cout<<"O salario do Empregado eh: "<<salario<<endl;
		}
		
};

int main(){
	

	
	Empregado emp1;
	emp1.mostraDados();
	emp1.aumento(10);
	emp1.mostraDados();
	
	return 0;
}
