#include <stdio.h>

//int main()
//{
//    int input;
//
//    for(int i = 0; i < 3; i++){
//        printf("Insira a senha:\n");
//        scanf("%d", &input);
//
//        if(input == 1786){
//            printf("Bom dia! Seja bem-vindo!\n");
//            break;
//        }else{
//            printf("Acesso negado! Senha invalida\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int num, i=2;
//
//    do{
//        printf("Digite a senha:\n");
//        scanf("%d", &num);
//        if(num==1786){
//            printf("Bem vindo!\n");
//            break;
//        }else{
//            printf("Senha invalida. %d tentativas restantes\n", i);
//            i--;
//        }
//    }while(i>=0);
//    return 0;
//}

int main()
{
    int num, i=3;
    while(i>0){
        printf("Digite a senha:\n");
        scanf("%d", &num);

        if(num==1786){
            printf("Bem vindo");
            break;
        }else{
            i--;
            printf("Senha incorreta. %d tentativas restantes.\n", i); 
        }
    }
    return 0;
}