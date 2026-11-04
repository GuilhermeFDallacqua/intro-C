#include <stdio.h>
#include <locale.h>

int expo_b(int a, int b) {
    int expo = 1;

    if (b == 1 || b == 0) {
        return 1;
    }

    for (int i = 1; i < b; i++) {
       expo*=a;
    }

    return expo;
}

int expo(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    } else if (a == 1 || b == 1) {
        return 1;
    }

    return a * expo_b(a, b);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("%d", expo(2, 4));

    return 0;
}
