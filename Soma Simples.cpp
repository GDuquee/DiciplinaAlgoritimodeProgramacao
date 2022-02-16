/*Leia dois valores inteiros, no caso para variáveis A e B. 
A seguir, calcule a soma entre elas e atribua à variável SOMA. 
A seguir escrever o valor desta variável.*/

#include <stdio.h>

int main(){
	
	int valorA, valorB, valorSOMA;
	
	printf("Insira o valor A:");
	scanf("%d", &valorA);
	printf("Insira o valor B:");
	scanf("%d", &valorB);
	
	valorSOMA = valorA + valorB;
	
	printf("SOMA = %d", valorSOMA);
	
	
	
	
	return 0;
}
