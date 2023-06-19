# include <stdio.h>

int main(){
	int tempo, distancia;
	scanf("%d %d", &tempo, &distancia);
	double velocidade = tempo * distancia / 12.0;
	printf("%.3lf\n", velocidade);
}