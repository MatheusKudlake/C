#include <stdio.h>

int main()
{
    int n1, n2, n3, a, b, c;
    printf("Insira tres numeros inteiros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    a = n1;
    if(n2 <= a){
        b = a;
        a = n2;
    }else{
        b = n2;
    }
    if(n3 <= a){
        c = b;
        b = a;
        a = n3;
    }else if(n3 <= b){
        c = b;
        b = n3;
    }else{
        c = n3;
    }

    printf("Numeros em ordem crescente: %d, %d, %d\n", a, b, c);
    return 0;
}
