#include <stdio.h>

int main()
{
    int num[10];
    printf("Insira 10 numeros diferentes:\n");
    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);

        for(int j=0; j<i; j++){
            if(num[i]==num[j]){
                printf("Numero ja digitado, digite outro.\n");
                i--;
                break;
            }
        }
    }

    printf("Numero digitados:\n");
    for(int i=0; i<10; i++){
        printf("[%d]", num[i]);
    }
    return 0;
}