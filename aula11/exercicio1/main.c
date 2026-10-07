#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "factorial.h"
#include "sumall.h"

int main() {
    setlocale(LC_ALL, "portuguese");
    int x, n;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("O fatorial de %d é %d\n", x, factorial(x));

    system("pause");
    system("cls");

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("O valor da soma de todos os números inteiros positivos até %d é: %d", n, sumall(n));

    return 0;
}
