#include <stdio.h>
 
int main() {
 
    int a, b, maior, menor;
    scanf("%d %d", &a, &b);
    maior = a;
    menor = b;
    if(b > a){
        maior = b;
        menor = a;
    }
    if(maior % menor == 0){
        printf("Sao Multiplos\n");
        return 0;
    }
    printf("Nao sao Multiplos\n");
}