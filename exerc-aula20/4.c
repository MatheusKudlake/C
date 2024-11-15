#include <stdio.h>

void imc(float peso, float altura);

int main()
{
    imc(60, 1.86);
    return 0;
}

void imc(float peso, float altura){
    float imc=peso/(altura*altura);
    if(imc<18.5){
        printf("Abaixo do peso.\n");
    }else if(imc >= 18.5 && imc <= 25){
        printf("Peso normal.\n");
    }else if(imc >= 25 && imc <=30){
        printf("Acima do peso.\n");
    }else if(imc>30){
        printf("Obeso.\n");
    }
}