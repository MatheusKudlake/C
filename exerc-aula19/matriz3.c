#include <stdio.h>

int main(){
    int nota[5][3];
    float soma[5][3], media[5][3];

    for(int i=0; i<5; i++){ //define a matriz soma para 0
        for(int j=0; j<2; j++){
            soma[i][j]=0;
        }
    }

    for(int i=0; i<5; i++){ //lê os dados do usuário
        for(int j=0; j<2; j++){
            printf("Insira o valor da nota %d do aluno %d:\n", j+1, i+1);
            scanf("%d", &nota[i][j]);
            soma[i][j]+=nota[i][j];
        }
    }

    for(int i=0; i<5; i++){ //exibe a nota
        for(int j=0; j<2; j++){
            printf("Nota %d Aluno %d: [%d]\n", j+1, i+1, nota[i][j]);
        }
    }

    printf("-----------------\n");

    for(int i=0; i<5; i++){ //calcula a media
        for(int j=0; j<2; j++){
            media[i][j]=soma[i][j]/3;
        }
    }

    for(int i=0; i<5; i++){ //exibe a media
        printf("Media do aluno %d: %.2f\n", i+1, media[i][j]);
    }

    return 0;
}