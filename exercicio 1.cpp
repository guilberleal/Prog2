#include <iostream>

using namespace std;

class triangulo{
	public:
		double base;
		double altura;
		
		double calculaArea(double base,double altura){
			double area;
			area = base * altura;
			
			cout<<"A area = "<<area<<endl;
			
			
		}
	
};

int main(){
		double base,altura;
		cout<<"Digite a base do triangulo: "<<endl;
		cin>>base;
		
		cout<<"Digite a Altura do triangulo: "<<endl;
		cin>>altura;
	
		triangulo T;
		
		T.calculaArea(base,altura);	
	
	return 0;
}
