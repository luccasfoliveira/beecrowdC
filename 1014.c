#include <stdio.h>

int main() {
    
    int A;
    double B, reasultado;
    scanf("%d %lf", &A, &B);
    reasultado = A / B;
    printf("%.3lf km/l\n", reasultado);
    return 0;
}