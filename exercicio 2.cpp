#include <iostream>

using namespace std;

class Lampada{
	public:
		bool ligada;
		
		void ligar(){
			ligada = true;
			
			
		}
		void desligar(){
			ligada = false;
		}
		void status(){
			if(ligada == true)
				cout<<"A Lampada esta Ligada"<<endl;
			else
				cout<<"A Lampada esta Desligada"<<endl;
			
		}
		bool ehEconomica(int potencia){
			if(potencia < 40)
				return true;
			else 
				return false;
		} 
		
};



int main(){
	
	
	Lampada l1;
	
	int valor;
	
	cout<<"Informe a potencia da lampada :"<<endl;
	cin>>valor;
	
	l1.ligar();
	l1.status();
	l1.desligar();
	l1.status();
	
	
	if(l1.ehEconomica(valor))
		cout<<"A Lampada eh economica"<<endl;
	else
		cout<<"A Lampada nao eh economica"<<endl;
	
	
	return 0;
}
