#include <stdio.h>

int main()
{
    int notas[3][5];

    for(int l=0; l<5; l++){
        for(int c=0; c<3; c++){
            printf("Insira a nota do bimestre %d do %dº aluno:\n", c+1, l+1);
            scanf("%d", &notas[l][c]);
        }
    }
    for(int l=0; l<5; l++){
        for(int c=0; c<3; c++){
            printf("Nota do bimestre %d do aluno %d: %d\n", c+1, l+1, notas[l][c]);
        }
        printf("---------\n");
    }
    
    return 0;
}
