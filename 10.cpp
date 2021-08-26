#include <iostream>

using namespace std;

void incrementa(int *valor){
	int aux;
	aux = *valor;
	cout<<"O valor sem incrementar eh: "<<aux<<endl;	

 	aux++;
	cout<<"O valor incrementado eh: "<<aux<<endl;
}

int main(){
	int valor;
	cout<<"Qual eh o valor :"<<endl;
	cin>>valor;
	

	incrementa(&valor);
	

	
	
	return 0;
}
