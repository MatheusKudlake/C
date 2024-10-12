#include <stdio.h>

int main(){
    int matriz[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            matriz[i][j]=i*j;
            printf("[%d][%d] = [%d]\n", i, j, matriz[i][j]);
        }
    }
    
    return 0;
}