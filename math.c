#include <stdio.h>
#include <math.h>

int main(){
    double angulo, seno, cosseno, tangente;

    printf("Digite o angulo em graus:\n");
    scanf("%lf", &angulo);
    angulo = angulo * (3.14 / 180.0); // converte para rad

    seno = sin(angulo);
    cosseno = cos(angulo);
    tangente  = tan(angulo);

    printf("O seno do angulo eh: %lf\n", seno);
    printf("O cosseno do angulo eh: %lf\n", cosseno);
    printf("A tangente do angulo eh: %lf\n", tangente);

    return 0;
}