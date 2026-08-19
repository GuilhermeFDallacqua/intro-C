#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    for (int i = 1; i <= 10; i++) {
        printf("%d", i);
    }

    return 0;
}
