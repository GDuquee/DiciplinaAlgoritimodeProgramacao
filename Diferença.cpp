/*Leia quatro valores inteiros A, B, C e D. 
A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: 
DIFERENCA = (A * B - C * D).*/

#include <stdio.h>

 int main (){
  	
  	int a, b, c, d, diferenca;
  	
  	printf("Insisra o valor de A:");
  	scanf("%d", &a);
  	printf("Insira o valor de B:");
  	scanf("%d", &b);
  	printf("Insira o valor de c:");
  	scanf("%d", &c);
  	printf("Insira o valor de d:");
  	scanf("%d", &c);
  	
  		diferenca = a * b - c * d;
  		
  		
  	printf("DIFERECA = %d", diferenca);	
  		
  	return 0;
  }
