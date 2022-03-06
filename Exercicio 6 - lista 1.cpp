#include<stdio.h>
int main(){
	int A, B, media;
	printf("Valor da primeira prova ?");
	scanf("%d", &A);
	printf("Valor da segunda prova ?");
	scanf("%d", &B);
	
	media = ((A *3.5)+(B *7.5))/11;
	printf("\n A media das notas apresentadas e: %d .\n", media);
	
	
}

