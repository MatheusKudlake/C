#include <stdio.h>

int main()
{
    int x, y, resultado=1;

    printf("Insira o valor de X:\n");
    scanf("%d", &x);
    printf("Insira o valor de Y:\n");
    scanf("%d", &y);

    for(int i = 0; i < y; i++){
        resultado*=x;
    }

    printf("%d elevado a %d eh igual a %d.\n", x, y, resultado);

    return 0;
}
