// Calcula o dobro e a metade de um número usando deslocamento de bits.
// Ref.: https://en.wikipedia.org/wiki/Bitwise_operations_in_C

#include <stdio.h>

int main() {
    unsigned char numero, dobro, metade;
    printf("Insira o número inteiro: ");
    scanf("%hhd", &numero);

    // Deslocar 1 bit à esquerda dobra; à direita, divide por 2.
    dobro = numero << 1;
    metade = numero >> 1;

    printf("O dobro de %d é %d\n", numero, dobro);
    printf("A metade de %d é %d\n", numero, metade);

    return 0;
}