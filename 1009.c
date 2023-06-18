#include <stdio.h>
 
int main() {
    double A, B, TOTAL;
    char name;
    scanf("%s %lf %lf", &name, &A, &B);
    TOTAL = A+B*.15;
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}