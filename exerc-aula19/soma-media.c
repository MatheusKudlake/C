#include <stdio.h>

int main(){
    int vetor[9], soma=0;
    double media;
    
    for(int i=0; i<10; i++){
        printf("Insira um numero para a posicao %d do vetor:\n", i);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor:\n");

    for(int i=0; i<10; i++){
        printf("[%d] ", vetor[i]);
        soma+=vetor[i];
    }

    media=(double)soma/10;
    printf("\nSoma: %d\n", soma);
    printf("Media: %.2lf\n", media);

    return 0;
}