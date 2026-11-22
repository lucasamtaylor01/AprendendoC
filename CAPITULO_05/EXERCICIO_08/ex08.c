// Lê dez números e mostra a média.

#include <stdio.h>

int main() {
    int contador = 0;
    int numero;
    int soma = 0;
    float media;

    while (contador < 10) {
        printf("Insira um número: ");
        scanf("%d", &numero);

        soma = soma + numero;
        contador++;
    }

    // O cast evita a divisão inteira.
    media = (float)soma / 10.0;
    printf("MÉDIA: %.2f\n", media);
    return 0;
}
