#include <stdio.h>

int main(){
    int vetor[9], pares=0, mult5=0;

    for(int i=0; i<10; i++){
        printf("Insira um numero para a posicao %d do vetor:\n", i);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor:\n");

    for(int i=0; i<10; i++){
        printf("[%d] ", vetor[i]);
        if(vetor[i]%2==0){
            pares++;
        }
        if(vetor[i]%5==0){
            mult5++;
        }
    }

    printf("\nQuantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros multiplos de 5: %d\n", mult5);

    return 0;
}