/*Leia 2 valores de ponto flutuante de dupla precis�o A e B, que correspondem a 2 notas de um aluno. 
A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto � 11). 
Assuma que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.*/

  #include <stdio.h>
  
  int main (){
  	
  	double a, b, media;
  	
  	printf("Insisra o valor de A:");
  	scanf("%lf", &a);
  	printf("Insira o valor de B:");
  	scanf("%lf", &b);
  	
  		media = ((a * 3.5) + (b * 7.5)) / 11;
  		
  	printf("MEDIA = %lf", media);	
  		
  	
  	
  	return 0;
  }
