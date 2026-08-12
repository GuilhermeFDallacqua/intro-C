#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float num1, num2, num3, num4, num5;

    printf("Digite cinco números: ");
    scanf("%f%f%f%f%f", &num1, &num2, &num3, &num4, &num5);

     float maior = num1;

    if (maior < num2) {
        maior = num2;
    } if (maior < num3) {
        maior = num3;
    } if (maior < num4) {
        maior = num4;
    } if (maior < num5) {
        maior = num5;
    }

    printf("%f", maior);

    return 0;
}
