#include <stdio.h>

void troca(int *a,int *b);
int main(){
    int a,b;
    printf("Digite os valores de a e b");
    scanf("%d %d",&a,&b);
    troca(&a,&b);
    
    printf("Valor de a: %d Valor de b: %d",a,b);
    return 0;
}

void troca(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}