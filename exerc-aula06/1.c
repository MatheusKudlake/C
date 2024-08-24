#include <stdio.h>
#include <math.h>

int main()
{
    double num, q, c;
    printf("Insira um numero:\n");
    scanf("%lf", &num);

    q = pow(num, 2);
    c = pow(num, 3);

    printf("O quadrado desse numero eh: %lf\n", q);
    printf("O cubo desse numero eh: %lf\n", c);
    return 0;
}
