#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char cpf[12];
    char nome[50];
    char idade[3];
    char sexo;
    float salario;
} formFunci;

void buscarFuncionario(char cpf[12], formFunci lista[], int contador) {
    int encontrado = 0;
    for (int i = 0; i < contador; i++) {
        if (strcmp(cpf, lista[i].cpf) == 0) {
            printf("\nFuncionário Encontrado\n");
            printf("CPF: %s\n", lista[i].cpf);
            printf("Nome: %s\n", lista[i].nome);
            printf("Idade: %s\n", lista[i].idade);
            printf("Sexo: %c\n", lista[i].sexo);
            printf("Salário: %.2f\n\n", lista[i].salario);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("\nCPF não encontrado no sistema!\n\n");
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao, contador = 0;
    char cpf[12];
    formFunci funcionarios[20];

    do {
        printf("Selecione a opção que deseja:\n\n[0] Sair do sistema.\n[1] Cadastrar funcionário.\n[2] Buscar funcionário por cpf.\n[3] Listar todos os dados do funcionário com salario maior que a média salarial da empresa.\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Saindo do sistema...\n");
                system("pause");
                system("cls");
                break;

            case 1:
                if (contador < 20) {
                    printf("Insira o CPF do funcionário: ");
                    scanf("%s", funcionarios[contador].cpf);

                    printf("Insira o nome do funcionário: ");
                    getchar();
                    gets(funcionarios[contador].nome);

                    printf("Insira a idade do funcionário: ");
                    scanf("%s", funcionarios[contador].idade);

                    printf("Insira o sexo do funcionário (apenas a letra respectiva f/m): ");
                    getchar();
                    funcionarios[contador].sexo = getchar();

                    printf("Insira o salario do funcionário: ");
                    scanf("%f", &funcionarios[contador].salario);

                    contador++;
                } else {
                    printf("Limite máximo de 20 funcionários atingido!\n");
                }

                system("pause");
                system("cls");
                break;

            case 2:
                printf("Insira o cpf que deseja para buscar o funcionario: ");
                scanf("%s", cpf);
                buscarFuncionario(cpf, funcionarios, contador);

                system("pause");
                system("cls");
                break;

            case 3:
                if (contador == 0) {
                    printf("\nNenhum funcionário cadastrado.\n\n");
                } else {
                    float soma = 0, media;
                    for (int i = 0; i < contador; i++) {
                        soma += funcionarios[i].salario;
                    }
                    media = soma / contador;

                    printf("\nMédia salarial da empresa: %.2f\n", media);
                    printf("--- Funcionários com salário acima da média ---\n");

                    for (int i = 0; i < contador; i++) {
                        if (funcionarios[i].salario > media) {
                            printf("CPF: %s | Nome: %s | Idade: %s | Sexo: %c | Salário: %.2f\n",
                                   funcionarios[i].cpf, funcionarios[i].nome, funcionarios[i].idade, funcionarios[i].sexo, funcionarios[i].salario);
                        }
                    }
                    printf("\n");
                }

                system("pause");
                system("cls");
                break;
        }

    } while (opcao != 0);

    return 0;
}
