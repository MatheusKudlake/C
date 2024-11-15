#include <stdio.h>

struct produto{
    char desc[50];
    float valor;
    int quant;
};

int main()
{
    struct produto p[2];

    for(int i=0; i<2; i++){
        printf("Insira a descrição do produto %d:\n", i+1);
        gets(p[i].desc);
        printf("Insira o valor do produto %d:\n", i+1);
        scanf("%f", &p[i].valor);
        printf("Insira a quantidade do produto %d:\n", i+1);
        scanf("%d", &p[i].quant);
        getchar();
    }

    for(int i=0; i<2; i++){
        printf("-------------------------\n");
        printf("Produto %d: %s\n", i+1, p[i].desc);
        printf("Valor: R$%.2f\n", p[i].valor);
        printf("Quantidade em estoque: %d un.\n", p[i].quant);
    }
    return 0;
}