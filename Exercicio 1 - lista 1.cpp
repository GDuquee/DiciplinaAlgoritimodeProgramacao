#include<stdio.h>

int main() {
	int hora, minuto, segundo;
	printf("Informe hora");
	scanf("%d", &hora);
	
	minuto = hora*60;
	segundo = hora*3600;
	
	printf("Hora: %d minutos e %d segundos", minuto, segundo);
	
	return 0;
}
