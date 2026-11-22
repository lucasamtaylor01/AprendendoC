// Converte um ângulo de graus para radianos.

#include <stdio.h>
#include <math.h>

int main() {
    float graus, radianos;
    printf("Insira o valor em graus: ");
    scanf("%f", &graus);

    // 180 graus equivalem a PI radianos.
    radianos = graus * M_PI / 180;

    printf("Temos que o valor de %.2f está associado a %.2f radianos.\n", graus, radianos);
    return 0;
}
