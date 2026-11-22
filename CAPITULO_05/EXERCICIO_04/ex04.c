// Mostra os cinco primeiros múltiplos de 3.

#include <stdio.h>

int main() {
    int contador, i;

    contador = 0;
    i = 1;
    // contador guarda quantos múltiplos já foram encontrados.
    while (contador < 5) {
        if (i % 3 == 0) {
            printf("%d\n", i);
            contador++;
        }
        i++;
    }
    return 0;
}
