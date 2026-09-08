#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float matriz[4][3];
    float maior;

    printf("Digite os elementos da matriz 4x3:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%f", &matriz[i][j]);
            if (i == 0 && j == 0) {
                maior = matriz[i][j];
            } else if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("O maior valor lido e: %.2f\n", maior);
    return 0;
}
