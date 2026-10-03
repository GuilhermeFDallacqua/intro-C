#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float salaMateriaIngles[10], salaMateriaAlem[10], salaMateriaFranc[10];
    float somaIng, somaAle, somaFranc;
    float maiorMedia, menorMedia;

    printf("Insira os valores da turma de inglês.\n\n");
    for (int i = 0; i < 10; i++) {
        printf("Insira a nota do %dº aluno: ", i+1);
        scanf("%f", &salaMateriaIngles[i]);
    }
    system("pause");
    system("cls");

    printf("Insira os valores da turma de alemão.\n\n");
    for (int i = 0; i < 10; i++) {
        printf("Insira a nota do %dº aluno: ", i+1);
        scanf("%f", &salaMateriaAlem[i]);
    }
    system("pause");
    system("cls");

    printf("Insira os valores da turma de francês.\n\n");
    for (int i = 0; i < 10; i++) {
        printf("Insira a nota do %dº aluno: ", i+1);
        scanf("%f", &salaMateriaFranc[i]);
    }
    system("pause");
    system("cls");

    for (int i = 0; i < 10; i++) {
        somaIng+=salaMateriaIngles[i];
        somaAle+=salaMateriaAlem[i];
        somaFranc+=salaMateriaFranc[i];
    }

    printf("Média das salas.\n\nTurma de inglês: %.2f\nTurma de Alemão: %.2f\nTurma de Francês: %.2f\n", somaIng/10, somaAle/10, somaFranc/10);

    printf("Turma(ou turmas)com maior média.\n\n");

    maiorMedia = somaIng;
    if (maiorMedia < somaAle) {
        maiorMedia = somaAle;
    }

    if (maiorMedia < somaFranc) {
        maiorMedia = somaFranc;
    }

    menorMedia = somaIng;
    if (menorMedia > somaAle) {
        menorMedia = somaAle;
    }

    if (menorMedia > somaFranc) {
        menorMedia = somaFranc;
    }

    if (maiorMedia == somaIng) {
        printf("Inglês.\n");
    }

    if (maiorMedia == somaAle) {
        printf("Alemão.\n");
    }

    if (maiorMedia == somaFranc) {
        printf("Francês.\n\n");
    }

    printf("\nTurma(ou turmas)com menor média.\n\n");

    if (menorMedia == somaIng) {
        printf("Inglês.\n");
    }

    if (menorMedia == somaAle) {
        printf("Alemão.\n");
    }

    if (menorMedia == somaFranc) {
        printf("Francês.\n\n");
    }

    return 0;
}
