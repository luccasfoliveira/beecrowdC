# include <stdio.h>

int main(){
	double valor;
	int nota, i;
	scanf("%lf", &valor);
	nota = 100;
	printf("NOTAS:\n");
	for(i = 0; i <= 5; i++){
		printf("%d nota(s) de R$ %d.00\n", (int)(valor/nota), nota);
		valor -= ((int)valor/nota * nota);
		switch(nota){
			case 100: nota = 50; break;
			case 50: nota = 20; break;
			case 20: nota = 10; break;
			case 10: nota = 5; break;
			default: nota = 2; break;
		}
	}
	nota = 100;
	printf("MOEDAS:\n");
	for(i = 0; i < 6; i++){
		printf("%d moeda(s) de R$ %.2lf\n", (int)(valor*100/nota), nota/100.0);
		valor -= ((int)(valor * 100/ nota) * nota / 100.0);
		switch(nota){
			case 100: nota = 50; break;
			case 50: nota = 25; break;
			case 25: nota = 10; break;
			case 10: nota = 5; break;
			case 5: nota = 1; break;
		}
	}
}
