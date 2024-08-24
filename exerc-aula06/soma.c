#include <stdio.h>

int main()
{
    int n1, n2, soma;
    printf("Insira dois numeros:\n");
    scanf("%d %d", &n1, &n2);

    soma = n1 + n2;

    if(soma > 10){
        printf("%d + %d = %d\n", n1, n2, soma);
    }else{
        printf("Soma menor que 10\n");
    }
    return 0;
}
