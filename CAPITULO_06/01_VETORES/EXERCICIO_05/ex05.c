// Lê um vetor de oito números e soma os valores de duas posições escolhidas.

#include <stdio.h>

int main() {
    int vec[8], i, pos_x, pos_y, soma;

    soma = 0;
    // Começam inválidas para forçar a entrada nos laços de leitura.
    pos_x = -1;
    pos_y = -1;

    for (i = 0; i < 8; i++) {
        printf("Digite um número inteiro para a posição %d: ", i);
        scanf("%d", &vec[i]);
    }

    // Repete a leitura até receber um índice válido.
    while (pos_x < 0 || pos_x > 7) {
        printf("\nSelecione um valor para a posição X: ");
        scanf("%d", &pos_x);

        if (pos_x < 0 || pos_x > 7) {
            printf("Valor inválido. Insira um valor entre 0 e 7\n");
        }
    }

    while (pos_y < 0 || pos_y > 7) {
        printf("\nSelecione um valor para a posição Y: ");
        scanf("%d", &pos_y);

        if (pos_y < 0 || pos_y > 7) {
            printf("Valor inválido. Insira um valor entre 0 e 7\n");
        }
    }

    soma = vec[pos_x] + vec[pos_y];

    printf("\nO valor da soma dos valores das posições %d e %d é: %d\n", pos_x, pos_y, soma);

    return 0;
}
