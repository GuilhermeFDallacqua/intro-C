#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int matriz[5][6];

    printf("Digite os elementos da matriz 5x6:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
            matriz[i][j] *= 4;
        }
    }

    printf("\nMatriz resultante (multiplicada por 4):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
