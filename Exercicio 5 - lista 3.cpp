//exercício 5 lista 3 
#include<stdio.h>

int main(){
	int numero, i, fat;
	
	printf("Insira um numero inteiro para fatorar: ");
	scanf("%d", &numero);
	fflush(stdin);
	i=1;
	
	if(numero<0){
		printf("Somente números inteiros positivos!");
	} else if(numero==0){
		printf("Fatorial de 0 é: 1");
	} else{
		while(i<= numero){
			fat = fat*i;
			i++;
		}	
	}	
	printf("Fatorial de %d é: %d", numero, fat);
}
