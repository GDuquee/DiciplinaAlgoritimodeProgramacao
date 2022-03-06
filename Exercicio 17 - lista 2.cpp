#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	int anoNascimento, anoAtual, diasVividos;
	
	printf("Qual o seu nome? ");
	scanf("%s", &nome);
	
	printf("Qual seu ano de nascimento? ");
	scanf("%d", &anoNascimento);
	
	printf("Qual o ano atual? ");
	scanf("%d", &anoAtual);
	
	diasVividos = (anoAtual - anoNascimento) * 365; // multiplico por "365" pq o ano tem 365 dias
	
	if(diasVividos <= 0) {
		printf("Olá, me informa os anos corretos, por favor!");
	}else{
		printf("%s já viveu aproximadamente %d dias.", nome, diasVividos);
	}
	 return 0;
}
