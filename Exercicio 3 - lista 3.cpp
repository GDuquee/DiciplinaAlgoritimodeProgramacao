//Exercício 3 lista 3 altura entre 10 pessoas e a menor
#include<stdio.h>

int main(){
	int menor,contador,altura;
	contador = 1;
	
	while(contador<=10){
		printf("Informe a altura da pessoa em centímetros: ", contador);
		scanf("%d", &altura);
		fflush(stdin);
			if(altura<30){
				printf("Altura invalida! Favor informar a altura em centímetros: ");
				scanf("%d", &altura);
				fflush(stdin);}
				else {
				if(contador == 1)
					menor = altura;
				if(menor > altura)
					menor = altura;}
				contador++;
	}
	printf("A Menor Altura é %d",menor);
}

