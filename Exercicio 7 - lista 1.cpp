#include<stdio.h>
#include<iostream>
#include<cstring>
int main(){
	char Nome[30],Genero;
	int Matricula, HorasTrabalhadas,ValorPorHora,Salario;
	
	
	printf("insira seu nome: ");
	gets(Nome);
	
	printf("insira seu genero(M para masculino e F para feminino): ");
	scanf("%c", &Genero);
	
	printf("insira sua matricula: ");
	scanf("%d", &Matricula);
	
	printf("insiras o numero de horas trabalhadas: ");
	scanf("%d", &HorasTrabalhadas);
	
	printf("insira o valor que recebe por hora: ");
	scanf("%d", &ValorPorHora);
	
	Salario = HorasTrabalhadas*ValorPorHora;

	system("cls");
	printf("nome:%s\n", Nome);
	printf("genero:%c\n", Genero);
	printf("matricula:%d\n", Matricula);
	printf("horas trabalhadas:%d\n", HorasTrabalhadas);
	printf("valor por hora:%d\n", ValorPorHora);
	printf("salario:%d\n", Salario);
	
	system("pause");
	return 0;
}
	
