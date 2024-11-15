#include <stdio.h>

int main(){
    int pos=0;
    char entrada;
    char maiusculas[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char minusculas[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    printf("Insira uma letra:\n");
    scanf(" %c", &entrada);

    while(entrada!=maiusculas[pos] && entrada!=minusculas[pos]){
        pos++;
    }

    pos++;
    printf("Posicao no alfabeto: %d", pos);
}