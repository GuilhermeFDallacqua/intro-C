#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int a = 1;
    float resultado = 0;

    while (a <= 7) {
        resultado+= 3 * pow(a, 2) + a - 2;
        a++;
    }

    printf("O valor do somatório é de %f", resultado);

    return 0;
}
