#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numeroA, numeroB, diferenca;
	
	printf("Qual o 1º número? ");
	scanf("%f", &numeroA);
	
	printf("Qual o 2º número? ");
	scanf("%f", &numeroB);
	
	if(numeroA >= numeroB){
		diferenca = numeroA - numeroB;
	}else{
		diferenca = numeroB - numeroA;
	}
	
	printf("A diferença entra os números %.1f e %.1f é de %.1f", numeroA, numeroB, diferenca);

    return 0;
}
