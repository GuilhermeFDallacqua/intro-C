#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void calcularMedia(float n);
void calcularVolumeCubo(float aresta);
void fatorial(int n);

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao, n, valorFatorial;
    float aresta;

    do {
        printf("Digite a opcão que deseja:\n\n[0]Sair do menu\n[1]Calcular média.\n[2]Informar volume do cubo.\n[3]Fatorial de 'N'\n");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o valor de N (Quantidade de número que deseja calcular a média.): ");
            scanf("%d", &n);
            calcularMedia(n);
        } else if (opcao == 2) {
            printf("Digite o valor da aresta do cubo: ");
            scanf("%f", &aresta);
            calcularVolumeCubo(aresta);
        } else if (opcao == 3) {
            printf("Digite o valor de 'N' (Valor que deseja saber o fatorial.): ");
            scanf("%d", &valorFatorial);
            fatorial(valorFatorial);
        } else if (opcao == 0) {
            printf("Saido do menu...\n");
            system("pause");
            system("cls");
        } else {
            printf("Valor inválido, tente escolher um entre as opcoes mencionadas anteriormente.");
            system("pause");
            system("cls");
        }
    } while(opcao != 0);

    return 0;
}

void calcularMedia(float n) {
    float soma = 0, media, numero;

    for (int i = 0; i < n; i++) {
        printf("Insira o número: ");
        scanf("%f", &numero);
        soma+=numero;
    }
    media = soma / n;

    printf("A média é %.2f\n", media);
    system("pause");
    system("cls");
}

void calcularVolumeCubo(float aresta) {
    float volume = aresta * aresta * aresta;

    printf("O volume do quadrado é %.2f.\n", volume);
    system("pause");
    system("cls");
}

void fatorial(int n) {
    int fatorial = 1;

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é igual a %d.\n", n, fatorial);
    system("pause");
    system("cls");
}

