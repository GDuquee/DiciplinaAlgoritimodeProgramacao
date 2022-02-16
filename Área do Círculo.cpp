/*A fórmula para calcular a área de uma circunferência é: area = n . raio2. 
Considerando para este problema que p = 3.14159:
Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por n*/

#include <stdio.h>

int main(){
	
	double raio, area;
	 
	
	printf("Informe o valor de raio:");
	scanf("%lf", &raio);
	
	area = (3.14159 * (raio * raio));
	
	printf("O valor da area e = %lf", area);
	
	
	
	
	return 0;
}
