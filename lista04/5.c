#include <stdio.h>

int main()
{
    int lin, col, nulos=0;
    printf("Insira a quantidade de linhas da matriz:\n");
    scanf("%d", &lin);
    printf("Insira a quantidade de colunas da matriz:\n");
    scanf("%d", &col);

    int matriz[lin][col];

    printf("Insira os numeros da matriz:\n");

    for(int l=0; l<lin; l++){
        for(int c=0; c<col; c++){
            scanf("%d", &matriz[l][c]);
            if(matriz[l][c]==0){
                nulos++;
            }
        }
    }
    for(int l=0; l<lin; l++){
        for(int c=0; c<col; c++){
            printf("[%d]", matriz[l][c]);
        }
        printf("\n");
    }
    printf("Numero de valores nulos: %d", nulos);
    return 0;
}
