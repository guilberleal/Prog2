#include "EnsinoBasico.h"
#include "EnsinoMedio.h"
#include "EnsinoSuperior.h"
#include <vector>
#include <iostream>
#include <string>



using namespace std;

int main(){
	
	

	//Ensino Basico
	EnsinoBasico p1("adiel",1,"Colegio Dunga");
	p1.Salario();
	p1.showDados();

	
	EnsinoBasico p2("guilber",2,"Colegio Portal");
	p2.Salario();
	p2.showDados();
	
	EnsinoBasico p3("vitao",3,"Colegio Nelson Mandela");
	p3.Salario();
	p3.showDados();
	
	EnsinoBasico p4("danilo",4,"Colegio Lula");
	p4.Salario();
	p4.showDados();
//Ensino Medio
	EnsinoMedio p5("Domingues",5,"Colegio Sarita","Colegio CIN");
	p5.Salario();
	p5.showDados();
	
	EnsinoMedio p6("Alexandre",6,"Colegio Oriente","Colegio CIN");
	p6.Salario();
	p6.showDados();
	
	EnsinoMedio p7("Marcos",7,"Colegio Dunga","Colegio Saleziano");
	p7.Salario();
	p7.showDados();
	
	EnsinoMedio p8("gabriel",8,"Colegio Nelson Mandela","Colegio CIN");
	p8.Salario();
	p8.showDados();
	//Ensino Superior
	EnsinoSuperior p9("sagaz",9,"Colegio Evolucao","Colegio Newton","UFMT");
	p9.Salario();
	p9.showDados();
	
	EnsinoSuperior p10("joao",10,"Colegio Oriente","Colegio Saleziano","UFRJ");
	p10.Salario();
	p10.showDados();
	
	vector <Analfabeto> listaBasico;
	listaBasico.push_back(p1);
	listaBasico.push_back(p2);
	listaBasico.push_back(p3);	
	listaBasico.push_back(p4);
	listaBasico.push_back(p5);	
	listaBasico.push_back(p6);
	listaBasico.push_back(p7);
	listaBasico.push_back(p8);
	listaBasico.push_back(p9);
	listaBasico.push_back(p10);
							
	double total = 0;
	
	for(int i = 0; i <listaBasico.size();i++){
		total += listaBasico[i].getRenda();
	}
	cout<<"\nTotal da renda dos Funcionarios = "<<total<<endl;
	

	return 0;
}
