#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int caracter = 0;

    printf("Digite quantos caracteres você deseja: ");
    scanf("%d", &caracter);

    while(caracter > 0) {
        printf("Digite o caracter que deseja: \n");
        getche();
        caracter--;
    }

    return 0;
}

