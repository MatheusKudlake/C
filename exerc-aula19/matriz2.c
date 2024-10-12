#include <stdio.h>

int main(){
    int matriz[5][3];

    for(int i=0; i<5; i++){
        for(int j=0; j<2; j++){
            printf("Insira o valor da nota %d do aluno %d:\n", j+1, i+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<2; j++){
            printf("Nota %d Aluno %d: [%d]\n", j+1, i+1, matriz[i][j]);
        }
    }
    return 0;
}