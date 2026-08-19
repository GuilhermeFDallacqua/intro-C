#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char msg[250];

    printf("Digite uma mensagem: ");
    gets(msg);

    for (int i = 1; i <= 10; i++) {
        printf("%s \n", msg);
    }

    return 0;
}
