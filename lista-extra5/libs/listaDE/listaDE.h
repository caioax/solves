#include <bits/stdc++.h>
#include <stdio.h>
#define TRUE 1
#define FALSE 0

struct no {
    int dado;
    struct no *prox;
    struct no *ant;
};

typedef struct {
    struct no *inicio;
    struct no *fim;
} listaDE;

void create(listaDE *q) { q->inicio = NULL; }

int isEmpty(listaDE q) {
    if (q.inicio == NULL)
        return (TRUE);
    else
        return (FALSE);
}

int insert(listaDE *q, int d) {
    struct no *aux;
    if (q->inicio == NULL) {
        aux = (struct no *)malloc(sizeof(struct no));
        aux->dado = d;
        aux->prox = NULL;
        aux->ant = NULL;
        q->inicio = aux;
        q->fim = aux;
        return (TRUE);
    }
    aux = (struct no *)malloc(sizeof(struct no));
    aux->dado = d;
    aux->prox = NULL;
    aux->ant = q->fim;

    q->fim->prox = aux;
    q->fim = aux;
    return (TRUE);
}

void insertInicio(listaDE *q, int d) {
    struct no *aux;
    aux = (struct no *)malloc(sizeof(struct no));

    if (aux == NULL)
        return;

    aux->dado = d;
    aux->ant = NULL;
    aux->prox = q->inicio;

    if (q->inicio == NULL)
        q->fim = aux;
    else
        q->inicio->ant = aux;

    q->inicio = aux;
}

void insertMeio(listaDE *q, int i, int d) {
    if (!i) {
        insertInicio(q, d);
        return;
    }
    int j = 0;
    struct no *aux;
    aux = (struct no *)malloc(sizeof(struct no));

    if (aux == NULL)
        return;

    aux->dado = d;
    aux->ant = NULL;
    aux->prox = NULL;

    struct no *atual = q->inicio;
    while (atual != NULL && j < i) {
        atual = atual->prox;
        j++;
    }

    if (atual == NULL) {
        insert(q, d);
        return;
    }

    aux->prox = atual;
    aux->ant = atual->ant;
    atual->ant->prox = aux;
    atual->ant = aux;
}

void contaNos(listaDE q, int *n) {
    int r = 0;
    struct no *aux = q.inicio;
    while (aux != NULL) {
        r++;
        aux = aux->prox;
    }
    *n = r;
}

void imprime(listaDE q, char modo) {
    struct no *aux;
    if (!isEmpty(q)) {
        if (modo == 'i') {
            aux = q.inicio;
            while (aux != NULL) {
                printf("%d ", aux->dado);
                aux = aux->prox;
            }
        } else {
            aux = q.fim;
            while (aux != NULL) {
                printf("%d ", aux->dado);
                aux = aux->ant;
            }
        }
        printf("\n");
    }
}

int remover(listaDE *q, int d) {
    struct no *aux;
    struct no *atual;
    struct no *anterior;
    if (d == (q->inicio)->dado) {
        aux = q->inicio;
        if (q->inicio->prox == NULL) {
            q->inicio = NULL;
            q->fim = NULL;
        } else {
            q->inicio = aux->prox;
            q->inicio->ant = aux->ant;
        }
        free(aux);
        return (TRUE);
        aux = q->inicio;
        if (q->inicio->prox == NULL) {
            q->inicio = NULL;
            q->fim = NULL;
        } else {
            q->inicio = aux->prox;
            q->inicio->ant = aux->ant;
        }
        free(aux);
        return (TRUE);
    } else {
        anterior = q->inicio;
        atual = q->inicio->prox;
        while (atual != NULL && atual->dado != d) {
            anterior = atual;
            atual = atual->prox;
        }
        if (atual != NULL) {
            aux = atual;
            anterior->prox = atual->prox;
            if (atual->prox != NULL)
                atual->prox->ant = anterior;
            else
                q->fim = anterior;

            free(aux);
            return (TRUE);
        }
    }
    return (FALSE);
}

void removerInicio(listaDE *q, int &d) {
    d = q->inicio->dado;
    remover(q, q->inicio->dado);
}

void removerMeio(listaDE *q, int i, int &d) {
    int j = 0;
    struct no *atual = q->inicio;
    while (atual != NULL && j < i) {
        atual = atual->prox;
        j++;
    }
    d = atual->dado;
    remover(q, atual->dado);
}

void removerFim(listaDE *q, int &d) {
    d = q->fim->dado;
    remover(q, q->fim->dado);
}

void busca(listaDE *q, int d, int &i) {
    struct no *aux = q->inicio;
    i = -1;
    int j = 0;
    while (aux != NULL) {
        if (aux->dado == d)
            i = j;
        aux = aux->prox;
        j++;
    }
}
