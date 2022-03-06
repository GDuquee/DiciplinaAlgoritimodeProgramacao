#include <stdio.h>

int main(){
	
	struct pessoa {
		char nome[50];
		float altura;
	};
	
	pessoa user1, user2, user3, pessoaMaisBaixa;
	
	printf("Qual o nome da primeira pessoa? ");
	scanf("%s", &user1.nome); 
	printf("Qual a altura do(a) %s? ", user1.nome);
	scanf("%f", &user1.altura);
	
	printf("Qual o nome da segunda pessoa? ");
	scanf("%s", &user2.nome); 
	printf("Qual a altura do(a) %s? ", user2.nome);
	scanf("%f", &user2.altura);

	printf("Qual o nome da terceira pessoa? ");
	scanf("%s", &user3.nome); 
	printf("Qual a altura do(a) %s? ", user3.nome);
	scanf("%f", &user3.altura);
	
	if((user1.altura <= user2.altura) && (user1.altura <= user3.altura)){
		pessoaMaisBaixa = user1;
	}else if((user2.altura <= user1.altura) && (user2.altura <= user3.altura)){
		pessoaMaisBaixa = user2;
	}else if((user3.altura <= user1.altura) && (user3.altura <= user2.altura)){
		pessoaMaisBaixa = user3;
	}

	printf("A pessoa mais baixa chama-se %s com %.2f", pessoaMaisBaixa.nome, pessoaMaisBaixa.altura);

     return 0;
}
