//Exercicio 9 lista 3
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	int idade, maiorIdade, i=1;
	char sexo, corOlhos[10], corCabelos[10];
	float porcentagem, femLoiraOlhoVerde;
	
	femLoiraOlhoVerde=0;

	printf("Pesquisa sobre os habitantes. Responda as questões a seguir. \n");
	printf("Insira o sexo sendo F para feminino e M para masculino: ");
	scanf("%s", &sexo);
	fflush(stdin);
	sexo = toupper(sexo);
	printf("Informe a cor dos olhos sendo as opcoes: \n [azul, verde, castanho, preto]: ");
	fgets(corOlhos, 10, stdin);
	fflush(stdin);
	printf("Informe a cor do cabelo sendo as opcoes: \n [loiros, castanhos, pretos]");
	fgets(corCabelos, 10, stdin);
	fflush(stdin);
	printf("Informe a idade: ");
	scanf("%d", &idade);
	fflush(stdin);

	if((idade>=18 || idade <=35) && sexo=='F'&& strcmp(corOlhos, "verdes")==1 && strcmp(corCabelos, "loiros")==1)
		femLoiraOlhoVerde++;	
	if(i==1)
		maiorIdade = idade;
	if(maiorIdade<idade)
		maiorIdade = idade;
	
	i++;

	
	porcentagem = (femLoiraOlhoVerde/i)*100;
	
	printf("A maior idade dos habitantes pesquisados e: %d", maiorIdade);
	printf("A porcentagem de individuos do sexo feminino cuja idade esta entre 18 e 35 anos e que tenham olhos verdes e cabelos loiros é: %.1f%", porcentagem);
}
