#include <stdio.h>

struct pessoa{
    char nome[50];
    float altura;
    int idade;
};

int main()
{
    struct pessoa p[5];
    int maiorIdade=0, maisVelha=0;
    for(int i=0; i<5; i++){
        printf("Insira o nome da pessoa %d:\n", i+1);
        gets(p[i].nome);
        printf("Insira a altura da pessoa %d:\n", i+1);
        scanf("%f", &p[i].altura);
        printf("Insira a idade da pessoa %d:\n", i+1);
        scanf("%d", &p[i].idade);
        getchar();
    }

    for(int i=0; i<5; i++){
        if(p[i].idade>maiorIdade){
            maiorIdade=p[i].idade;
            maisVelha=i;
        }
    }

    printf("-----------------------\n");
    printf("Pessoa mais velha: %s\n", p[maisVelha].nome);
    printf("Idade: %d\n", p[maisVelha].idade);
    printf("Altura: %.2f\n", p[maisVelha].altura);

    return 0;
}
