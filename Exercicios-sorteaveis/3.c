#include <stdio.h>

int main(){

    int num, res;
    printf("Insira um valor real:\n");
    scanf("%d", &num);

    res = num / 100 * 4;

    printf("%d porcento desse valor eh: %d", 4, res);
    
    return 0;
}