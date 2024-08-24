#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2;
    double dist;
    printf("Insira as seguintes coordenadas:\n");

    printf("x1=\n");
    scanf("%d", &x1);

    printf("y1=\n");
    scanf("%d", &y1);

    printf("x2=\n");
    scanf("%d", &x2);

    printf("y2=\n");
    scanf("%d", &y2);

    dist = sqrt((pow(x2-x1, 2) + pow(y2-y1, 2)));

    printf("A distancia entre os pontos X e Y eh: %lf\n", dist);
}