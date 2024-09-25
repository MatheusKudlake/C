#include <stdio.h>
#include <stdbool.h>

int main()
{
    int entrada, dia, mes, ano;
    bool bissexto;
    bool valido;

    printf("Insira uma data no formato (ddmmaa):\n");
    scanf("%d", &entrada);
    printf("---------------------------\n");

    dia = (entrada/10000) % 100;
    mes = (entrada/100) % 100;
    ano = entrada % 100;

    if(ano % 4 == 0){
        bissexto = true;
    }else{
        bissexto = false;
    }

    if(entrada > 999999){
        valido = false;
    }else if(mes < 1 || mes > 12){
        valido = false;
    }else if(dia < 1 || dia > 31){
        valido = false;
    }else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia >= 31){
        valido = false;
    }else if(mes == 2){
        if(dia >= 30 || (dia == 29 && bissexto == false)){
            valido = false;
        }
    }else{
        valido = true;
    }

    if(valido){
        printf("Formato valido.\n");
        printf("---------------------------\n");
    }else{
        printf("Formato invalido.\n");
        printf("---------------------------\n");
    }

    return 0;
}
