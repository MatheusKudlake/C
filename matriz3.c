#include <stdio.h>

int main()
{
    int notas[3][5];
    double medias[5];

    for(int i=0; i<5; i++){
        medias[i]=0;
    }

    for(int l=0; l<5; l++){
        for(int c=0; c<3; c++){
            printf("Insira a nota do bimestre %d do %dº aluno:\n", c+1, l+1);
            scanf("%d", &notas[l][c]);
            medias[l]+=notas[l][c];
        }
    }

    for(int i=0; i<5; i++){
        medias[i]=(double)medias[i]/3;
    }

    for(int l=0; l<5; l++){
        for(int c=0; c<3; c++){
            printf("Nota do bimestre %d do aluno %d: %d\n", c+1, l+1, notas[l][c]);
        }
        printf("Media: %.2lf\n", medias[l]);
        if(medias[l]>=6){
            printf("Aprovado. Parabens.\n");
        }else{
            printf("Reprovado. Burro.\n");
        }
        printf("---------\n");
    }
    
    return 0;
}
