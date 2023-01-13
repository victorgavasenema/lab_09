#include <stdio.h>

void soma(int *a, int *b){
    *a = *a + *b;
}

int main()
{
    int x, y;
    printf("Escreva 2 valores inteiros: ");
    scanf("%d %d", &x, &y);
    soma (&x, &y);
    
    printf("A: %d B: %d", x, y);
    return 0;
}