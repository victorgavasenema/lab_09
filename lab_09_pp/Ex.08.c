#include <stdio.h>

int main()
{
    float vetor[10];
    int i;
    for (i = 0; i < 10; i++){
        printf("%d\n", &vetor[i]);
    }

    return 0;
}