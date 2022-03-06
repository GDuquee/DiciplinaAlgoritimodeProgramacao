//exercicio 11 lista 3
#include <stdio.h>
#include <string.h>

int main(){
	int i= 1,nota = 0, nota1 = 0, nota2 = 0, nota3 = 0, maiorNota, juizes;
	char finalista1[30], finalista2[30], finalista3[30], vencedor[30];
	
    printf("Quantos juizes irao participar do evento? ");
    scanf("%d", &juizes);
    fflush(stdin);
	printf("Qual o nome do finalista 1? ");
	fgets(finalista1, 30, stdin);
	fflush(stdin);
	printf("Qual o nome do finalista 2? ");
	fgets(finalista2, 30, stdin);
	fflush(stdin);
	printf("Qual o nome do finalista 3? ");
	fgets(finalista3, 30, stdin);
	fflush(stdin);
	
	do{
		printf("Olá, juiz %d! Informe a sua nota para o finalista %s ", i, finalista1);
		scanf("%d", &nota);
		fflush(stdin);
			do{
				if(nota<0 || nota>100){
					printf("Nota invalida! Tente novamente!");
				}
			}while(nota<0 || nota>100);
			nota1= nota1 + nota;
			
		printf("Olá, juiz %d! Informe a sua nota para o finalista %s: ", i, finalista2);
		scanf("%d", &nota);
		fflush(stdin);
			do{
				if(nota<0 || nota>100){
					printf("Nota invalida! Tente novamente!");
				}
			}while(nota<0 || nota>100);
			nota2= nota2 + nota;
			
		printf("Olá, juiz %d! Informe a sua nota para o finalista %s: ", i, finalista3);
		scanf("%d", &nota);
		fflush(stdin);
			do{
				if(nota<0 || nota>100){
					printf("Nota invalida! Tente novamente!");
				}
			}while(nota<0 || nota>100);
			nota3= nota3 + nota;
			i++;
	}while(i <= juizes);
		if (nota1 > nota2 && nota1> nota3){
			strcpy(vencedor, finalista1);
			maiorNota = nota1;
		}
		else if(nota2 > nota1 && nota2 > nota3){
			strcpy(vencedor, finalista2);
			maiorNota = nota2;
			}
	    	else if(nota3 > nota1 && nota3 > nota2){
	    		strcpy(vencedor, finalista3);
				maiorNota = nota3;
				}
					
		printf("Nota do finalista 1 - %s: %d \n", finalista1,nota1);
		printf("Nota do finalista 2 - %s: %d \n", finalista2,nota2);
		printf("Nota do finalista 3 - %s: %d \n", finalista3,nota3);
		printf("O vencedor do concurso é: %s, com o total de pontos: %d", vencedor, maiorNota);	
}
	
