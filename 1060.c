#include <stdio.h>

int main(){
    double num;
    short count = 0;
    for(int i = 0; i < 6; i++){
        scanf("%lf", &num);
        if(num > 0){
            count++;
        }
    }
    printf("%d valores positivos\n", count);
}