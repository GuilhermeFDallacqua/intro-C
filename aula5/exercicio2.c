#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int numAtual;
    int soma, qtndNum = 0;
    do {
        printf("Digite números inteiros maiores que 0: ");
        scanf("%d", &numAtual);
        soma+=numAtual;
        qtndNum++;
    } while (numAtual >= 0);

    printf("A soma total dos números é %d, e a quantidade de números informados é de %d", soma, qtndNum);

    return 0;
}
