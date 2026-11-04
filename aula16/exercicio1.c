#include <stdio.h>
#include <locale.h>

int soma(int x) {
    if (x == 1) {
        return 1;
    } else {
        return x + soma(x-1);
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("%d", soma(5));

    return 0;
}
