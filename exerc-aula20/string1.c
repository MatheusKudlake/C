#include <stdio.h>
#include <string.h>

int main()
{
    char texto[50];
    printf("Insira um texto:\n");
    gets(texto);
    printf("As quatro primeiras letras do texto sao: %.4s", texto);
    return 0;
}   