#include <stdio.h>

int main()
{
    char gabarito[10], prova[10];
    int quant, acertos=0;

    printf("Insira o gabarito da prova:\n");
    for(int i=0; i<10; i++){
        scanf(" %c", &gabarito[i]);
    }

    printf("Gabarito: ");

    for(int i=0; i<10; i++){
        printf("[%c]", gabarito[i]);
    }

    printf("\nQuantas provas serao corrigidas?\n");
    scanf("%d", &quant);

    for(int i=0; i<quant; i++){
        printf("Prova %d:\n", i+1);
        printf("Insira as alternativas:\n");
        for(int i=0; i<10; i++){

            scanf(" %c", &prova[i]);

            if(prova[i]==gabarito[i]){
                acertos++;
            }
        }

        for(int i=0; i<10; i++){
                printf("[%c]", prova[i]);
            }
            
        printf("\nAcertos: %d\n", acertos);
        acertos=0;
    }
    return 0;
}