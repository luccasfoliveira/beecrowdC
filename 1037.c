# include <stdio.h>

int main(){
	double n;
	scanf("%lf", &n);
	if(n < 0 || n > 100){
		printf("Fora de intervalo\n");
	}
	else if(n <= 25.){
		printf("Intervalo [0,25]\n");
	}
	else if(n <= 50.0){
		printf("Intervalo (25,50]\n");
	}
	else if(n <= 75.0){
		printf("Intervalo (50,75]\n");
	}
	else{
		printf("Intervalo (75,100]\n");
	}
}