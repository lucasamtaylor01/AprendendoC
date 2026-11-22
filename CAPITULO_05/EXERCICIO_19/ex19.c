// Calcula a série S = 1/1 + 3/2 + 5/3 + ... até o n-ésimo termo.

#include <stdio.h>

int main() {
    int contador, n;
    double numerador, denominador, soma;

    soma = 0;
    numerador = 1.0;
    denominador = 1.0;
    contador = 1;

    printf("Insira um número: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Número inválido.\n");
    }
    while (contador <= n) {
        soma = numerador / denominador;

        // Numerador avança pelos ímpares; denominador, de 1 em 1.
        numerador = numerador + 2;
        denominador = denominador + 1;

        contador++;
    }

    printf("S = %lf\n", soma);

    return 0;
}
