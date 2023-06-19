#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d eh o maior\n", (((A + B + abs(A - B))/2) + C + abs(((A + B + abs(A - B))/2) - C))/2);
    return 0;
}