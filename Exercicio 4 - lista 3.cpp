//Exercício 4 lista 3 calcular H tendo N fornicido pelo usuario 
#include<stdio.h>

int main(){
	float H, n, i;
	
	printf("Informe o denominador maximo: ");
	scanf("%f",&n);
	H=0;
		
	if(n<0 or n==0){
		printf("Somente numeros inteiros positivos e diferente de 0");
	} else{
		for(i=1;i<=n;i++){
			H = H + (1/i);
		}
	printf("Resultado: %.2f", H);
	}
}s
