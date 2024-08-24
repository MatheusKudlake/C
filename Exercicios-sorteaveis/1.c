#include <stdio.h>

#define pi 3.14159

int main()
{
    float raio, area, perimetro;
    printf("Insira o valor do raio do circulo:\n");
    scanf("%f", &raio);

    area = (float) pi * raio * raio;
    perimetro = (float) 2 * pi * raio;

    printf("A area do circulo eh: %f\n", area);
    printf("O perimetro do circulo eh: %f\n", perimetro);
    return 0;
}
