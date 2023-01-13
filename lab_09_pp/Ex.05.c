#include <stdio.h>

int inverte_valores(int *a, int *b){
    int aux;
    if (*a <= *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main()
{
    int x, y;
    printf("Escreva 2 valores inteiros: ");
    scanf("%d %d", &x, &y);
    inverte_valores (&x, &y);
    
    printf("Maior: %d Menor: %d", x, y);
    return 0;
}