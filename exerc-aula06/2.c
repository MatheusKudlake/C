#include <stdio.h>
#include <math.h>

int main(){
    double res, num1, num2;
    printf("Insira dois valores:\n");
    scanf("%lf %lf", &num1, &num2);

    res = sqrt(num1 * num2);

    printf("A raiz da multiplicacao desses numeros eh: %lf\n", res);
}