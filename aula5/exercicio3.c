#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao;
    float valor1, valor2;
    float numAtual, maiorNum;
    int x, somaX = 1;
    int a, b, total = 1;

    do{
        printf("----------MENU----------\n");
        printf("[0] Sair\n");
        printf("[1] Soma de dois valores reais\n");
        printf("[2] Encontrar o maior número entre 3\n");
        printf("[3] Calcular o fatorial de X\n");
        printf("[4] Calcular o valor de 'a' elevado a 'b'\n");
        scanf("%d", &opcao);

        switch(opcao) {
        case 1:
            printf("Digite o primeiro valor: ");
            scanf("%f", &valor1);
            printf("Digite o segundo valor: ");
            scanf("%f", &valor2);
            printf("A soma dos dois números são %f\n", valor1 + valor2);
            break;
        case 2:
            printf("Digite o número atual: ");
            scanf("%f", &numAtual);
            maiorNum = numAtual;
            for (int i = 1; i < 3; i++) {
                printf("Digite o número atual: ");
                scanf("%f", &numAtual);

                if (maiorNum < numAtual) {
                    maiorNum = numAtual;
                }
            }
            printf("O maior número é %f\n", maiorNum);
            break;
        case 3:
            printf("Digite o valor de X: ");
            scanf("%d", &x);
            for (int i = 1; i <= x; i++) {
                somaX = somaX * i;
            }
            printf("O fatorial de x é %d\n", somaX);
            somaX = 1;
            break;
        case 4:
            printf("Digite o valor de a: ");
            scanf("%d", &a);
            printf("Digite o valor de b: ");
            scanf("%d", &b);

            for (int i = 1; i <= b; i++) {
                total = total * a;
            }

            printf("O valor de 'a' elevado a 'b' é %d\n", total);
            total = 1;
            break;
        }
        system("pause");
        system("cls");

    } while (opcao != 0);

    return 0;
}
