#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char palavra[255];
    int vogal = 0, consoante = 0;

    printf("Digite sua palavra / frase: ");
    gets(palavra);

    for (int i = 0; i < strlen(palavra); i++) {
        if (tolower(palavra[i]) == 'a' || tolower(palavra[i]) == 'e' || tolower(palavra[i]) == 'i' || tolower(palavra[i]) == 'o' || tolower(palavra[i]) == 'u') {
            vogal++;
        } else {
            consoante++;
        }
    }

    printf("Consoante: %d\nVogais: %d", consoante, vogal);

    return 0;
}
