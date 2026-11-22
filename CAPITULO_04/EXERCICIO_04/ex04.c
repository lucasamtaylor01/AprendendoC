// Verifica se um empréstimo pode ser concedido com base no salário.

#include <stdio.h>

int main() {
    double salario, prestacao;

    printf("Insira o valor do salário: ");
    scanf("%lf", &salario);

    printf("Insira o valor da prestação: ");
    scanf("%lf", &prestacao);

    // Nega o empréstimo se a prestação passar de 120% do salário.
    if ((salario * 1.2) < prestacao) {
        printf("Empréstimo não concedido.\n");
    } else {
        printf("Empréstimo concedido.\n");
    }

    return 0;
}