#include <stdio.h>
 
int main() {
    int A, B, D, E;
    double C, F, TOTAL;
    scanf("%d %d %lf %d %d %lf", &A, &B, &C, &D, &E, &F);
    TOTAL = B*C+E*F;
    printf("VALOR A PAGAR: R$ %.2lf\n", TOTAL);
    return 0;
}