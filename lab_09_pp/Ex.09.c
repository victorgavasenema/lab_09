#include <stdio.h>

int main()
{
    float vetor[3][3];
    int i, j;
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\n", &vetor[i][j]);
        }
    }

    return 0;
}