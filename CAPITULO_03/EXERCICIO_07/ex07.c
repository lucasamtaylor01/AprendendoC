// Converte um valor de reais para dólares.

#include <stdio.h>

int main() {
    float real, dolar;
    printf("Insira o valor em reais (R$): ");
    scanf("%f", &real);
    // Cotação do dólar em 16/12/2025.
    dolar = real / 5.51;

    printf("R$ %.2f é equivalente a U$ %.2f\n", real, dolar);

    return 0;
}