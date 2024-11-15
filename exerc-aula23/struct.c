#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[50];
    int ra;
    int curso;
};

int main()
{
    struct aluno a1;
    printf("Digite o nome do aluno:\n");
    gets(a1.nome);

    printf("Digite o RA do aluno:\n");
    scanf("%d", &a1.ra);

    printf("Digite o ID do curso:\n");
    scanf("%d", &a1.curso);

    printf("------------------------\n");

    printf("Nome do aluno: %s\n", a1.nome);
    printf("RA do aluno: %d\n", a1.ra);
    printf("Curso: %d\n", a1.curso);
    return 0;
}