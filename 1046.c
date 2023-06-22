#include <stdio.h>
 
int main() {
 
    int a, b, hora;
    scanf("%d %d", &a, &b);
    if(a > b){
        hora = 24 - (a-b);
        printf("O JOGO DUROU %d HORA(S)\n", hora);
    }
    else if(a < b){
        hora = ((24-a)+b)-24;
        printf("O JOGO DUROU %d HORA(S)\n", hora);
    }
    else{
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

}