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
    if (inicio == NULL) {
        printf("NULL\n");
        return;
    }

    no *aux = inicio;
    do {
        printf("%d -> ", aux->num);
        aux = aux->prox;
    } while (aux != inicio);

    printf("(volta ao início)\n");
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

no* inserir_loop(no *inicio, int valor) {
    no *aux = inicio;
    no *novo;

    novo = malloc(sizeof(no));
    novo->num = valor;

    while (aux->num != 10) {
        aux = aux->prox;
    }

    novo->prox = aux;

    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    aux->prox = novo;

    return inicio;
}

void verificar_se_tem_loop(no *inicio) {
    if (inicio == NULL || inicio->prox == NULL) {
        printf("Não é um loop\n");
        return;
    }

    no *slow = inicio;
    no *speed = inicio;

    while (speed != NULL && speed->prox != NULL) {
        slow = slow->prox;         // A tartaruga anda 1 passo
        speed = speed->prox->prox; // A lebre anda 2 passos

        if (slow == speed) {
            printf("É um loop\n");
            return;
        }
    }

    printf("Não é um loop\n");
}

void liberar_memoria(no *inicio) {
    if (inicio == NULL) return;

    no *aux = inicio;
    no *proximo;

    do {
        proximo = aux->prox;
        free(aux);
        aux = proximo;
    } while (aux != inicio);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    no *inicio;

    inicio = inicializar();
    inicio = inserir_final(inicio, 10);
    inicio = inserir_inicio(inicio, 20);
    inicio = inserir_final(inicio, 100);
    inicio = inserir_final(inicio, 2000);
    inicio = inserir_loop(inicio, -10);
    verificar_se_tem_loop(inicio);
    liberar_memoria(inicio);


    return 0;
}
