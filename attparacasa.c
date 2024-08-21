#include <stdio.h>

void calcularIdade(), areaCirculo(), volumeOleo(), calcGasolina(), calcValores();

int main()
{
    int escolha;
    while(1){
        printf("Escolha o programa a utilizar:\n");
        printf("1. Calcular idade\n");
        printf("2. Calcular area do circulo\n");
        printf("3. Calcular volume da lata de oleo\n");
        printf("4. Calcular litros de combustivel\n");
        printf("5. Calculos com quatro valores\n");

        printf("Escolha o numero correspondente:\n");
        scanf("%d", &escolha);

        switch (escolha){
            case 1:
                calcularIdade();
                break;

            case 2:
                areaCirculo();
                break;

            case 3:
                volumeOleo();
                break;

            case 4:
                calcGasolina();
                break;

            case 5:
                calcValores();
                break;

            default:
                printf("Esse nao eh um valor valido.");
        }

    }
}

void areaCirculo(){
    int raio;
    float area;
    printf("Digite o raio do circulo\n");
    scanf("%d", &raio);
    area = (float) 3.14 * (raio * raio);
    printf("%f", area);
}

void calcularIdade(){
    int anos, meses, dias, totaldias;
    printf("Quantos anos voce tem?\n");
    scanf("%d", &anos);
    printf("Quantos meses?\n");
    scanf("%d", &meses);
    printf("Quantos dias?\n");
    scanf("%d", &dias);

    totaldias = anos * 365 + meses * 30 + dias;
    printf("Voce tem no total %d dias\n", totaldias);
}

void volumeOleo(){
    int altura, raio;
    float volume;

    printf("Insira a altura da lata de oleo:\n");
    scanf("%d", &altura);
    printf("Insira o raio da lata de oleo:\n");
    scanf("%d", &raio);

    volume =  (float) 3.14 * (raio * raio) * altura;

    printf("O volume da lata de oleo eh: %.2f\n", volume);
}

void calcGasolina(){
    float preco, valor, litros;
    printf("Insira o preço do combustivel:\n");
    scanf("%f", &preco);
    printf("Insira o valor a abastecer:\n");
    scanf("%f", &valor);

    litros = (float) valor / preco;

    printf("Serao abastecidos %.2f litros.", litros);
}

void calcValores(){
    int n1, n2, n3, n4, mult, soma;

    printf("Insira o primeiro valor:\n");
    scanf("%d", &n1);
    printf("Insira o segundo valor:\n");
    scanf("%d", &n2);
    printf("Insira o terceiro valor:\n");
    scanf("%d", &n3);
    printf("Insira o quarto valor:\n");
    scanf("%d", &n4);

    mult = n1 * n3;
    soma = n2 + n4;

    printf("A multiplicacao do primeiro com o terceiro valor eh: %d\n", mult);
    printf("A soma do segundo com o quarto valor eh: %d\n", soma);
}
