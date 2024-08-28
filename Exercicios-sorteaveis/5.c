#include <stdio.h>

int main(){
    int num, res;
 
    printf("Digite um numero de 3 digitos:\n");
    scanf("%d", &num);

    if (num < 100 || num > 999){ 
        printf("O numero deve possuir 3 casas decimais.\n");
        return 1;
    }

    res = (num/10) % 10;

    printf("A casa das dezenas do numero eh %d.\n", res);
    return 0;
}