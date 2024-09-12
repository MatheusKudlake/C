#include <stdio.h>

int main()
{
    char entrada;
    int tinto=0, branco=0, rose=0, total;

    do{
        printf("Insira T para vinho tinto, B para branco, R para rose ou F para finalizar:\n");
        scanf(" %c", &entrada);
        
        if(entrada != 'f' && entrada != 'F'){
            switch(entrada){
                case 'T':
                case 't':
                    tinto++;
                    break;
                case 'B':
                case 'b':
                    branco++;
                    break;
                case 'R':
                case 'r':
                    rose++;
                    break;
                default:
                    printf("Opcao invalida.\n");
                }
        }
    }while(entrada !='f' && entrada!='F');

    total = tinto + branco + rose;

    printf("O total de vinhos tintos eh de: %d\n", tinto);
    printf("O total de vinhos brancos eh de: %d\n", branco);
    printf("O total de vinhos rose eh de: %d\n", rose);
    printf("O total de vinhos na adega eh de: %d\n", total);

    return 0;
}
