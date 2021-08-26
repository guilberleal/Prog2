#include <iostream>
#define TAM 10
using namespace std;

void calcula(int vet[TAM],int *max,int *min){
	
	*max = vet[0];
	*min = vet[0];
	int a;
	for(int i = 1;i<TAM;i++){
		if(vet[i]>*max){
			*max = vet[i];
			a = i;
				}
		if(vet[i]<*min){
	
			*min = vet[i];
			
				}
			
		}
	cout<<"A posicao do maior: "<<a<<endl;
	cout<<"O maximo: "<<*max<<" E o minimo "<<*min<<endl;
		
	}
	
	
	


int main(){
	int max, min;
	
	int vetor[TAM] = {624,154,40,50,70,4,58,14,12,777};
	
	calcula(vetor,&max,&min);
	
	
	
	return 0;
}
