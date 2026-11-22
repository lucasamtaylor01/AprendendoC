// Verifica se um número é divisível por 3, por 5 ou por ambos.

#include <stdio.h>

int main() {
    int numero;
    printf("Selecione um número: ");
    scanf("%d", &numero);

    // O caso "ambos" vem primeiro para não ser capturado pelos seguintes.
    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("%d é dividido por 3 e por 5.\n", numero);
    } else if (numero % 3 == 0) {
        printf("%d é dividido por 3.\n", numero);
    } else if (numero % 5 == 0) {
        printf("%d é dividido por 5.\n", numero);
    } else {
        printf("%d não é divisível por 3 nem por 5.\n", numero);
    }
    return 0;
}
