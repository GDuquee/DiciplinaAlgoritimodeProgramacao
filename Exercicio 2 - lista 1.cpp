#include<stdio.h>
int main(){
	double Raio, Area;
	printf("Digite o valor do raio:\n");
	scanf("%lf", &Raio);
	Area = 3.14 * Raio * Raio;
	printf("Valor do raio: %lf\n", Raio);
	printf("Valor da area: %lf\n", Area);
	return 0;
}
