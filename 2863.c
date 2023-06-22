#include <stdio.h>

int main() {
    int T;
    double tempo, menor_tempo;
    while (scanf("%d", &T) != EOF) {
        menor_tempo = 11.0;
        for (int i = 0; i < T; i++) {
            scanf("%lf", &tempo);
            if (tempo < menor_tempo) {
                menor_tempo = tempo;
            }
        }
        printf("%.2lf\n", menor_tempo);
    }
}
