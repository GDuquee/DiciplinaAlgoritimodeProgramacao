/*Leia 3 valores, no caso, vari�veis A, B e C, que s�o as tr�s notas de um aluno. 
A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. 
Considere que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.*/

#include <stdio.h>
  
  int main (){
  	
  	double a, b, c, media;
  	
  	printf("Insisra o valor de A:");
  	scanf("%lf", &a);
  	printf("Insira o valor de B:");
  	scanf("%lf", &b);
  	printf("Insira o valor de c:");
  	scanf("%lf", &c);
  	
  		media = ((a * 2) + (b * 3) + (c * 5)) / 10;
  		
  	printf("MEDIA = %lf", media);	
  		
  	
  	
  	return 0;
  }
