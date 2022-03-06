#include<stdio.h>
#include<iostream>
int main(){
	int A, B, C, Media;
	printf("Insira o primeiro valor:");
	scanf("%d", &A);
	printf("Insira o segundo valor:");
	scanf("%d", &B);
	printf("Insira o terceiro valor");
	scanf("%d", &C);
	
	Media = (A + B + C)/3;
	printf("A media e: %d\n", Media);
	
	return 0;
	
}
