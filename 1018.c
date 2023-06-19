# include <stdio.h>

int main(){
	int valor, nota, i;
	scanf("%d", &valor);
	printf("%d\n", valor);
	nota = 100;
	for(i = 0; i <= 6; i++){
		printf("%d nota(s) de R$ %d,00\n", valor/nota, nota);
		valor %= nota;
		switch(nota){
			case 100: nota = 50; break;
			case 50: nota = 20; break;
			case 20: nota = 10; break;
			case 10: nota = 5; break;
			case 5: nota = 2; break;
			default: nota = 1; break;
		}
	}
}