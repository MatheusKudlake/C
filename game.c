#include <stdio.h>

int entrada=0;

struct jogador{
    char nome[50];
    int tentativas[10][2];
};

struct jogador j1;

void RegistrarNome(){
    printf("Digite seu nome:\n");
    gets(j1.nome);
}

void GerarMenu(){
    printf("Selecione a opcao desejada:\n");
    printf("1. Iniciar novo jogo\n");
    printf("2. Ver instrucoes\n");
    printf("3. Sair do jogo\n");
    scanf("%d", entrada);
}

void Jogo(){

}

int main()
{
    RegistrarNome();
    
    do{
        GerarMenu();
        switch (entrada){
            case 1:
                
        }
    }while(entrada!=3);


    return 0;
}