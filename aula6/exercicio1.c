#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int notas[10], soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Insira a nota: ");
        scanf("%d", &notas[i]);
        soma += notas[i];
    }

    printf("%d", soma);



    return 0;
}
