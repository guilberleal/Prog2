#include <iostream>

using namespace std;

typedef struct retangulo {
	double altura;
	double largura;
}r;

double area( r a1){

	return a1.largura * a1.altura;
}


int main(){
	r area1;
	double areafinal;
	cout<<"digite a Altura:"<<endl;
	cin>>area1.altura;
	
	cout<<"digite a Largura:"<<endl;
	cin>>area1.largura;
	
	areafinal = area(area1);
	
	cout<<"A area eh:"<<areafinal;
	
	
	
}
