#include <stdio.h>

int main()
{
    int vetor[5];
    int i, *ponteiro;
    
    ponteiro = vetor;
    
    for(i = 0; i <  5; i++){
        printf("Escreva o valor da (%d): ", i);
        scanf("%d", &*(ponteiro + i));
    }
    for (i = 0; i < 5; i++){
        if(vetor[i] % 2 == 0){
            printf("(%d) : %d\n", i,  (ponteiro + i));
        }
    }

    return 0;
}