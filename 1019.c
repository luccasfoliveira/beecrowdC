# include <stdio.h>
# include <math.h>

int main(){
	int horas, numero, minutos, segundos;
	scanf("%d", &numero);
	horas = numero / pow(60, 2);
	numero -= horas * pow(60, 2);
	minutos = numero / 60;
	segundos = numero - minutos * 60;
	printf("%d:%d:%d\n", horas, minutos, segundos);
}