#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int i, soma = 0;

    while (i <= 100) {
        soma+=i;
        i++;
    }

    printf("%d", soma);

    return 0;
}
