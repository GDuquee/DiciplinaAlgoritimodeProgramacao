#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	double resto;
	
	printf("Qual o número? ");
	scanf("%d", &numero);
	
	resto = numero % 2;
	
	if(resto == 0){
		printf("O número %d é PAR!", numero);
	}else{
		printf("O número %d é IMPAR!", numero);
	}
	return 0;
}
