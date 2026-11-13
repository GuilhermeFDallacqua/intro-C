#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no {
    int num;
    struct no *esq;
    struct no *dir;
} no;

no* insere(no *raiz, int valor) {
    if (raiz == NULL) {
        raiz = (no*) malloc(sizeof(no));
        raiz->num = valor;
        raiz->esq = NULL;
        raiz->dir = NULL;
    } else if (valor == raiz->num) {
        printf("\n[Erro] Valor inválido. Não se pode inserir um valor que já existe na árvore.\n");
        return raiz;
    } else if (valor < raiz->num) {
        raiz->esq = insere(raiz->esq, valor);
    } else {
        raiz->dir = insere(raiz->dir, valor);
    }
    return raiz;
}

void percorrer_pre_ordem(no *raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->num);
        percorrer_pre_ordem(raiz->esq);
        percorrer_pre_ordem(raiz->dir);
    }
}

void percorrer_em_ordem(no *raiz) {
    if (raiz != NULL) {
        percorrer_em_ordem(raiz->esq);
        printf("%d ", raiz->num);
        percorrer_em_ordem(raiz->dir);
    }
}

void percorrer_pos_ordem(no *raiz) {
    if (raiz != NULL) {
        percorrer_pos_ordem(raiz->esq);
        percorrer_pos_ordem(raiz->dir);
        printf("%d ", raiz->num);
    }
}

no* buscar_valor(no *raiz, int valor) {
    if (raiz == NULL || raiz->num == valor) {
        return raiz;
    }
    if (valor < raiz->num) {
        return buscar_valor(raiz->esq, valor);
    } else {
        return buscar_valor(raiz->dir, valor);
    }
}

void exibir_arvore(no *raiz, int nivel) {
    if (raiz == NULL) return;

    exibir_arvore(raiz->dir, nivel + 1);

    for (int i = 0; i < nivel; i++) {
        printf("\t");
    }
    printf("%d\n", raiz->num);

    exibir_arvore(raiz->esq, nivel + 1);
}

int encontrar_maior(no *raiz) {
    if (raiz == NULL) {
        printf("\nÁrvore vazia!\n");
        return -1;
    }
    no *aux = raiz;
    while (aux->dir != NULL) {
        aux = aux->dir;
    }
    return aux->num;
}

int encontrar_menor(no *raiz) {
    if (raiz == NULL) {
        printf("\nÁrvore vazia!\n");
        return -1;
    }
    no *aux = raiz;
    while (aux->esq != NULL) {
        aux = aux->esq;
    }
    return aux->num;
}

no* remover(no *raiz, int valor) {
    if (raiz == NULL) {
        printf("\n[Erro] Valor não encontrado para remoção!\n");
        return NULL;
    }

    if (valor < raiz->num) {
        raiz->esq = remover(raiz->esq, valor);
    } else if (valor > raiz->num) {
        raiz->dir = remover(raiz->dir, valor);
    } else {
        if (raiz->esq == NULL) {
            no *temp = raiz->dir;
            free(raiz);
            return temp;
        } else if (raiz->dir == NULL) {
            no *temp = raiz->esq;
            free(raiz);
            return temp;
        }

        no *temp = raiz->dir;
        while (temp->esq != NULL) {
            temp = temp->esq;
        }
        raiz->num = temp->num;
        raiz->dir = remover(raiz->dir, temp->num);
    }
    return raiz;
}

void liberar_arvore(no *raiz) {
    if (raiz != NULL) {
        liberar_arvore(raiz->esq);
        liberar_arvore(raiz->dir);
        free(raiz);
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");
    no *raiz = NULL;
    int opcao, valor;

    do {
        printf("\n================ MENU ÁRVORE BINÁRIA ================\n");
        printf("1. Inserir nó\n");
        printf("2. Percorrer em Pré-ordem\n");
        printf("3. Percorrer em Ordem (Em-ordem)\n");
        printf("4. Percorrer em Pós-ordem\n");
        printf("5. Buscar valor\n");
        printf("6. Exibir árvore visualmente\n");
        printf("7. Encontrar maior valor\n");
        printf("8. Encontrar menor valor\n");
        printf("9. Remover nó\n");
        printf("10. Liberar memória e sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                raiz = insere(raiz, valor);
                break;
            case 2:
                printf("\nPré-ordem: ");
                percorrer_pre_ordem(raiz);
                printf("\n");
                break;
            case 3:
                printf("\nEm ordem: ");
                percorrer_em_ordem(raiz);
                printf("\n");
                break;
            case 4:
                printf("\nPós-ordem: ");
                percorrer_pos_ordem(raiz);
                printf("\n");
                break;
            case 5:
                printf("Digite o valor que deseja buscar: ");
                scanf("%d", &valor);
                if (buscar_valor(raiz, valor) != NULL) {
                    printf("\n[Sucesso] Valor %d encontrado na árvore!\n", valor);
                } else {
                    printf("\n[Aviso] Valor %d não encontrado!\n", valor);
                }
                break;
            case 6:
                printf("\n--- Visualização da Árvore (Raiz à esquerda) ---\n\n");
                exibir_arvore(raiz, 0);
                printf("------------------------------------------------\n");
                break;
            case 7:
                valor = encontrar_maior(raiz);
                if (valor != -1) printf("\nMaior valor: %d\n", valor);
                break;
            case 8:
                valor = encontrar_menor(raiz);
                if (valor != -1) printf("\nMenor valor: %d\n", valor);
                break;
            case 9:
                printf("Digite o valor a ser removido: ");
                scanf("%d", &valor);
                raiz = remover(raiz, valor);
                break;
            case 10:
                liberar_arvore(raiz);
                raiz = NULL;
                printf("\nMemória liberada com sucesso. Saindo...\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }
    } while (opcao != 10);

    return 0;
}
