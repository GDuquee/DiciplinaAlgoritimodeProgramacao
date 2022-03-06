#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomePessoa[50], sexo;	
	float alturaPessoa, peso;

	printf("Qual o seu nome? ");
	scanf("%s", &nomePessoa);

	printf("Qual sua altura, em centímetros? ");
	scanf("%f", &alturaPessoa);
	
	while((sexo != 'M') && (sexo != 'm') && (sexo != 'F') && (sexo != 'f')){
		printf("Qual o seu sexo? ");
		scanf("%1s", &sexo);
		}

	if ((sexo == 'M') || (sexo == 'm')){
		printf("Olá Ilmo. Sr. %s, seja bem-vindo!", nomePessoa);
		peso = (72.5 * alturaPessoa) - 58;
	}else{
		printf("Olá Ilma. Sra. %s, seja bem-vinda!", nomePessoa);
		peso = (62.1 * alturaPessoa) - 44.7;
	}
	
	printf("\nO seu peso ideal são de %.2fkg", peso); //exercício 8
	
	return0;
}
