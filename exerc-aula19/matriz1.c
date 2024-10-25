#include <stdio.h>

int main(){
    int matriz [2][2];

    for(int l=0; l<2; l++){
        for(int c=0; c<2; c++){
            matriz[l][c]=l*c;
            printf("[%d] [%d] = [%d]\n", l, c, matriz[l][c]);
        }
    }

    return 0;
}