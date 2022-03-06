#include<stdio.h>
#include<iostream>
int main(){
	int Total, Rolos, Avulso;
	printf("Insira o total de fio em metros:");
	scanf("%d", &Total);
	Rolos = Total/50;
	Avulso = Total/50;
	printf("O total de rolos e:%d\n", Rolos);
	printf("O total de fio avulso em metros e:%d\n", Avulso);
	
	return 0;
}
