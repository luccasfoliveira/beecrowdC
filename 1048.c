#include <stdio.h>

int main(){
    double valor, reajuste;
    int per = 0;
    scanf("%lf", &valor);
    if(valor <= 400){
        reajuste = 0.15;
        per = 15;
    }
    else if(valor <= 800){
        reajuste = 0.12;
        per = 12;
    }
    else if(valor <= 1200){
        reajuste = 0.10;
        per = 10;
    }
    else if(valor <= 2000){
        reajuste = 0.07;
        per = 7;
    }
    else{
        reajuste = 0.04;
        per = 4;
    }
    printf("Novo salario: %.2lf\n", valor * (reajuste+1));
    printf("Reajuste ganho: %.2lf\n", valor * (reajuste));
    printf("Em percentual: %d %%\n", per);
}