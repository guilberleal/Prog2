#include <iostream>
#include <string.h>

using namespace std;

int main(){

	char s[80];
	int i;
	
	cout<<"informe uma frase: ";
	gets(s);
	
	int ct = 0;//contador de espaco
	int n = strlen(s);//contador tamanho da cadeia
	
	for(i = 0; i < n;i++ ){
		if (s[i] == ' ')
			ct = ct + 1;
	}
	ct = ct + 1;
	
	cout<<"o numero de palavras eh: "<<ct;
	
	
};
