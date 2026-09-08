#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int matriz[5][5];
    int soma = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
            if (i == j) {
                soma += matriz[i][j];
            }
        }
    }

    printf("A soma dos elementos da diagonal principal e: %d\n", soma);
    return 0;
}
