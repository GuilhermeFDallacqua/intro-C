#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char opcao;
    int contador = 0;

    do {
        printf("Digite caracteres do teclado: \n");
        opcao = getch();
        contador++;
    } while(opcao != '$' || contador > 35);

    return 0;
}
