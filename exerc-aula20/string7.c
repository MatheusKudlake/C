#include <stdio.h>
#include <string.h>

int main()
{
    char texto[50], invert[50];
    int comp;
    printf("Insira um texto:\n");
    gets(texto);

    comp=strlen(texto);

    for(int i=0; i<comp; i++){
        invert[i]=texto[(comp-1)-i];
    }

    if(strcasecmp(texto, invert)==0){
        printf("Eh um palindromo.\n");
    }else{
        printf("Nao eh um palindromo.\n");
    }

    return 0;
}