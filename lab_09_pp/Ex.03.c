#include <stdio.h>

int main()
{
    int x, y;
    int *ponteiroint;
    
    printf("Escreva dois valores inteiros: ");
    scanf("%d %d", &x, &y);
    
    if (x >= y){
        ponteiroint = &x;
    }
    if (x < y){
        ponteiroint = &y;
    }
    printf("Maior: %d\n", *ponteiroint);
    
    return 0;
}