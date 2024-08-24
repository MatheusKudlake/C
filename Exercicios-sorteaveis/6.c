#include <stdio.h>

int main(){
    int entrada, dia, mes, ano;

    printf("Insira a data no formato (ddmmaa):\n");
    scanf("%d", &entrada);

    ano = entrada % 100;
    entrada /= 100;

    mes = entrada % 100;
    entrada /= 100;

    dia = entrada;

    printf("Dia: %d Mês: %d Ano: %d", dia, mes, ano);

    return 0;
}