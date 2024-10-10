#include <stdio.h>

int main() {
    int limite;
    int a = 0, b = 1, proximo;

    // Solicita ao usuário o valor do limite
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &limite);

    // Verifica se o valor inserido é positivo
    if (limite < 1) {
        printf("O número deve ser positivo.\n");
        return 1; // Termina o programa com um código de erro
    }

    // Imprime a sequência de Fibonacci até o limite
    printf("Sequência de Fibonacci até %d:\n", limite);

    // Imprime 0 se o limite for >= 0
    if (limite >= 0) {
        printf("%d ", a); // Imprime 0
    }
    // Imprime 1 se o limite for >= 1
    if (limite >= 1) {
        printf("%d ", b); // Imprime 1
    }

    // Usa o loop for para calcular e imprimir os próximos números da sequência
    for (proximo = a + b; proximo <= limite; proximo = a + b) {
        printf("%d ", proximo);
        a = b;
        b = proximo;
    }
    
    printf("\n"); // Nova linha no final da saída
    return 0; // Termina o programa com sucesso
}
