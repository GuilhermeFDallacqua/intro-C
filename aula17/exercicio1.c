#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no{
    int num;
    struct no *esq;
    struct no *dir;
} no;

no* insere(no *raiz, int valor) {
    if (raiz == NULL) {
        raiz = malloc(sizeof(no));
        raiz->num = valor;
        raiz->esq = NULL;
        raiz->dir = NULL;
    } else if (valor == raiz->num) {
        printf("Valor inválido. Não se pode inserir um valor que ja tem dentro da arvore.");
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
        printf("%d", raiz->num);
        percorrer_pre_ordem(raiz->esq);
        percorrer_pre_ordem(raiz->dir);
    }
}

void percorrer_em_ordem(no *raiz) {
    if (raiz != NULL) {
        percorrer_em_ordem(raiz->esq);
        printf("%d", raiz->num);
        percorrer_em_ordem(raiz->dir);
    }
}

void percorrer_pos_ordem(no *raiz) {
    if (raiz != NULL) {
        percorrer_em_ordem(raiz->esq);
        percorrer_em_ordem(raiz->dir);
        printf("%d", raiz->num);
    }
}

void buscar_valor(no *raiz, int valor) {
    if (raiz == NULL) {
        printf("Valor não encontrado!");
    } else if (valor == raiz->num) {
        printf("Valor encontrado!");
    } else if (valor < raiz->num) {
        buscar_valor(raiz->esq, valor);
    } else {
        buscar_valor(raiz->dir, valor);
    }
}

//void exibir_arvore(no *raiz) {}

void percorrer_pos_ordem(no *raiz) {
    if (raiz != NULL) {
        percorrer_em_ordem(raiz->esq);
        percorrer_em_ordem(raiz->dir);
        free(raiz);
    }
}

int encontrar_maior(no *raiz) {
    no *aux = raiz;

    while (aux->dir != NULL) {
        aux = aux->dir;
    }

    return aux->num;
}

int encontrar_menor(no *raiz) {
    no *aux = raiz;

    while (aux->esq != NULL) {
        aux = aux->esq;
    }

    return aux->num;
}


int main() {
    setlocale(LC_ALL, "portuguese");



    return 0;
}
