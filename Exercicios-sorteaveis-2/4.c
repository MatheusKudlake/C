#include <stdio.h>

int main()
{
    int entrada=0, n1, n2;
    double resultado;
    
    do{
        printf("Escolha a operacao desejada:\n");
        printf("1-Multiplicar\n");
        printf("2-Somar\n");
        printf("3-Subtrair\n");
        printf("4-Dividir\n");
        printf("5-Sair\n");

        scanf("%d", &entrada);

        if(entrada>0 && entrada<5){
            printf("Insira o valor do primeiro numero:\n");
            scanf("%d", &n1);
            printf("Insira o valor do segundo numero:\n");
            scanf("%d", &n2);
        }

        switch(entrada){
            case 1:
                resultado=n1*n2;
                printf("%d x %d = %.0lf\n", n1, n2, resultado);
                break;
            case 2:
                resultado=n1+n2;
                printf("%d + %d = %.0lf\n", n1, n2, resultado);
                break;
            case 3:
                resultado=n1-n2;
                printf("%d - %d = %.0lf\n", n1, n2, resultado);
                break;
            case 4:
                resultado=n1/n2;
                printf("%d / %d = %.0lf\n", n1, n2, resultado);
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Valor de entrada invalido.\n");
        }

    }while(entrada!=5);
    
    return 0;
}