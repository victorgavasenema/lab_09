Ex. 16
#include <stdio.h>

int main()
{
    int A;
    int *B = &A;
    int **C = &B;
    int ***D = &C;
    
    printf("Escreva um valor para A:");
    scanf("%d", &A);
    
    printf("A: %d, B: %d, C:%d, D:%d", A, (*B *2), (**C * 3), (***D * 4));

    return 0;
}