#include <stdio.h>

int main(){
    int primtermo, razao, ordem, res;

    printf("Insira o valor do primeiro termo da progressao:\n");
    scanf("%d", &primtermo);

    printf("Insira o valor da razao:\n");
    scanf("%d", &razao);

    printf("Insira o numero de ordem da progressao:\n");
    scanf("%d", &ordem);

    res = primtermo + (ordem - 1) * razao;

    printf("O %dº termo dessa progressao eh %d", ordem, res);
    return 0;
}