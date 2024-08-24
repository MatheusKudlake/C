#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Insira dois numeros:\n");
    scanf("%d %d", &n1, &n2);

    if(n1 == n2){
        printf("Sao iguais.\n");
    }else{
        printf("Sao diferentes");
    }
    
    return 0;
}
