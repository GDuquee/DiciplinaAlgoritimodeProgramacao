//exercicio 10 lista 3
#include<stdio.h>
#include <stdlib.h>

int main(){
	int quantidadeNumeros = 0; 
	int numero;
	int i;
	
	for(i=0;i<100;i++){ 
		printf("Insira um n�mero: "); 
		scanf("%i", &numero);
		quantidadeNumeros++;
		if(numero<0){
			break;
		}
	}
	if(quantidadeNumeros==1){
		printf("Foi recebido apenas 1 n�mero");
	}else{ 
		printf("Foram recebidos %d numeros", quantidadeNumeros);
	}
}

