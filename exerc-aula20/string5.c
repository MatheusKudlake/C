#include <stdio.h>
#include <string.h>

int main()
{
    char texto[50], txtinvertido[50];
    int comp;
    printf("Insira um texto:\n");
    gets(texto);

    comp=strlen(texto);

    for(int i=0; i<comp; i++){
        txtinvertido[i]=texto[(comp-1)-i];
    }

    printf("Texto digitado: %s\n", texto);
    printf("Texto invertido: %s", txtinvertido);
    return 0;
}