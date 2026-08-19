#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    for (int i = 0; i <= 500; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
