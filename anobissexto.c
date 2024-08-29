#include <stdio.h>

int main()
{   
    int entrada, dia, mes, ano, anoCompleto, bissexto;
    printf("Insira uma data no formato (ddmmaa):\n");
    scanf("%d", &entrada);
    if(entrada > 999999 || entrada < 10000){
        printf("Formato invalido.\n");
    }

    anoCompleto = ano + 2000;

    dia = (entrada / 10000) % 100;
    mes = (entrada / 100) % 100;
    ano = entrada % 100;

    if(mes < 1 || ano > 12){
        printf("Mes invalido.\n");
    }

    if()

    if(anoCompleto % 4 == 0 && anoCompleto % 100 && anoCompleto % 400){
        bissexto = 1;
    }else{
        bissexto = 0;
    }

    if()

    return 0;
}
