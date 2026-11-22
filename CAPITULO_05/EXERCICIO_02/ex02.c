// Mostra os números de n até 0 em ordem decrescente.

#include <stdio.h>

int main() {
    int n, j;
    printf("Insira um número: ");
    scanf("%d", &n);

    for (j = n; j >= 0; j--) {
        printf("%d\n", j);
    }
    return 0;
}
