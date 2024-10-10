#include <stdio.h>
//
//int main(){
//    int input, t1=0, t2=1, prox;
//
//    printf("Insira um numero:\n");
//    scanf("%d", &input);
//    printf("----------\n");
//    
//    for(int i = 1; i <= input; i=t1){
//        printf("%d\n", t1);
//        prox=t1+t2;
//        t1=t2;
//        t2=prox;
//    }
//
//    return 0;
//}

int main()
{
    int num, ant=0, atual=1, prox;
    printf("Insira um numero:\n");
    scanf("%d", &num);

    for(prox=atual; atual<=num; prox=ant+atual){ //como funfa???????
        printf("%d\n", atual);
        ant=atual;
        atual=prox; 
    }
}
