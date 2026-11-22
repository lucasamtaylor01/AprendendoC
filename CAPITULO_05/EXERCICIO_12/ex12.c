// Mostra a soma dos divisores de um número no formato d1+d2+...=soma.

#include <stdio.h>

int main() {
    int numero;
    int divisor = 1;
    int soma = 0;
    printf("Insira um número: ");
    scanf("%d", &numero);

    printf("A soma dos divisores de %d é ", numero);
    while (divisor <= numero) {
        // O último divisor é o próprio número; ele fecha a expressão com '='.
        if (numero == divisor) {
            soma = soma + divisor;
            printf("%d=", divisor);
        } else {
            if (numero % divisor == 0) {
                printf("%d+", divisor);
                soma = soma + divisor;
            }
        }
        divisor++;
    }
    printf("%d \n", soma);
    return 0;
}
