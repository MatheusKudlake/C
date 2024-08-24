#include <stdio.h>

int main(){
    int num, dezena;
 
    printf("Digite um numero de 3 digitos:\n");
    scanf("%d", &num);
    
    while (num > 9){
        dezena = num % 10;
        num /= 10;
    }

    printf("A casa da dezena desse numero eh: %d", dezena);

    return 0;
}