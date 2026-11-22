// Calcula o peso ideal a partir da altura e do gênero.

#include <stdio.h>

int main() {
    double altura, peso_ideal;
    char genero;

    printf("Insira a altura: ");
    scanf("%lf", &altura);
    printf("Selecione seu gênero:\n[h] homem\n[f] mulher\nInsira o gênero: ");
    // Descarta o '\n' deixado pelo scanf anterior.
    getchar();
    scanf("%c", &genero);

    if (genero == 'h') {
        peso_ideal = (72.7 * altura) - 58;
        printf("O peso ideal é %.2lf\n", peso_ideal);
    } else if (genero == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal é %.2lf\n", peso_ideal);
    } else {
        printf("Erro.\n");
    }

    return 0;
}