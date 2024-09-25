#include <stdio.h>
#include <stdbool.h>

int main()
{
    int entrada, dia, mes, ano;
    bool bissexto;
    bool valido = true;

    printf("Insira uma data no formato (ddmmaa):\n");
    scanf("%d", &entrada);

    dia = (entrada/10000) % 100;
    mes = (entrada/100) % 100;
    ano = entrada % 100;

    if(entrada > 999999){
        valido = false;
    }

    if(mes < 1 || mes > 12){
        valido = false;
    }

    if(ano % 4 == 0){
        bissexto = true;
    }else{
        bissexto = false;
    }

    if(dia < 1 || dia > 31){
        valido = false;
    }
    if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if (dia == 31){
            valido = false;
        }
    }
    if(mes == 2){
        if(dia == 30){
            valido = false;
        }
        if (dia == 29 && bissexto == false){
            valido = false;
        }
    }

    if(valido){
        printf("Formato valido.\n");
    }else{
        printf("Formato invalido.\n");
    }


    return 0;
}
