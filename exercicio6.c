#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float lado;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    printf("O valor do perímetro do quadrado é de %f. E o valor da área é de %f", lado*4, pow(lado, 2));


    return 0;
}
