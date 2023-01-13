#include <stdio.h>

int soma_dobro(int *a, int *b){
    *a *= 2;
    *b *= 2;
    return *a + *b;
}

int main()
{
    int x, y, soma;
    printf("Escreva 2 valores inteiros: ");
    scanf("%d %d", &x, &y);
    soma = soma_dobro (&x, &y);
    
    printf("Dobro de A: %d Dobro de B: %d Soma do Dobro: %d", x, y, soma);
    return 0;
}