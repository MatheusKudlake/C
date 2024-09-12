#include <stdio.h>

int main()
{   
    double idade, homens, mulheres, idadeHomens, idadeMulheres, peso, pesoHomens, pesoMulheres;
    char sexo;

    idade=homens=mulheres=idadeHomens=idadeMulheres=peso=pesoHomens=pesoMulheres=0;

    for(int i = 0; i < 3; i++){
        printf("Insira sua idade:\n");
        scanf("%lf", &idade);
        printf("Insira seu peso:\n");
        scanf("%lf", &peso);
        printf("Insira M para masculino ou F para feminino:\n");
        scanf(" %c", &sexo);
        printf("--------------------\n");

        if(sexo == 'M' || sexo == 'm'){
            homens += 1;
            idadeHomens += idade;
            pesoHomens += peso;
        }else if(sexo == 'F' || sexo == 'f'){
            mulheres += 1;
            idadeMulheres += idade;
            pesoMulheres += peso;
        }else{
            printf("Formato invalido. Insira M para masculino ou F para feminino.\n");
        }
    }

    printf("Foram registrados no total %.0lf homens e %.0lf mulheres.\n", homens, mulheres);
    printf("A soma da idade dos homens eh de: %.0lf\n", idadeHomens);
    printf("A media da idade dos homens eh de: %.2lf\n", idadeHomens/3);
    printf("A soma do peso dos homens eh de: %.2lf\n", pesoHomens);
    printf("A media do peso dos homens eh de: %.2lf\n", pesoHomens/3);
    printf("A soma da idade das mulheres eh de: %.0lf\n", idadeMulheres);
    printf("A media da idade das mulheres eh de: %.2lf\n", idadeMulheres/3);    
    printf("A soma do peso das mulheres eh de: %.2lf\n", pesoMulheres);
    printf("A media do peso das mulheres eh de: %.2lf\n", pesoMulheres/3);

    return 0;
}
