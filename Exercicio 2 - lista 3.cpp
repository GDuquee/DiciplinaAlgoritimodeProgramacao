// Exerc�cio 2 lista 3 multiplica��o de dois n�meros 
#include<stdio.h>

int main(){	
	int i, numero1, numero2, conta;
	
	printf("Insira dois n�meros inteiros: ");
	scanf("%i%i", &numero1,&numero2);	
	conta=0;
	
	for(i=1;i<=numero1;i++){
		conta = conta + numero2;
	}	
	printf("Resultado: %i", conta);
}
