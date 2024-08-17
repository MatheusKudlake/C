#include <stdio.h>
#include <math.h>

void circulo(){
    int raio;
    float area;
    printf("Digite o raio do circulo\n");
    scanf("%d", &raio);
    area = (float) 3.14 * (raio ^ 2);
    printf("%f", area);
}

int main()
{
    circulo();
}

void idade(){
    int anos, meses, dias, totaldias;
    printf("Quantos anos voce tem?\n");
    scanf("%d", &anos);
    printf("Quantos meses?\n");
    scanf("%d", &meses);
    printf("Quantos dias?\n");
    scanf("%d", &dias);

    totaldias = anos * 365 + meses * 30 + dias;
    printf("Voce tem no total %d dias\n", totaldias);
}


