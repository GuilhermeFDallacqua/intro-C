#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float maior, menor, soma, numAtual;

    for(float i = 1; i <= 10; i++) {
        printf("Digite o %f valor: ", i);
        scanf("%f", &numAtual);

        soma += numAtual;

        if (maior < numAtual) {
            maior = numAtual;
        }

        if (menor > numAtual) {
            menor = numAtual;
        }


    }

    printf("O maior número é o %f, o menor número é o %f, a soma é %f e a média é %f", maior, menor, soma, soma / 10);
    return 0;
}
