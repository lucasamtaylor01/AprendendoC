// Mostra o quadrado e a raiz quadrada de um número positivo.

#include <math.h>
#include <stdio.h>

int main() {
    double numero;
    printf("Insira um número: ");
    scanf("%lf", &numero);

    // A raiz quadrada só é real para números não negativos.
    if (numero > 0) {
        printf("%lf ao quadrado é %.2lf.\n", numero, pow(numero, 2));
        printf("A raiz de %lf é %.2lf.\n", numero, sqrt(numero));
    } else {
        printf("O número é negativo.\n");
    }

    return 0;
}