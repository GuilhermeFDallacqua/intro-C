#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    for (int i = 0; i <= 100; i++) {
        if (!(i & 1)) {
            printf("%d ", i);
        }
    }

    return 0;
}
