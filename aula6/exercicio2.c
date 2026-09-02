#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float valores[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite os valores reais: ");
        scanf("%f", &valores[i]);
    }

    for (int i = 4; i > 0; i--) {
        printf("Valor: %.2f\n", valores[i]);
    }



    return 0;
}
