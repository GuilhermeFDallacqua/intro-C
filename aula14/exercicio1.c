#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no{
    int info;
    struct no *prox;
    struct no *ant;
} no;

no* inicializar() {
    return NULL;
}

no* insere_inicio(no *inicio, int valor) {
    no *novo;

    novo = malloc(sizeof(no));
    novo->info = valor;
    novo->ant = NULL;
    novo->prox = inicio;

    if (inicio != NULL) {
        inicio->ant = novo;
    }

    return novo;
}

no *remove_inicio(no *inicio) {
    no *aux;

    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return NULL;
    }

    aux = inicio;
    inicio = inicio->prox;

    if (inicio != NULL) {
        inicio->ant = NULL;
    }
    free(aux);
    return inicio;
}

void exibe_lista(no *inicio) {
    no *aux = inicio;
    
    printf("NULL <=> ");
    while (aux != NULL) {
        printf("%d <=> ", aux->info);
        aux = aux->prox;
    }
    printf("NULL \n");
}

void exibir_lista_invertida(no *inicio) {
    no *aux;
    aux = inicio;

    if (inicio == NULL) {
        printf("Lista vazia!\n");
    }

    while(aux->prox != NULL) {
        aux = aux->prox;
    }

    printf("NULL <=> ");
    while (aux != NULL) {
        printf("%d <=> ", aux->info);
        aux = aux->ant;
    }
    
    printf("NULL \n");
}


no* insere_fim(no *inicio, int valor) {
    no *novo, *aux;
    aux = inicio;

    novo = malloc(sizeof(no));
    novo->info = valor;
    novo->prox = NULL;

    if (inicio == NULL) {
        novo->ant = NULL;
        return novo;
    }

    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    aux->prox = novo;
    novo->ant = aux;

    return inicio;
}

no* remove_fim(no *inicio) {
    no *aux = inicio;

    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return NULL;
    }

    if (inicio->prox == NULL) {
        free(inicio);
        return NULL;
    }

    while (aux->prox->prox != NULL) {
        aux = aux->prox;
    }

    free(aux->prox);
    aux->prox = NULL;

    return inicio;
}

int buscar_valor(no *inicio, int valor) {
    no *aux = inicio;
    int i = 0;

    if (inicio == NULL) {
        printf("Lista vazia!\n");
        return -1;
    }

    while (aux != NULL) {
        if (aux->info == valor) {
            printf("Valor encontrado!");
            return i;
        }
        aux = aux->prox;
        i++;
    }

    printf("Valor não encontrado!");
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
        printf("Insira a opção que deseja:\n\n[0]Inserir um elemento no inicio da lista.\n[1]Remover um elemento do inicio da lista.\n[2]Exibir lista.\n[3]Exibir a lista invertida.\n[4]Inserir elemento no final da lista.\n[5]Remover um elemento no fim da lista.\n[6]Buscar um valor da lista.\n[7]Sair.\n");
        scanf("%d", &opcao);
        system("cls");

        switch (opcao) {
            case 0: {
                int valor;
                printf("Digite o valor que deseja inserir: ");
                scanf("%d", &valor);
                inicio = insere_inicio(inicio, valor);
                printf("Valor inserido com sucesso.\n");
                system("pause");
                system("cls");
                break;
            }
            case 1: {
                inicio = remove_inicio(inicio);
                system("pause");
                system("cls");
                break;
            }
            case 2: {
                exibe_lista(inicio);
                system("pause");
                system("cls");
                break;
            }
            case 3: {
                exibir_lista_invertida(inicio);
                system("pause");
                system("cls");
                break;
            }
            case 4: {
                int valor;
                printf("Digite o valor que deseja inserir no fim: ");
                scanf("%d", &valor);
                inicio = insere_fim(inicio, valor);
                printf("Valor inserido com sucesso.\n");
                system("pause");
                system("cls");
                break;
            }
            case 5: {
                inicio = remove_fim(inicio);
                system("pause");
                system("cls");
                break;
            }
            case 6: {
                int valor;
                if (inicio == NULL) {
                    printf("Lista vazia!\n");
                } else {
                    printf("Digite o valor que deseja buscar: ");
                    scanf("%d", &valor);

                    int resultado = buscar_valor(inicio, valor);
                    if (resultado == -1) {
                        printf("Valor não encontrado!\n");
                    } else {
                        printf("Valor encontrado no índice %d!\n", resultado);
                    }
                }
                system("pause");
                system("cls");
                break;
            }
            case 7: {
                printf("Saindo do sistema e liberando memória...\n");
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
    } while (opcao != 7);

    return 0;
}
