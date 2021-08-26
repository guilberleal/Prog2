#include <iostream>
#include <string>
using namespace std;


class Partida{
	public:
		string NTmandante;
		int NGmandante;
		int Pmandante;
		
		string NTvisitante;
		int NGvisitante;
		int Pvisitante;
		
	void resultado(string home, int goalHome, string visitor, int goalVisitor){
		NTmandante = home;
		NGmandante = goalHome;
		NTvisitante = visitor;
		NGvisitante = goalVisitor;
		this->calculaPontos();
	}
	
	void calculaPontos(){
		
		if(NGvisitante>NGmandante){
			Pvisitante = 3;
		}
		if(NGvisitante<NGmandante){
			Pmandante = 3;
		}
		if(NGvisitante == NGmandante){
			Pmandante = 1;
			Pvisitante = 1;
		}
	}
	
	void mostraResultado(){
		cout<<NTvisitante<<" "<<NGvisitante<<" X "<<NGmandante<<" "<<NTmandante<<endl;
		cout<<"Pontos ganhados pelo Visitante: "<<Pvisitante<<" "<<endl;
		cout<<"Pontos ganhados pelo Mandante: "<<Pmandante<<endl;
	}
	
};

int main(){
	
	Partida p1;
	
	p1.resultado("gados",1,"Cornos",2);
	p1.mostraResultado();
	
	Partida p2;
	p2.resultado("Adiel FC",4,"Vitao FC",4);
	p2.mostraResultado();
	
	
	
	
	
	return 0;
}
