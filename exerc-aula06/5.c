#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, r, s;

    printf("Insira o valor do primeiro numero:\n");
    scanf("%d", &a);

    printf("Insira o valor do segundo numero:\n");
    scanf("%d", &b);

    printf("Insira o valor do terceiro numero:\n");
    scanf("%d", &c);

    r = pow(a+b, 2);
    s = pow(b+c, 2);
    
    printf("-------------\n");
    printf("R= %d\tS=%d\n", r, s);
    printf("-------------\n");
    return 0;
}