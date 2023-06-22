#include <stdio.h>
 
int main() {
 
    int a, b, c, d, h, m;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    h = c-a;
    if(h < 0){
        h = (c+24)-a;
    }
    m = d-b;
    if (m < 0){
        m = (60+d)-b;
        if(h==0){
            h = 23;
        }
        else{
            h -= 1;
        }
    }
    if(a==b && b==c && c==d){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
}