#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char palavra[255];
    int vogal = 0, consoante = 0;

    printf("Digite sua palavra / frase: ");
    strlwr(gets(palavra));
    
    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            vogal++;
        } else {
            consoante++;
        }
    }

    printf("Consoante: %d\nVogais: %d", consoante, vogal);

    return 0;
}
