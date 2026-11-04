#include <stdio.h>
#include <locale.h>

int expo(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    } else if (a == 1 || b == 1) {
        return 1;
    }

    return a * expo(a, b - 1);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("%d", expo(2, 4));

    return 0;
}
