// Exerc�cio 1 lista 3 fatorial de um n�mero
#include<stdio.h>

int main(){
	int numero, conta, i;
		
	printf("Insira o n�mero que deseja fatorar: ");
	scanf("%i", &numero);
	conta=1;
		
	if(numero<0){
		printf("Somente numeros inteiros positivos");
	} else if(numero==0) {
		printf("Resultado: 1");
	} else {
		for(i=1;i<=numero;i++){
			conta = conta*i;
		}
		printf("Resultado: %i", conta);
	}
}
