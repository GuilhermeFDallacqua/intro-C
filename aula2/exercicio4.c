#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float nota1, nota2;

    printf("Digite as duas notas do aluno: ");
    scanf("%f%f", &nota1, &nota2);

    float media = (nota1 + nota2) / 2;

    if (media >= 7) {
        printf("Aprovado");
    } else if (media >= 4 && media < 7) {
        printf("Você ficou de exame, é necessário tirar %f de nota para passar.", 10-media);
    } else {
        printf("Reprovado");
    }

    return 0;
}
