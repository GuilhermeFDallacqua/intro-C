#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float notas[10];
    float soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Insira a nota: ");
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    printf("%f", soma);



    return 0;
}
