#include <stdio.h>

void media(float n1, float n2, float n3, char letra);

int main()
{
    media(5, 5, 5, 'p');
}

void media(float n1, float n2, float n3, char letra){
    float media;
    if(letra=='A' || letra=='a'){
        media=(n1+n2+n3)/3;
    }else if(letra=='P' || letra=='p'){
        media=(n1*5+n2*3+n3*2)/3;
    }
    printf("A media eh: %.2f\n", media);
}