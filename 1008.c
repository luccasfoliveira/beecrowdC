#include <stdio.h>
 
int main() {
 
    int A, B;
    double C, M;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%lf", &C);
    M = B*C;
    printf("NUMBER = %d\n", A);
    printf("SALARY = U$ %.2lf\n", M);
    return 0;
}