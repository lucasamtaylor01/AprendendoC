// Verifica se um número é par ou ímpar.

#include <stdio.h>

int main() {
    int numero;
    printf("Insira um número: ");
    scanf("%d", &numero);

    // Resto zero na divisão por 2 indica número par.
    if (numero % 2 == 0) {
        printf("%d é par\n", numero);
    } else {
        printf("%d é ímpar\n", numero);
    }
    return 0;
}