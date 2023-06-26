#include <stdio.h>

int main(){
    double num, soma = 0, count = 0;
    for(int i = 0; i < 6; i++){
        scanf("%lf", &num);
        if(num > 0){
            count++;
            soma += num;
        }
    }
    printf("%d valores positivos\n", (int)count);
    printf("%.1lf\n", soma/count);
}