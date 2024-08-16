#include <stdio.h>

int quant;
int soma;
float resultado;

int main()
{
    printf("Digite a quantidade de numeros para tirar a media: \n");
    scanf("%d", &quant);
    printf("Iniciando calculo de media de %d numeros.\n", quant);

    int numeros[quant-1];

    for(int i = 0; i < quant; i++)
    {
        printf("Digite um numero: \n");
        scanf("%d", &numeros[i]);
    }
    
    for(int i = 0; i < quant; i++)
    {
        soma = soma + numeros[i];
    }

    resultado = (float) soma / quant;
    printf("Resultado da media: %.2f", resultado);
    return 0;
}
