#include <stdio.h>

void iguala_valores(int n, int *vetor){
  int i;
  for(i = 0; i < n; i++){
      printf("%d", *(vetor + i));
  }
}

int main()
{
    int vetor[5];
    int i;
    
    for(i = 0; i < 5; i++){
        printf("%d - ", i);
        scanf("%d", &vetor[i]);
    }
    iguala_valores (i, &vetor);
    return 0;
}