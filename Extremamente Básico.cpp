/*Leia 2 valores inteiros e armazene-os nas variáveis A e B.
Efetue a soma de A e B atribuindo o seu resultado na variável X. 
Imprima X conforme exemplo apresentado abaixo.*/

#include <stdio.h>

int main(){
	
int valorA, valorB, valorX;

	printf("Informe o valor de A:");
	scanf("%d", &valorA);
	printf("Informe o valor de B:");
	scanf("%d", &valorB);
	
		valorX = valorA + valorB;
	
	printf("O resultado da soma entre valor A e valor B, foi de: %d", valorX);	
	
			
	
	
	
	
	return 0;
}
