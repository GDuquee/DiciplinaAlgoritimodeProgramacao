//Exercicio 7 lista 3 frutas
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int fruta;
	char aux;
	
	do{
		printf("Informe a fruta:\n 1- ABACAXI \n 2- MACA \n 3- PERA \n ");
		scanf("%i", &fruta);
		fflush(stdin);
		switch(fruta){
			case 1: printf("Abacaxi"); 
				break;
			case 2: printf("Maca"); 
				break;
			case 3: printf("Pera"); 
				break;
			default: printf("Fruta inexistente");
		}
		do{
			printf("Deseja outra fruta?[s|n]\n");
			scanf("%c", &aux);
			fflush(stdin);
			aux = tolower(aux);
			if(aux != 's' && aux != 'n'){
				printf("Opção invalida! Digite novamente.\n");
			}
		}while(aux != 's' && aux != 'n');
	}while(aux == 's');	
}
