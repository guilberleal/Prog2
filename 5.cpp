#include <iostream>
#include <math.h>
using namespace std;

typedef struct ponto{
	double x;
	double y;
}p;

double distancia(p a,p b){
	double soma;
	soma = sqrt( pow((b.x-a.x),2.0) + pow((b.y - a.y),2.0));
	return soma;
	
}

int main(){
	p a1;
	p b1;
	double somafinal;
	
	cout<<"digite x do ponto 1:"<<endl;
	cin>>a1.x;
	
	cout<<"digite y do ponto 1:"<<endl;
	cin>>a1.y;
	
	cout<<"digite x ponto 2:"<<endl;
	cin>>b1.x;
	
	cout<<"digite y do ponto 2:"<<endl;
	cin>>b1.y;
	
	somafinal = distancia(a1,b1);
	
	
	cout<<"A soma da distancia eh:"<<somafinal<<endl;
	
	
}
