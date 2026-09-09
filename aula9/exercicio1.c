#include <stdio.h>
#include <locale.h>

typedef struct {
    char nome[20], RA[7];
    float media;
} t_alunos;

int main() {
    setlocale(LC_ALL, "portuguese");

    t_alunos aluno[10];
    int mediaMaior[5], mediaMenor[5], maior, menor;

    for (int i = 0; i < 10; i++) {
        printf("Digite o nome do aluno: ");
        gets(aluno[i].nome);
        printf("Digite o RA do aluno: ");
        gets(aluno[i].RA);
        printf("Digite a média do aluno: ");
        scanf("%f", &aluno[i].media);
        getchar();
    }

    maior = aluno[0].media;
    menor = maior;

    for (int i = 1; i < 5; i++) {
        if (aluno[i].media > maior) {
            maior = aluno[i].media;
        } else if (aluno[i].media == 10) {
            mediaMaior[i] = i;
        } else if ({
        }
    }


    printf("Alunos de maior média:");
    for (int i = 0; i < 5; i++) {
        printf("\n%s\n", aluno[mediaMaior[i]].nome);
    }

    printf("Alunos de menor média:");
    for (int i = 0; i < 5; i++) {
        printf("\n%s\n", aluno[mediaMenor[i]].RA);
    }

    return 0;
}
