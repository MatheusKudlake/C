#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int entrada=0;

struct jogador{
    char nome[50];
    int tentativas[30];
    int sessoes[10][5];
};

struct jogador j1;

void RegistrarNome(){
    printf("Digite seu nome:\n");
    gets(j1.nome);
}

void GerarMenu(){
    
    printf("---------------------------------\n");
    printf("1. Iniciar novo jogo\n");
    printf("2. Ver instrucoes\n");
    printf("3. Visualizar tentativas\n");
    printf("4. Sair do jogo\n");
    printf("Selecione a opcao desejada: ");
    scanf("%d", &entrada);
    printf("---------------------------------\n");

}

void GerarInstrucoes(){
    printf("Como jogar:\n");
    printf("- O computador escolhera um numero aleatorio de 0 a 99.\n");
    printf("- O jogador devera adivinhar o numero escolhido pelo computador.\n");
    printf("- A cada palpite o computador dira se o numero escolhido eh maior ou menor que o palpite\n");
    printf("O objetivo eh adivinhar o numero escolhido com o menor numero de tentativas possivel.\n");
}


void Jogo(){
    int numero, palpite, tent=0;

    srand(time(NULL));
    numero=rand()%100;
    printf("%d\n", numero);
    printf("Adivinhe o numero escolhido: ");
    
    do{
        scanf("%d", &palpite);
        j1.tentativas[tent]=palpite;
        tent++;

        if(palpite>numero){
            printf("Digite um numero menor: ");
            
        }else if(palpite<numero){
            printf("Digite um numero maior: ");

        }else{
            printf("Parabens! O numero escolhido era %d!\n", numero);
            printf("Suas tentativas foram:\n");
            for(int i=0; i<tent; i++){
                printf("[%d] ", j1.tentativas[tent]);
            }
            printf("\n");
        }
    }while(palpite!=numero);
}

int main()
{
    RegistrarNome();
    
    do{
        GerarMenu();
        switch (entrada){
            case 1:
                Jogo();
                break;
            case 2:
                GerarInstrucoes();
                break;
            case 3:
                
                break;
            case 4:
                printf("Saindo do jogo...\n");
        };
    }while(entrada!=4);


    return 0;
}