#include <stdio.h>

int somaMuito(int x);

int main()
{
    printf("Soma de tudo:%d", somaMuito(5));
    return 0;
}

int somaMuito(int x){
    int soma=0;
    for(int i=0; i<=x; i++){
        soma+=i;
    }
    return soma;
}