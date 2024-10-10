#include <stdio.h>

int main(){
    int matriz[1][1], i, j, a, b;
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
        {
            matriz[i][j]=10;
        }

    for(a=0; a<2; a++)
        for(b=0; b<2; b++)
        {
            printf("[%d][%d] = %d \n", a, b, matriz[a][b]);
        }
    return 0;
}