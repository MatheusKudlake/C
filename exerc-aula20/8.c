#include <stdio.h>

int maior(int x, int y);
int maior3(int x, int y, int z);

int main()
{
    int ent1, ent2, ent3;
    printf("Insira 3 numeros:\n");
    scanf("%d %d %d", &ent1, &ent2, &ent3);
    printf("O maior numero entre %d, %d e %d eh: %d", ent1, ent2, ent3, maior3(ent1, ent2, ent3));
    return 0;
}

int maior(int x, int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}

int maior3(int x, int y, int z){
    int maior1=maior(x, y);
    return maior(maior1, z);
}