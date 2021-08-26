#include <iostream>

using namespace std;

typedef struct triangulo{
	double lado1;
	double lado2;
	double lado3;
}t;

void escaleno(t t1){
	if(t1.lado1 != t1.lado2 && t1.lado1 != t1.lado3 && t1.lado2 != t1.lado3 )
		cout<<"Ele eh escaleno!"<<endl;
	else 
		cout<<"Ele nao eh escaleno!"<<endl;
}

int main(){
	t tri;
	
	cout<<"informe o lado 1: "<<endl;
	cin>>tri.lado1;
	
	cout<<"informe o lado 2: "<<endl;
	cin>>tri.lado2;
	
	cout<<"informe o lado 3: "<<endl;
	cin>>tri.lado3;
	
	escaleno(tri);
	
	
return 0;	
}
