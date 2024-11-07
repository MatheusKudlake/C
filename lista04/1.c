#include <stdio.h>

int main()
{
    int array[10], arrayInvert[10];

    printf("Insira 10 numeros:\n");

    for(int i=0; i<10; i++){
        scanf("%d", &array[i]);
        arrayInvert[9-i]=array[i];
    }

    printf("Numeros digitados em ordem:\n");

    for(int i=0; i<10; i++){
        printf("[%d]", array[i]);
    }

    printf("\nNumeros digitados ao contrario:\n");

    for(int i=0; i<10; i++){
        printf("[%d]", arrayInvert[i]);
    }
    return 0;
}