#include <stdio.h>
#include <string.h>

int main()
{
    char texto[50];
    int comp;
    printf("Insira um texto:\n");
    gets(texto);
    comp=strlen(texto);

    for(int i=0; i<comp; i++){
        if((i+1)%2!=0){
            printf("%c", texto[i]);
        }
    }
    return 0;
}