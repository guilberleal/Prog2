#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char str[50];
	
	cout<<"Digite a string: ";
	cin>>str;
	
	int tam = strlen(str);
	for(int i = tam-1; i >= 0; i--)
	cout<< str[i];
};
