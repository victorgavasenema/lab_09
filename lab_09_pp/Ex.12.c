#include <stdio.h>

int ordena_valor(int *a, int *b, int *c){
    int aux;
    if(*a >= *b){
        if(*c > *b){
            aux = *b;
            *b = *c;
            *c = aux;
        }
    }
    //a recebe o valor de b
    if(*b > *a){
        if(*a > *c){
            aux = *a;
            *a = *b;
            *b = aux;
        }
        if(*c > *a){
            aux = *a;
            *a = *b;
            *b = *c;
            *c = aux;
        }
    }
    if(*c > *a && *c > *b){
        if(*a > *b){
            aux = *a;
            *a = *c;
            *b = *b;
            *c = aux;
        }
        if (*b > *a){
            aux = *a;
            *a = *c;
            *b = *b;
            *c = aux;
        }
    }
}

int main()
{
    int x, y, z;
    
    printf("Escreva 3 valore inteiros:");
    scanf("%d %d %d", &x, &y, &z);
    ordena_valor(&x, &y, &z);
    printf("A:%d B:%d C:%d", x, y, z);
    return 0;
}