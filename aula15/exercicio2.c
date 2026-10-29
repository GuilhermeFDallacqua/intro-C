#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no{
    float num;
    struct no *prox;
} no;

typedef struct{
    no *inicio;
    no *fim;
} fila;

fila* inicializar() {
    fila *f;

    f = malloc(sizeof(fila));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

void enfileirar(fila *f, float valor) {
    no *novo = malloc(sizeof(no));

    novo->num = valor;
    novo->prox = NULL;

    if (f->inicio == NULL) {
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }
}

void desenfileirar(fila *f) {
    no *aux = f->inicio;

    if (f->inicio == NULL) {
        printf("Fila vazia.\n");
        return;
    }

    if (f->inicio->prox == NULL) {
        free(f->inicio);
        f->inicio = NULL;
        f->fim = NULL;
        return;
    }

    f->inicio = aux->prox;
    free(aux);
}

void exibir_fila(fila *f) {
    no *aux = f->inicio;

    while (aux != NULL) {
        printf("%.2f -> ", aux->num);
        aux = aux->prox;
    }
    printf("NULL\n");
}

void liberar_memoria(fila *f) {
    no *aux;

    while (f->inicio != NULL) {
        aux = f->inicio;
        f->inicio = f->inicio->prox;
        free(aux);
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");

    fila *f = inicializar();

    enfileirar(f, 3.1);
    enfileirar(f, 3.1415926535897);
    enfileirar(f, 310);
    desenfileirar(f);
    exibir_fila(f);
    liberar_memoria(f);

    return 0;
}
