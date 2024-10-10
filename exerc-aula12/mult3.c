#include <stdio.h>

int main()
{
    int input;
    
    printf("Insira um numero:\n");
    scanf("%d", &input);
    printf("Numeros divisiveis por 3:\n");

    for(int i = 0; i <= input; i++){
        if(i % 3 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}   
