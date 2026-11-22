// Converte temperatura de Celsius para Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Insira o valor da temperatura em celsius: ");
    scanf("%f", &celsius);
    // 9.0 / 5.0 evita a divisão inteira (9 / 5 resultaria em 1).
    fahrenheit = celsius * (9.0 / 5.0) + 32;

    printf("%.2f °C é equivalente a %.2f °F\n", celsius, fahrenheit);

    return 0;
}