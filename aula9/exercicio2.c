#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct{
    char nome[20], endereco[50], telefone[11], email[100];
} agendaTelefonica;


int main() {
    setlocale(LC_ALL, "portuguese");

    agendaTelefonica contatos[100];
    int i = 0;
    int opcao;

    do {
        printf("Selecione uma das seguintes opções para prosseguir:\n[0]Sair\n[1]Cadastrar Contato\n");
        scanf("%d", &opcao);
        getchar();

        if (opcao == 1) {
            printf("Digite o nome do contato que deseja cadastrar: ");
            gets(contatos[i].nome);
            printf("\nDigite o endereco do contato: ");
            gets(contatos[i].endereco);
            printf("\nDigite o telefone do contato: ");
            gets(contatos[i].telefone);
            printf("\nDigite o email do contato: ");
            gets(contatos[i].email);
            printf("Cadastrado com sucesso.");
            getchar();
            system("cls");
            i++;
        }
    } while (opcao != 0 && i != 100);

    printf("=========================================\n");
    for (int j = 0; j < i; j++) {
        printf("Nome: %s\n", contatos[j].nome);
        printf("Endereço: %s\n", contatos[j].endereco);
        printf("Telefone: %s\n", contatos[j].telefone);
        printf("Email: %s\n", contatos[j].email);
        printf("=========================================\n");
    }

    return 0;
}
