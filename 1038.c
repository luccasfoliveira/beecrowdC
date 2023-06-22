#include <stdio.h>
 
int main() {
    
    int A, B;
    double prod;
    scanf("%d %d", &A, &B);
    switch(A){
        case 1: prod = B * 4.0; break;
        case 2: prod = B * 4.5; break;
        case 3: prod = B * 5.; break;
        case 4: prod = B * 2.; break;
        default: prod = B * 1.5; break;
    }
    printf("Total: R$ %.2lf\n", prod);
}