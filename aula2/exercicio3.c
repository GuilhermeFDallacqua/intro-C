#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int valor;

    printf("Digite o valor e direi se ele é par ou ímpar: ");
    scanf("%d", &valor);

    if (valor & 1) {
        printf("O número é ímpar.");
    } else {
        printf("O número é par");
    }

    return 0;
}
