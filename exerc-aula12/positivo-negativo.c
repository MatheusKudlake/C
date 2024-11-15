#include <stdio.h>

int main(){
    int input, quantPos=0, somaPos=0, quantNeg=0;

    for(int i = 0; i < 5; i++){
        printf("Insira um numero inteiro:\n");
        scanf("%d", &input);
        
        if(input>0){
            somaPos+=input;
            quantPos++;
        }else{
            quantNeg++;
        }
    }

    printf("Voce digitou %d numeros negativos.\n", quantNeg);
    printf("A soma dos numeros positivos eh de %d.\n", somaPos);

    return 0;
}