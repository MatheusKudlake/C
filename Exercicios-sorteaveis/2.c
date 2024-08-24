#include <stdio.h>

intmain(){
    int anos, meses, dias, totaldias;
    printf("Quantos anos voce tem?\n");
    scanf("%d", &anos);
    printf("Quantos meses?\n");
    scanf("%d", &meses);
    printf("Quantos dias?\n");
    scanf("%d", &dias);

    totaldias = anos * 365 + meses * 30 + dias;
    printf("Voce viveu no total %d dias\n", totaldias);

    return 0;
}