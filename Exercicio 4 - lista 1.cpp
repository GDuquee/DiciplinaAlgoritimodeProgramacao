#include<stdio.h>
int main(){
	double A, B, Resultado;
	printf("Digite o numero A:\n");
	scanf("%lf", &A);
	printf("Digite o numero B:\n");
	scanf("%lf", &B);

	Resultado = A, B;
	printf("Numero de A:%lf\n", A);
	printf("Numero de B:%lf\n", B);
	printf("Resultado da divisao:%lf\n", Resultado);
	
	return 0; 
}
