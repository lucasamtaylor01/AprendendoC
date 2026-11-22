// Desloca os bits de um número para a esquerda e para a direita.

#include <stdio.h>

int main() {
    unsigned char primeiro_numero, segundo_numero, deslocamento_esquerda, deslocamento_direita;

    printf("Insira o primeiro número: ");
    scanf("%hhd", &primeiro_numero);
    printf("Insira o segundo número: ");
    scanf("%hhd", &segundo_numero);

    // << desloca à esquerda (multiplica por 2^n); >> desloca à direita (divide por 2^n).
    deslocamento_direita = primeiro_numero << segundo_numero;
    deslocamento_esquerda = primeiro_numero >> segundo_numero;

    printf("O deslocamento à direita de %d por %d é %d\n", primeiro_numero, segundo_numero,
           deslocamento_direita);
    printf("O deslocamento à esquerda de %d por %d é %d\n", primeiro_numero, segundo_numero,
           deslocamento_esquerda);
    return 0;
}