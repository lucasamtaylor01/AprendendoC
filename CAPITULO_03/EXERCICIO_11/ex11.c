// Calcula a área de um círculo a partir do raio.

#include <math.h>
#include <stdio.h>


int main() {
    double raio, raio2, area;
    printf("Insira o valor do raio: ");
    scanf("%lf", &raio);
    raio2 = pow(raio, 2.0);
    area = M_PI * raio2;
    printf("A área do círculo é dada por: %.2lf\n", area);
    return 0;
}
