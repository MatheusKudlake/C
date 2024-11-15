#include <stdio.h>

int main()
{
    char texto[50];

    printf("Insira um texto:\n");
    scanf("%s", texto);

    int i=0;
    while(texto[i]!=0){
        i++;
    }

    printf("O tamanho da string eh: %d\n", i);
    return 0;
}