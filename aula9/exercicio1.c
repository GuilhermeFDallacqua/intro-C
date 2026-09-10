#include <stdio.h>
#include <locale.h>

typedef struct {
    char nome[50], ra[7];
    float media;
} Aluno;

int main() {
    setlocale(LC_ALL, "portuguese");

    Aluno alunos[10];
    Aluno temp;
    int i, j;

    printf("=== Leitura dos Dados dos %d Alunos ===\n\n", 10);

    for (i = 0; i < 10; i++) {
        printf("--- Aluno %d ---\n", i + 1);

        printf("Nome: ");
        gets(alunos[i].nome);

        printf("RA: ");
        gets(alunos[i].ra);

        printf("Media: ");
        scanf("%f", &alunos[i].media);
        printf("\n");
    }

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (alunos[j].media > alunos[j + 1].media) {
                temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }

    printf("=========================================\n");
    printf("5 Alunos com a MENOR media (Exibindo RA):\n");
    printf("=========================================\n");
    for (i = 0; i < 5; i++) {
        printf("RA: %d (Media: %.2f)\n", alunos[i].ra, alunos[i].media);
    }

    printf("\n=========================================\n");
    printf("5 Alunos com a MAIOR media (Exibindo Nome):\n");
    printf("=========================================\n");
    for (i = 10 - 5; i < 10; i++) {
        printf("Nome: %s (Media: %.2f)\n", alunos[i].nome, alunos[i].media);
    }

    return 0;
}
