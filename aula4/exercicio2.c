#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");


    int lados = 0;
    float perimetro, ladoAtual = 0;

    printf("Digite quantos lados tem seu polígono: ");
    scanf("%d", &lados);

    if (lados < 3) {
        printf("Quantidade de lados inválida, impossivel um polígono ter menos de 3 lados.");
    } else {
        while(lados > 0) {
            printf("Digite o valor do lado atual: ");
            scanf("%f", &ladoAtual);

            if (ladoAtual > 0) {
                perimetro+=ladoAtual;
            } else {
                printf("Valor do lado inválido");
            }
            lados--;
        }
        printf("O valor do perímetro é de: %f", perimetro);
    }

    return 0;
}
