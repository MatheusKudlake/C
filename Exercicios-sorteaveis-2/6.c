#include <stdio.h>

int main()
{
    int entrada=0, total=0, i=0;
    double media;

    do{
        printf("Insira um numero, ou digite -99 para sair:\n");
        scanf("%d", &entrada);
        if(entrada!=-99){
            total+=entrada;
            i++;
        }
    }while(entrada!=-99);

    media = (double) total/i;

    printf("Voce digitou %d numeros.\n", i);
    printf("A media dos numeros digitados eh: %.2lf", media);

    return 0;
}
