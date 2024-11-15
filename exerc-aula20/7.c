#include <stdio.h>

int maior(int x, int y);

int main()
{
    int ent1, ent2;
    printf("Insira 2 numeros:\n");
    scanf("%d %d", &ent1, &ent2);
    printf("O maior numero entre %d e %d eh: %d", ent1, ent2, maior(ent1, ent2));
    return 0;
}

int maior(int x, int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}