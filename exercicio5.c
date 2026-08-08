#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float a, b, temp;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;

    printf("O valor de 'a' é igual a %f. E o valor de 'b' é igual a %f", a, b);

    return 0;
}
