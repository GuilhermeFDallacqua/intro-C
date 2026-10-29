#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no{
    float num;
    struct no *prox;
} no;

no* inicializar() {
    return NULL;
}

no* push(no *inicio, int valor) {
    no *novo;

    novo = malloc(sizeof(no));
    novo->num = valor;
    novo->prox = inicio;
    return novo;
}

no* pop(no *inicio) {
    no *aux = inicio;

    if (inicio == NULL) {
        printf("Pilha vazia.\n");
        return NULL;
    }

    inicio = aux->prox;
    free(aux);

    return inicio;
}

void exibir_pilha(no *inicio) {
    no *aux = inicio;

    if (inicio == NULL) {
        printf("Lista vazia./n");
        return;
    }

    while(aux != NULL) {
        printf("%f -> ", aux->num);
        aux = aux->prox;
    }

    printf("NULL\n");
    return;
}

void liberar_memoria(no *inicio) {
    no *aux;

    if (inicio == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    while (aux != NULL) {
        aux = inicio;
        inicio = aux->prox;
        free(aux);
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");

    no *inicio;

    inicio = inicializar();
    inicio = push(inicio, 3);
    inicio = push(inicio, 13);
    inicio = push(inicio, 33);
    inicio = pop(inicio);
    exibir_pilha(inicio);
    liberar_memoria(inicio);

    return 0;
}
