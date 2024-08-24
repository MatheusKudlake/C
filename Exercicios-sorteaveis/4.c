#include <stdio.h>

int main(){
    double dist, tempo, vm;

    printf("Insira a distancia percorrida na viagem:\n");
    scanf("%lf", &dist);
    printf("Insira o tempo gasto na viagem:\n");
    scanf("%lf", &tempo);

    vm = dist / tempo;

    printf("A velocidade media do veiculo na viagem foi de %.2lf", vm);

    return 0;
}