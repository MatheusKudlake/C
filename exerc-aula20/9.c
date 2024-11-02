#include <stdio.h>

float pesoIdeal(float altura, char sexo);

int main()
{
    float altura;
    char sexo;

    printf("Insira sua altura:\n");
    scanf("%f", &altura);
    printf("Insira M para masculino ou F para feminino:\n");
    scanf(" %c", &sexo);
    if(pesoIdeal(altura, sexo)==0){
        printf("Caracter invalido!\n");
    }else{
        printf("Seu peso ideal eh: %.2f\n", pesoIdeal(altura, sexo));
    }
    return 0;
}

float pesoIdeal(float altura, char sexo){
    if(sexo == 'm' || sexo == 'M'){
        return 72.7 * altura - 58;
    }else if(sexo == 'f' || sexo == 'F'){
        return 62.1 * altura - 44.7;
    }else{
        return 0;
    }
}