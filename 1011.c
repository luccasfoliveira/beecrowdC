#include <stdio.h>
#define PI 3.14159

int main() {
    
    double raio, reasultado;
    scanf("%lf", &raio);
    reasultado = (4.0/3.0) * PI * raio * raio * raio;
    printf("VOLUME = %.3lf\n", reasultado);
 
    return 0;
}