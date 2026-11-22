// Aplica as operações bit a bit XOR, OR e AND em dois números.

#include <stdio.h>

int main() {
    unsigned char primeiro_numero, segundo_numero, operacao;

    printf("Insira o primeiro número: ");
    scanf("%hhd", &primeiro_numero);
    printf("Insira o segundo número: ");
    scanf("%hhd", &segundo_numero);

    printf("\nOPERAÇÃO OU EXCLUSIVO\n");
    // XOR: bit 1 quando os bits são diferentes.
    operacao = primeiro_numero ^ segundo_numero;
    printf("Resultado da operação: %d\n", operacao);

    printf("\nOPERAÇÃO OU BIT A BIT\n");
    // OR: bit 1 quando ao menos um dos bits é 1.
    operacao = primeiro_numero | segundo_numero;
    printf("Resultado da operação: %d\n", operacao);

    printf("\nOPERAÇÃO E BIT A BIT\n");
    // AND: bit 1 somente quando ambos os bits são 1.
    operacao = primeiro_numero & segundo_numero;
    printf("Resultado da operação: %d\n", operacao);
    return 0;
}