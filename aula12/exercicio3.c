#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char nome[50];
    char RA[8];
    char cidade[50];
    float media;
} alunos_form;

int main() {
    setlocale(LC_ALL, "portuguese");

    alunos_form *alunos = malloc(3 * sizeof(alunos_form));

    for (int i = 0; i < 3; i++) {
        printf("Insira o nome do %dº aluno: ", i+1);
        strlwr(gets(alunos[i].nome));

        printf("Insira o RA do %dº aluno: ", i+1);
        gets(alunos[i].RA);

        printf("Insira a cidade do %dº aluno: ", i+1);
        strlwr(gets(alunos[i].cidade));

        printf("Insira a média do %dº aluno: ", i+1);
        scanf("%f", &alunos[i].media);
        getchar();
    }

    printf("Alunos que moram em marilia:\n\n");
    for (int i = 0; i < 3; i++) {
        if (strcmp(alunos[i].cidade, "marilia") == 0) {
            printf("%s\n", alunos[i].nome);
        }
    }

    printf("Alunos com media maior que 7:\n\n");
    for (int i = 0; i < 3; i++) {
        if (alunos[i].media > 7) {
            printf("%s", alunos[i].RA);
        }
    }

    free(alunos);
    return 0;
}
