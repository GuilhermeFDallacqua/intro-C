#include <stdio.h>
#include <locale.h>

int expo(int a, int b) {
    if (a == 1) {
        return 1;
    } else if (a == 0) {
        return 0;
    }
    
    if (b == 1) {
        return a;
    } else if (b == 0) {
        return 1;
    }

    return a * expo(a, b - 1);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    printf("%d", expo(2, 3));

    return 0;
}
