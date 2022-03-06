#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	int numero;
	
	printf("Qual o valor do número que você deseja descobrir o seu módulo?");
	scanf("%d", &numero);
	
	printf("O módulo é: %d", abs(numero));

	return 0;
}
