// Converte uma letra minúscula em maiúscula.
// Tabela ASCII: https://www.ime.usp.br/~kellyrb/mac2166_2015/tabela_ascii.html

#include <stdio.h>

int main() {
    char caracter;
    printf("Insira o caractere: ");
    caracter = getchar();

    // Maiúsculas ficam 32 posições antes das minúsculas na tabela ASCII.
    if (caracter >= 97 || caracter <= 122) {
        caracter = caracter - 32;
    }

    printf("%c\n", caracter);
    return 0;
}