//Exercício 6 lista 3 nota de alunos
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){	
	float nota,alunoF, alunoM, notaF, notaM, mediaM, mediaF;
	int i;
	char sexo, aux;
	i=1;
	alunoF = 0;
	alunoM = 0;
	notaF = 0;
	notaM = 0;
	mediaF = 0;
	mediaM = 0;
	
	do{	
		printf("Digite o sexo do aluno usando M para masculino e F para feminino: ", i);
		scanf("%s", &sexo);
		fflush(stdin);
		printf("Digite a nota do aluno: ", i);
		scanf("%f", &nota);
		sexo = toupper(sexo);
			do{
				if (sexo!= 'F'&& sexo != 'M'){
					printf("Sexo inválido!Informe o sexo do aluno usando M para masculino e F para feminino: ", i);
					scanf("%c", &sexo);
					fflush(stdin);
					sexo = toupper(sexo);
				}
			}
			while(sexo!= 'F'&& sexo != 'M');
	
		if(sexo == 'F'){
			alunoF++;
			notaF = notaF + nota;
			}else if(sexo == 'M'){
			alunoM++;
			notaM = notaM + nota;
			}
			
		if(alunoM ==0){
			mediaM = 0;
			}else {
			mediaM = notaM/alunoM;
			}
		if(alunoF ==0){
			mediaF = 0;
			}else {
			mediaF = notaF/alunoF;
			}
		i++;
			
	}while(nota >=0); 
	printf("Média dos alunos: %.2f", mediaM);
	printf("Média das alunas: %.2f", mediaF);
}
