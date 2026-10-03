#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float vetorA[8], vetorB[8], valorDaVezA, valorDaVezB;

    printf("Valores do vetor A\n\n");
    for (int i = 0;  i < 8; i++) {
        printf("Insira o valor: ");
        scanf("%f", &vetorA[i]);
    }
    system("pause");
    system("cls");

    printf("Valores do vetor B\n\n");
    for (int i = 0;  i < 8; i++) {
        printf("Insira o valor: ");
        scanf("%f", &vetorB
              [i]);
    }
    system("pause");
    system("cls");

    for (int i = 0; i < 8; i++) {
        valorDaVezA = vetorA[i];
        valorDaVezB = vetorB[i];
        vetorA[i] = valorDaVezB;
        vetorB[i] = valorDaVezA;
    }


    printf("Valores do vetor A:\n\n");
    for (int i = 0; i < 8; i++) {
        printf("%.2f ", vetorA[i]);
    }
    printf("\n");

    system("pause");
    system("cls");

    printf("\n");

    printf("Valores do vetor B:\n\n");
    for (int i = 0; i < 8; i++) {
        printf("%.2f  ", vetorB[i]);
    }

    return 0;
}
