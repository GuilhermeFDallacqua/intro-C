#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct no{
    int num;
    struct no *prox;
} no;

no* inicializar() {
    return NULL;
}

no* inserir_inicio(no *inicio, int valor) {
    no *novo;

    novo = malloc(sizeof(no));
    novo->num = valor;
    novo->prox = inicio;
    return novo;
}

no* remover_inicio(no *inicio) {
    no *aux;

    if (inicio == NULL) {
        printf("Lista vazia.\n");
    } else {
        aux = inicio;
        inicio = aux->prox;
        free(aux);
        printf("Valor removido.\n");
    }
    return inicio;
}

void exibir_lista(no *inicio) {
    no *aux;

    aux = inicio;
    while (aux != NULL) {
        printf("%d -> ", aux->num);
        aux = aux->prox;
    }
    printf("NULL\n");
}

no* inserir_final(no *inicio, int valor) {
    no *novo, *aux;
    aux = inicio;

    novo = malloc(sizeof(no));
    novo->num = valor;
    novo->prox = NULL;

    if (inicio == NULL) {
        return novo;
    }

    while(aux->prox != NULL) {
        aux = aux->prox;
    }

    aux->prox = novo;

    return inicio;
}

no* remover_final(no *inicio) {
    no *aux;

    if (inicio == NULL) {
        printf("Lista vazia.\n");
        return NULL;
    }

    if (inicio->prox == NULL) {
        free(inicio);
        printf("Elemento removido do fim.\n");
        return NULL;
    }

    aux = inicio;

    while(aux->prox->prox != NULL) {
        aux = aux->prox;
    }
    free(aux->prox);
    aux->prox = NULL;
    printf("Elemento removido do fim.\n");

    return inicio;
}

int buscar_valor(no *inicio, int valor) {
    no *aux = inicio;
    int contador = 0;

    if (inicio == NULL) {
        return -2
    }

    while (aux != NULL) {
        if (aux->num == valor) {
            return contador;
        }
        aux = aux->prox;
        contador++;
    }

    return -1;
}

void liberar_memoria(no *inicio) {
    no *aux;

    while (inicio != NULL) {
        aux = inicio;
        inicio = inicio->prox;
        free(aux);
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao;
    no *inicio;

    inicio = inicializar();

    do {
        printf("Insira a opção que deseja:\n\n[0]Inserir um elemento no inicio da lista.\n[1]Remover um elemento do inicio da lista.\n[2]Exibir lista.\n[3]Inserir elemento no final da lista.\n[4]Remover um elemento no fim da lista.\n[5]Buscar um valor da lista.\n[6]Sair.\n");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            case 0: {
                int valor;

                printf("Digite o valor que deseja inserir: ");
                scanf("%d", &valor);

                inicio = inserir_inicio(inicio, valor);
                printf("Valor inserido.\n");

                system("pause");
                system("cls");
                break;
            }
            case 1: {
                inicio = remover_inicio(inicio);

                system("pause");
                system("cls");
                break;
            }
            case 2: {
                exibir_lista(inicio);
                system("pause");
                system("cls");
                break;
            }
            case 3: {
                int valor;

                printf("Digite o valor que deseja inserir: ");
                scanf("%d", &valor);

                inicio = inserir_final(inicio, valor);
                printf("Valor inserido.\n");

                system("pause");
                system("cls");
                break;
            }
            case 4: {
                inicio = remover_final(inicio);
                system("pause");
                system("cls");
                break;
            }
            case 5: {
                int valor;

                printf("Digite o valor que deseja buscar: ");
                scanf("%d", &valor);

                if (buscar_valor(inicio, valor) == -1) {
                    printf("Valor não encontrado.\n");
                } else if(buscar_valor(inicio, valor) == -2) {
                    printf("Lista vazia.\n");
                } else {
                    printf("O índice do valor %d é o %d° índice.\n", valor, buscar_valor(inicio, valor));
                }
                system("pause");
                system("cls");
                break;
            }
            case 6: {
                printf("Saindo do sistema...\n");
                liberar_memoria(inicio);
                system("pause");
                system("cls");
                break;
            }
            default: {
                printf("Opção inválida.\n");
                system("pause");
                system("cls");
                break;
            }
        }
    } while (opcao != 6);

    return 0;
}
