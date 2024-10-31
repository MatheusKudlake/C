#include <stdio.h>
#include <string.h>

int main()
{
    char texto[50], letra;
    int comp, contagem=0;

    printf("Insira um texto:\n");
    gets(texto);
    printf("Insira uma letra:\n");
    scanf(" %c", &letra);

    comp=strlen(texto);

    for(int i=0; i<comp; i++){
        if(texto[i]==letra){
            contagem++;
        }
    }
    printf("Essa letra aparece no texto %d vezes.\n", contagem);
}