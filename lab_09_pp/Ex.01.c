#include <stdio.h>

int main()
{
    int x;
    float y;
    char z;
    
    printf("Escreva um valor inteiro: ");
    scanf("%d", &x);
    printf("Escreva um valor valor real: ");
    scanf("%f", &y);
    printf("Escreva um char: ");
    scanf(" %c", &z);
    
    int *ponteiroint = &x;
    float *ponteirofloat = &y;
    char *ponteirochar = &z;
    
    printf("Inteiro: %d/n", *ponteiroint);
    printf("Real: %f/n", *ponteirofloat);
    printf("Char: %c/n", *ponteirochar);
    return 0;
}