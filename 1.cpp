#include <iostream>
#include <string.h>

using namespace std;

int main(){

	char nome1[50];
	char nome2[50];
	
	cout<<"digite a primeira string:"<<endl;
	cin>>nome1;

	cout<<"Digite a segunda string:"<<endl;
	cin>>nome2;
	
	int tamanho1 = strlen(nome1);
	int tamanho2 = strlen(nome2);
	
	if(tamanho1>tamanho2)
		cout<<"A primeira string eh maior";
	else if(tamanho1<tamanho2)
	cout<<"A segunda string eh maior";
	else cout<<"as string tem o mesmo tamanho";
	};

