#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float valor1, valor2;

    printf("Digite dois números quaisquer: ");
    scanf("%f%f", &valor1, &valor2);

    if (valor2 == 0) {
        printf("Impossível dividir por 0.");
    } else {
        printf("O valor %f dividido por %f é de %f", valor1, valor2, valor1 / 2);
    }

    return 0;
}
