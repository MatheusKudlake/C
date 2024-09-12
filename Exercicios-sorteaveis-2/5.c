#include <stdio.h>

int main()
{
    int idade;
    double peso, totalf1=0, totalf2=0, totalf3=0, totalf4=0, pesof1=0, pesof2=0, pesof3=0, pesof4=0;
    
    for(int i = 0; i < 5; i++){
        printf("Insira sua idade:\n");
        scanf("%d", &idade);
        printf("Insira seu peso:\n");
        scanf("%lf", &peso);

        if(idade>=1 && idade<=10){
            totalf1++;
            pesof1+=peso;
        }else if(idade>=11 && idade<=20){
            totalf2++;
            pesof2+=peso;
        }else if(idade>=21 && idade<=30){
            totalf3++;
            pesof3+=peso;
        }else if(idade>=31){
            totalf4++;
            pesof4+=peso;
        }
    }
        printf("A media de peso das pessoas de 1 a 10 anos eh de: %.2lf\n", pesof1/totalf1);
        printf("A media de peso das pessoas de 11 a 20 anos eh de: %.2lf\n", pesof2/totalf2);
        printf("A media de peso das pessoas de 21 a 30 anos eh de: %.2lf\n", pesof3/totalf3);
        printf("A media de peso das pessoas maiores de 30 eh de: %.2lf\n", pesof4/totalf4);
    return 0;
}
