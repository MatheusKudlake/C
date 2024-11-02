#include <stdio.h>

int fatorial(int x);

int main()
{  
    int entrada;
    printf("Insira um numero:\n");
    scanf("%d", &entrada);
    printf("Fatorial de %d: %d", entrada, fatorial(entrada));
    return 0;
}

int fatorial(int x)
{
    int fatorial=1;
    for(int i=1; i<=x; i++){
        fatorial*=i;
    }
    return fatorial;
}