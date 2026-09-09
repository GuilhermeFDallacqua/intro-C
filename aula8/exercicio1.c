#include <stdio.h>
#include <string.h>
#include <locale.h>

struct aluno{
    char nome[50];
    char ra[20];
    char cidade[50];
    float media;
};

int main() {
    setlocale(LC_ALL, "portuguese");
    
    struct aluno a1, a2, a3;
    float maior_media;

    for (int i = 1; i <= 3; i++) {
        printf("--- Dados do Aluno %d ---\n", i + 1);
        printf("Nome: ");
        scanf("%49s", a[i].nome);
        printf("RA: ");
        scanf("%19s", a[i].ra);
        printf("Cidade: ");
        scanf("%49s", a[i].cidade);
        printf("Media: ");
        scanf("%f", &a[i].media);
        printf("\n");
    }

    printf("Alunos que moram em Marilia:\n");
    int encontrou_marilia = 0;
    for (int i = 1; i <= 3; i++) {
        if (strcmp(a[i].cidade, "Marilia") == 0 || strcmp(a[i].cidade, "Marília") == 0) {
            printf("- %s\n", a[i].nome);
            encontrou_marilia = 1;
        }
    }
    if (!encontrou_marilia) {
        printf("Nenhum aluno cadastrado mora em Marilia.\n");
    }

    maior_media = alunos[0].media;
    for (int i = 1; i < 3; i++) {
        if (alunos[i].media > maior_media) {
            maior_media = alunos[i].media;
        }
    }

    printf("\nRA do(s) aluno(s) com a maior media (%.2f):\n", maior_media);
    for (int i = 0; i < 3; i++) {
        if (alunos[i].media == maior_media) {
            printf("- %s\n", alunos[i].ra);
        }
    }

    return 0;
}
