#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int vetor[30], contador = 0;

    for (int i = 0; i < 30; i++) {
        contador++;
        printf("Digite o valor: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] == 0) {
            break;
        }
    }

    for (int i = 0; i < contador; i++) {
        printf("Valor: %d\n", vetor[i]);
    }

    return 0;
}
