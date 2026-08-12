#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float renda;

    printf("Digite sua renda mensal: ");
    scanf("%f", &renda);

    if (renda <= 2428.80) {
        printf("Você está isento de impostos");
    } else if (renda >= 2428.81 && renda <= 2826.65) {
        printf("O valor a ser pago é de %f", renda * 7.5 / 100);
    } else if (renda >= 2826.66 && renda <= 3751.05) {
        printf("O valor a ser pago é de %f", renda * 15 / 100);
    } else if (renda >= 3751.06 && renda <= 4664.68) {
        printf("O valor a ser pago é de %f", renda * 22.5 / 100);
    } else if (renda > 4664.68) {
        printf("O valor a ser pago é de %f", renda * 27.5 / 100);
    }
    return 0;
}
