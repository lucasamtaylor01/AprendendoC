// Lê dez números positivos e mostra a média.

#include <stdio.h>

int main() {
    int contador = 0;
    int numero;
    int soma = 0;
    float media;

    while (contador < 10) {
        printf("Insira um número: ");
        scanf("%d", &numero);

        // Negativos são rejeitados e não contam na leitura.
        if (numero < 0) {
            printf("Insira somente números positivos\n");
        } else {
            soma = soma + numero;
            contador++;
        }
    }

    // O cast evita a divisão inteira.
    media = (float)soma / 10.0;
    printf("MÉDIA: %.2f\n", media);
    return 0;
}
