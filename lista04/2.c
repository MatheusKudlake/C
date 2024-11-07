#include <stdio.h>

int main()
{
    int num[10], entrada, menores=0, igual=0;
    printf("Insira 10 numeros:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);
    }

    printf("Insira um numero:\n");
    scanf("%d", &entrada);

    printf("Numeros maiores que o digitado:\n");

    int haMaiores=0;
    for(int i=0; i<10; i++){ 
        if(num[i]>entrada){
            printf("[%d]", num[i]);
            haMaiores++;
        }else if(num[i]<entrada){
            menores++;
        }else if(num[i]==entrada){
            igual++;
        }
    }

    if(haMaiores==0){
        printf("Nao ha nenhum numero maior que o digitado.\n");
    }
    printf("\nHa %d numeros menores que o digitado.\n", menores);
    printf("O numero digitado aparece %d vezes no vetor.\n", igual);

    return 0;
}