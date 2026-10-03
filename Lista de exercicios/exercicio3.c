#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float vetor[50], somaTdos, somaEleMaiMed, maiorValor;
    int posiMaiorValor;

    for (int i = 0; i < 50; i++) {
        printf("Insira o %dº valor: ", i+1);
        scanf("%f", &vetor[i]);
        somaTdos+=vetor[i];
    }

    for (int i = 0; i < 50; i++) {
        maiorValor = vetor[0];

        if (vetor[i] > somaTdos / 50) {
            somaEleMaiMed+=vetor[i];
        }

        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];
            posiMaiorValor = i;
        }
    }

    printf("A média é %.2f.\nA soma de todos os elementos maiores que a média é %.2f.\nA posição do elemento de maior valor é %d", somaTdos/50, somaEleMaiMed, posiMaiorValor);

    return 0;
}
