#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeroA, numeroB, numeroC, maiorNumero;
	
	printf("Qual o 1º número? ");
	scanf("%d", &numeroA);
	
	printf("Qual o 2º número? ");
	scanf("%d", &numeroB);
	
	printf("Qual o 3º número? ");
	scanf("%d", &numeroC);

	if((numeroA >= numeroB) && (numeroA >= numeroC)){
		maiorNumero = numeroA;
	}else if((numeroB >= numeroA) && (numeroB >= numeroC)){
		maiorNumero = numeroB;
	}else if((numeroC >= numeroA) && (numeroC >= numeroB)){
		maiorNumero = numeroC;
	}

	printf("O maior número é o: %d", maiorNumero);

     return 0;
}
