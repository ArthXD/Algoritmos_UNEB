#include <locale.h>
#include <stdio.h>

int main() {
    int decimal, quociente, resto;
    int binario[32];  // suporta numeros de até 32 bits
    int i;

    printf("Escreva o número decimal: ");
    scanf("%d", &decimal);

    quociente = decimal;

    for (i=0; quociente > 0; i++) {
        resto = quociente % 2;
        binario[i] = resto;
        quociente = quociente / 2;//reduzindo o número para a próxima validação
    }

    // escrevendo o binário invertido 
    printf("Binário equivalente: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }

    return 0;
}