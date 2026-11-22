// Aproxima o número e pela série 1 + 1/1! + 1/2! + ... + 1/n!.

#include <math.h>
#include <stdio.h>

int main() {
    int n, fatorial, i;
    double e;

    printf("Insira um número: ");
    scanf("%d", &n);

    i = 1;
    e = 1.0;
    fatorial = 1;

    while (i <= n) {
        // Atualiza o fatorial aproveitando o valor anterior.
        fatorial = fatorial * i;
        e = e + (1.0 / fatorial);
        i++;
    }

    printf("e = %lf\n", e);
    return 0;
}
