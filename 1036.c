#include <stdio.h>
#include <math.h>
 
int main() {
     
    double A, B, C, delta, r1, r2;
    scanf("%lf %lf %lf", &A, &B, &C);
    delta = pow(B, 2) - (4.0 * A * C);
    if(delta < 0 || A == 0){
        printf("Impossivel calcular\n");
        return 0;
    }
    delta = sqrt(delta);
    r1 = (-B + delta) / (2.0 * A);
    r2 = (-B - delta) / (2.0 * A);

    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
}