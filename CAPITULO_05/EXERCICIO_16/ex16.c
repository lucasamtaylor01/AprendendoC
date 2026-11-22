// Calcula o número harmônico H(n) = 1 + 1/2 + ... + 1/n.

#include <math.h>
#include <stdio.h>

int main() {
    int i, n;
    double harmonico;

    i = 1;
    harmonico = 0;
    printf("Insira o valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número inválido, insira um valor positivo\n");
    } else {
        while (i <= n) {
            // 1.0 garante divisão real.
            harmonico = harmonico + (1.0 / i);
            i++;
        }

        printf("Harmônico: %.3lf\n", harmonico);
    }
}
