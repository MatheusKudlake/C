#include <stdio.h>

int main(){
    int input, result;

    printf("Insira um numero para calcular a tabuada:\n");
    scanf("%d", &input);
    printf("Tabuada do %d:\n", input);
    
    for(int i = 1; i <= 10; i++){
        result = i*input;
        printf("%dx%d=%d\n", input, i, result);
    }

    return 0;
}