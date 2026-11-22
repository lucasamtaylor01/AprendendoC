// Inverte a ordem dos dígitos de um número de três dígitos.

#include <stdio.h>

int main() {
    int numero, numero_invertido, centena, dezena, unidade;

    printf("Insira um número de três dígitos: ");
    scanf("%d", &numero);

    // Separa os dígitos do número.
    dezena = (numero / 10) % 10;
    unidade = (numero % 10);
    centena = (numero / 100);

    numero_invertido = unidade * 100 + dezena * 10 + centena;
    printf("O número invertido é %d\n", numero_invertido);
    return 0;
}