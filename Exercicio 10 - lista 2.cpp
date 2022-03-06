#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeroA, numeroB, numeroC, menorNumero;
	
	printf("Qual o 1º número? ");
	scanf("%d", &numeroA); //10
	
	printf("Qual o 2º número? ");
	scanf("%d", &numeroB); //15
	
	printf("Qual o 3º número? ");
	scanf("%d", &numeroC); //8
	
	if((numeroA <= numeroB) && (numeroA <= numeroC)){
		menorNumero = numeroA;
	}else if((numeroB <= numeroA) && (numeroB <= numeroC)){
		menorNumero = numeroB;
	}else if((numeroC <= numeroA) && (numeroC <= numeroB)){
		menorNumero = numeroC; //8 (numeroC é menor de todos)
	}

	printf("O menor número é o: %d", menorNumero); // Saída: 8

     return 0;
}
