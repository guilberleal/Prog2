#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char aux[80];
	char s[80];
	int i;
	int pos;
	
	cout<<"informe uma frase: ";
	gets(s);
	
	int ct = 0;//contador de espaco
	int n = strlen(s);//contador tamanho da cadeia
	
	

		for(i = 0, pos = 0; i < n ;i++,pos++){
				if (s[pos] == ' '){ 
				pos++; 
					} 		
			aux[i] = s[pos];
			}
				

			
			
			
			cout<<"A frase eh :"<<aux;
	
	
};
