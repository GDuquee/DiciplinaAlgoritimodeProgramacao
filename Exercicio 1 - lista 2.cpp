#include <stdio.h>
#include <locale.h>
int main () {
	 setlocale (LC_ALL, "Portuguese");
	 int VelocidadeCarro;
	 char PlacaCarro [8];
	 
	 printf("Qual a velocidade do carro, em km/h?");
	 scanf("%d", &velocidadeCarro);
	 
	 printf("Qual a placa do carro, no padrão XXX-0000?");
	 scanf("%s", &placaCarro);
	 
	 if(velocidadeCarro > 80){
	 	double percentual = ((velociadadeCarro - 80) / 80) * 100;
	 	printf("O carro, de placa %s, estava à %dkm/h, excedendo em %.0lf%% o limite e foi multado.", placaCarro, velocidadeCarro, percentual);
	 }else{
	 	printf("O carro, de placa %s, estava à %dkm/h no Eixo Rodoviário, portanto não foi multado.", placaCarro, velocidadeCarro); //exercício 5
	 }
	  {
	return 0;
}
