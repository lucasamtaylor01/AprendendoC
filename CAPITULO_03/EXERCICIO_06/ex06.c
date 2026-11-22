// Converte velocidade de km/h para m/s.

#include <stdio.h>

int main() {
    float kmh, ms;
    printf("Insira a medida em km/h: ");
    scanf("%f", &kmh);
    // 1 m/s equivale a 3,6 km/h.
    ms = kmh / 3.6;

    printf("%.2f km/h é equivalente a %.2f m/s\n", kmh, ms);

    return 0;
}