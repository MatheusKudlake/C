#include <stdio.h>

int main()
{
    int entrada, maior=0, menor=0, total=0;
    double media;

    for(int i = 0; i < 10; i++){
        printf("Insira um numero:\n");
        scanf("%d", &entrada);
        total+=entrada;
        if(entrada<menor){
            menor=entrada;
        }
        if(entrada>maior){
            maior=entrada;
        }
    }
    media = (double) total/10;
    
    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);
    printf("A media dos numeros eh: %.2lf\n", media);
    
    return 0;
}
