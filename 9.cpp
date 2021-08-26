#include <iostream>

using namespace std;

void trocatroca(int *a,int *b){
	
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

int main(){
	int a,b;
	
	cout<<"Digite o valor de A: "<<endl;
	cin>>a;
	
	cout<<"Digite o valor de B: "<<endl;
	cin>>b;
	
	cout<<"Valor de A: "<<a<<endl;
	cout<<"valor de B: "<<b<<endl;
	
	trocatroca(&a,&b);
	
	cout<<"Valor de A: "<<a<<endl;
	cout<<"valor de B: "<<b<<endl;
	
}
