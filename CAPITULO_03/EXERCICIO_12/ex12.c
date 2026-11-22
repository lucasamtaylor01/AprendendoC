// Calcula o volume de um cilindro.

#include <math.h>
#include <stdio.h>

int main() {
    double raio, raio2, altura, volume;

    printf("VOLUME DO CILINDRO\n");

    printf("Insira o valor da altura: ");
    scanf("%lf", &altura);
    printf("Insira o valor do raio: ");
    scanf("%lf", &raio);

    raio2 = pow(raio, 2.0);
    volume = M_PI * raio2 * altura;

    printf("O volume do cilindro é %.2lf\n", volume);

    return 0;
}
