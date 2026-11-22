// Mostra o complemento bit a bit de um número.

#include <stdio.h>

int main() {
    unsigned char numero, complemento;
    printf("Insira o número inteiro: ");
    scanf("%hhd", &numero);

    // ~ inverte todos os bits (0 vira 1 e 1 vira 0).
    complemento = ~numero;

    printf("O complemento de %d é %d\n", numero, complemento);
    return 0;
}