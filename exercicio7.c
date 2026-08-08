#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char nome[255];
    float nota1, nota2;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", &nome);

    printf("Digite o valor da primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite o valor da segunda nota: ");
    scanf("%f", &nota2);

    printf("A média do aluno %s é igual a %f", nome, (nota1 + nota2) / 2);ui

    return 0;
}
