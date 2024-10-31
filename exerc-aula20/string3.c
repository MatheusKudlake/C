#include <stdio.h>
#include <string.h>

int main()
{
    char t1[50], t2[50];
    
    printf("Insira um texto:\n");
    gets(t1);
    printf("Insira outro texto:\n");
    gets(t2);

    if(strcasecmp(t1, t2)<0){
        printf("%s\n", t1);
        printf("%s\n", t2);
    }else{
        printf("%s\n", t2);
        printf("%s\n", t1);
    }
    return 0;
}