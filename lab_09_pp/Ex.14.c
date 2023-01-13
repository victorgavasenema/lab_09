#include <stdio.h>
void array(int *vetor, int n){
    int i;
    for(i = 0; i < 5; i++){
        *(vetor + i) = n;
        printf("%d\n", *(vetor+i));   
    }
}

int main()
{
    int vetor[5];
    int i, n;
    for(i = 0; i < 5; i++){
        printf("(%d) - ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Escreva um numero: ");
    scanf("%d", &n);
    array (&vetor, n);

    return 0;
}