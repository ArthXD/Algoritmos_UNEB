#include <stdio.h>
#include <locale.h>

int main() {
    int binario, decimal = 0, base = 1, res;

    printf("converta um número BINÁRIO para decimal abaixo\n");
    printf("digite o número binário:");
    scanf("%d", &binario);

    while (binario > 0) {
        res = binario % 10;//todo numero binário pode ser dividido por 10 e apresentar um resto 0 ou 1
        decimal += res * base;//numero será calculado a casa do binário e o valor atribuido
        binario /= 10;//redução do binário para o calculo do próximo, declarado como inteiro
        base *= 2;//potencia de 2 acumulada
    }

    printf("número convertido: %d\n", decimal);
    return 0;
}