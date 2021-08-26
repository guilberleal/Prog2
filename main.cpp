#include "Quadrado.h"
#include "Tetaedro.h"
#include <vector>
#include <iostream>
using namespace std; 
int main(){	

	vector <double> listaAreas;
	vector <double> listaVolume;
	vector <Triangulo> listaTri;
	vector <Quadrado> listaQuad;
	vector <Circulo> listaCirc;
	vector <Tetaedro> listaTet;
	vector <Cubo> listaCubo;
	vector <Esfera> listaEsf;

	Triangulo t1(2,3,4,2);
	listaTri.push_back(t1);
	
	
	Quadrado q1(3,2,5);
	listaQuad.push_back(q1);
	
	Circulo c1(5,5,5);
	listaCirc.push_back(c1);
	
	Tetaedro te1(3,2,1,6);
	listaTet.push_back(te1);
	
	Cubo cb1(3,2,5,4);
	listaCubo.push_back(cb1);
	
	Esfera e1(6,3,1,2);
	listaEsf.push_back(e1);
	
	bool control=true;
	
	while(control){
		int op;
		cout << "****************************" << endl;
		cout << "* FORMAS GEOMETRICAS 3D/2D *" << endl;
		cout << "* 1 - Adicionar formas     *" << endl;
		cout << "* 2 - Mostrar formas       *" << endl;
		cout << "* 3 - Maior forma          *" << endl;
		cout << "* 4 - Menor forma          *" << endl;
		cout << "* 5 - Total de formas      *" << endl;
		cout << "* 0 - Sair do programa     *" << endl;
		cout << "****************************" << endl;
		cin >> op;
		switch(op){
			case 1:{
				int op2;
				cout << "****** FORMAS *****" << endl;
				cout << "* 1 - Triangulo   *" << endl;
				cout << "* 2 - Quadrado    *" << endl;
				cout << "* 3 - Circulo     *" << endl;
				cout << "* 4 - Tetaedro    *" << endl;
				cout << "* 5 - Cubo        *" << endl;
				cout << "* 6 - Esfera      *" << endl;
				cout << "*******************" << endl;
				cout << "\n-Qual forma deseja adicionar?";
				cin>>op2;
				
				switch(op2){
					//ADD TRIANGULO
					case 1:{
						double aBase, aAltura;
						int aX, aY;
						cout << "Digite a base do triangulo: ";
						cin >> aBase;
						cout << "Digite a altura do triangulo: ";
						cin >> aAltura;
						cout << "Digite a posicao X: ";
						cin >> aX;
						cout << "Digite a posicao Y: ";
						cin >> aY;
						
						Triangulo tri(aBase,aAltura,aX,aY);
						listaTri.push_back(tri);
						listaAreas.push_back(tri.getArea());
						cout << tri << endl;
						break;
					}
					//ADD QUADRADO
					case 2:{
						double aLado;
						int aX, aY;
						cout << "Digite o lado do quadrado: ";
						cin >> aLado;
						cout << "Digite a posicao X: ";
						cin >> aX;
						cout << "Digite a posicao Y: ";
						cin >> aY;
						Quadrado quad(aLado,aX,aY);
						listaQuad.push_back((quad));
						listaAreas.push_back(quad.getArea());
						cout << quad << endl;
						break;
					}
					//ADD CIRCULO
					case 3:{
						double aRaio;
						int aX, aY;
						cout << "Digite o raio do Circulo: ";
						cin >> aRaio;
						cout << "Digite a posicao X: ";
						cin >> aX;
						cout << "Digite a posicao Y: ";
						cin >> aY;
						Circulo circ(aRaio,aX,aY);
						listaCirc.push_back(circ);
						listaAreas.push_back(circ.getArea());
						cout << circ << endl;
						break;
					}
					//ADD TETAEDRO
					case 4:{
						double aAresta;
						int aX, aY, aZ;
						cout << "Digite a Aresta do tetaedro: ";
						cin >> aAresta;
						cout << "Digite a posicao X: ";
						cin >> aX;
						cout << "Digite a posicao Y: ";
						cin >> aY;
						cout << "Digite a posicao Z: ";
						cin >> aZ;
						Tetaedro tet(aAresta,aX,aY,aZ);
						listaTet.push_back(tet);
						listaVolume.push_back(tet.getVolume());
						cout << tet << endl;
						break;
					}
					//ADD CUBO
					case 5:{
						double aAresta;
						int aX, aY, aZ;
						cout << "Digite a aresta do cubo: ";
						cin >> aAresta;
						cout << "Digite a posicao X: ";
						cin >> aX;
						cout << "Digite a posicao Y: ";
						cin >> aY;
						cout << "Digite a posicao Z: ";
						cin >> aZ;
						Cubo cub(aAresta,aX,aY,aZ);
						listaCubo.push_back(cub);
						listaVolume.push_back(cub.getVolume());
						cout << cub << endl;
						break;
					}
					//ADD ESFERA
					case 6:{
						double aRaio;
						int aX, aY, aZ;
						cout << "Digite a raio da esfera: ";
						cin >> aRaio;
						cout << "Digite a posicao X: ";
						cin >> aX;
						cout << "Digite a posicao Y: ";
						cin >> aY;
						cout << "Digite a posicao Z: ";
						cin >> aZ;
						Esfera esf(aRaio,aX,aY,aZ);
						listaEsf.push_back(esf);
						listaVolume.push_back(esf.getVolume());
						cout << esf << endl;
						break;
					}
					case 0:{
						control = false;
						break;
					}
				break;
				}	
			break;
			}
			case 2:{
				int op3;
				cout << "** FORMAS **" << endl;
				cout << "* 1 - 2D   *" << endl;
				cout << "* 2 - 3D   *" << endl;
				cout << "************" << endl;
				cout << "\n-Qual formas deseja visualizar ?";
				cin>>op3;
				
				switch(op3){
					case 1:{
						cout << "**  FORMAS 2D **" << endl;
						cout << " -- Triangulos" << endl;
						for(int i=0; i < listaTri.size(); i++){
						 	cout << listaTri[i];
						 }
						cout << " -- Quadrados" << endl;
						 for(int i=0; i < listaQuad.size(); i++){
						 	cout << listaQuad[i];
						 }
						cout << " -- Circulos" << endl;
						 for(int i=0; i < listaCirc.size(); i++){
						 	cout << listaCirc[i];
						 }
						break;
					}
					case 2:{
						cout << "**  FORMAS 3D **" << endl;
						cout << " -- Tetaedros" << endl;
						 for(int i=0; i < listaTet.size(); i++){
						 	cout << listaTet[i];
						 }
						cout << " -- Cubos" << endl;
						 for(int i=0; i < listaCubo.size(); i++){
						 	cout << listaCubo[i];
						 }
						cout << " -- Esferas" << endl;
						 for(int i=0; i < listaEsf.size(); i++){
						 	cout << listaEsf[i];
						 }
						break;
					}
					case 0:{
					return 0;	//PROGRAMAR VOLTAR AO INICIO
					break;
					}
				}
			break;
			}
			case 3:{
				int op4;
				cout << "**    Maior   **" << endl;
				cout << "* 1 - Area     *" << endl;
				cout << "* 2 - Volume   *" << endl;
				cout << "****************" << endl;
				cout << "\n-Qual formas deseja visualizar ?";
				cin>>op4;
				switch(op4){
					case 1:{
						double maiorA;
						for(int i=0; i < listaAreas.size(); i++){
						 	if(maiorA < listaAreas[i]){
						 		maiorA = listaAreas[i];
							 }
						 }
						 cout << "A maior area e: " << maiorA << endl;					
						break;
					}
					case 2:{
						double maiorV;
						for(int i=0; i < listaVolume.size(); i++){
						 	if(maiorV < listaVolume[i]){
						 		maiorV = listaVolume[i];
							 }
						 }
						 cout << "O maior volume e: " << maiorV << endl;
						break;
					}
					case 0:{
						
					break;
					}
				}
			break;
			}
			case 4:{
				int op5;
				cout << "**    Menor   **" << endl;
				cout << "* 1 - Area     *" << endl;
				cout << "* 2 - Volume   *" << endl;
				cout << "****************" << endl;
				cout << "\n-Qual formas deseja visualizar ?";
				cin>>op5;
				switch(op5){
					case 1:{
						double menorA;
						for(int i=0; i < listaAreas.size(); i++){
						 	if(menorA > listaAreas[i]){
						 		menorA = listaAreas[i];
							 }
						 }
						 cout << "A menor area e: " << menorA << endl;					
						break;
					}
					case 2:{
						double menorV;
						for(int i=0; i < listaVolume.size(); i++){
						 	if(menorV > listaVolume[i]){
						 		menorV = listaVolume[i];
							 }
						 }
						 cout << "O menor volume e: " << menorV << endl;
						break;
					}
					case 0:{
						
						
						//PARAMETRO DE SAIDA
					break;
					}
				}
				break;
			}
			case 5:{
				int op5;
				cout << "**    Total   **" << endl;
				cout << "* 1 - Area     *" << endl;
				cout << "* 2 - Volume   *" << endl;
				cout << "****************" << endl;
				cout << "\n-Qual formas deseja visualizar ?";
				cin>>op5;
				switch(op5){
					case 1:{
						double totalA;
						for(int i=0; i < listaAreas.size(); i++){
						 	totalA = totalA + listaAreas[i];
						 }
						 cout << "A area total e: " << totalA << endl;
						break;
					}
					case 2:{
						double totalV;
						for(int i=0; i < listaVolume.size(); i++){
						 	totalV = totalV + listaVolume[i];
						 }
						 cout << "O volume total e: " << totalV << endl;
						break;
					}
					case 0:{
						//PARAMETRO DE SAIDA
						break;
					}
				}
			break;
			}
			case 0:{
				control=false;
				cout << "Saindo...";
				break;
			}
		break;
		}
	}
	return 0;
	
};
