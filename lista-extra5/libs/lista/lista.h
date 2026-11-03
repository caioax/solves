#include <bits/stdc++.h>
#include <pthread.h>
#define TRUE 1
#define FALSE 0

struct no {
    int dado;
    struct no *prox;
};

typedef struct {
    struct no *inicio;
} lista;

void create(lista *q) {
    q->inicio = NULL;
}

int isEmpty(lista q) {
    if (q.inicio == NULL)
        return TRUE;
    else
        return FALSE;
}

int insert(lista *q, int d) {

    struct no *aux, *atual, *anterior;
    aux = (struct no *)malloc(sizeof(struct no));

    if (aux == NULL)
        return (FALSE);
    aux->dado = d;
    aux->prox = NULL;
    anterior = NULL;
    atual = q->inicio;
    while (atual != NULL && d > atual->dado) {
        anterior = atual;
        atual = atual->prox;
    }
    if (anterior == NULL) {
        aux->prox = q->inicio;
        q->inicio = aux;
    } else {
        anterior->prox = aux;
        aux->prox = atual;
    }
    return (TRUE);
}

void imprime(lista q) {
    struct no *aux;
    aux = q.inicio;
    if (!isEmpty(q)) {
        while (aux != NULL) {
            if (aux != q.inicio)
                printf(", ");
            printf("%d", aux->dado);
            aux = aux->prox;
        }
    }
}

int remover(lista *q, int d) {

    struct no *aux, *atual, *anterior;

    if (d == (q->inicio)->dado) {
        aux = q->inicio;
        q->inicio = (q->inicio)->prox;
        free(aux);
        return (TRUE);
    } else {
        anterior = q->inicio;
        atual = (q->inicio)->prox;
        while (atual != NULL && atual->dado != d) {
            anterior = atual;
            atual = atual->prox;
        }
        if (atual != NULL) {
            aux = atual;
            anterior->prox = atual->prox;
            free(aux);
            return (TRUE);
        }
    }
    return (FALSE);
}

int inverter(lista *q) {
    struct no *proximo, *atual, *anterior;
    atual = q->inicio;
    anterior = NULL;

    while (atual != NULL) {
        proximo = atual->prox;
        atual->prox = anterior;
        anterior = atual;
        atual = proximo;
    }
    q->inicio = anterior;

    return (TRUE);
}

void imprimeRecursivo(no *no, int i = 0) {
    if (no == NULL)
        return;

    if (i)
        printf(", ");
    printf("%d", no->dado);
    i++;
    return imprimeRecursivo(no->prox, i);
}

void removerTodos(lista *q, int d) {
    struct no *aux, *atual, *anterior;

    while (q->inicio != NULL && q->inicio->dado == d) {
        aux = q->inicio;
        q->inicio = aux->prox;
        free(aux);
    }

    if (q->inicio == NULL)
        return;

    anterior = q->inicio;
    atual = anterior->prox;
    while (atual != NULL) {
        if (atual->dado == d) {
            anterior->prox = atual->prox;
            free(atual);
            atual = anterior->prox;
        } else {
            anterior = atual;
            atual = atual->prox;
        }
    }
}

void contaOcorrencias(lista *q, int d, int *r) {
    struct no *aux = q->inicio;
    int s = 0;
    while (aux != NULL) {
        if (aux->dado == d)
            s++;
        aux = aux->prox;
    }
    *r = s;
}

void separarParImpar(lista *q, lista *pares, lista *impares) {
    struct no *aux, *fimP = NULL, *fimI = NULL;
    pares->inicio = NULL;
    impares->inicio = NULL;

    while (q->inicio != NULL) {
        aux = q->inicio;
        q->inicio = aux->prox;
        aux->prox = NULL;
        if (aux->dado % 2 == 0) {
            if (fimP == NULL)
                pares->inicio = aux;
            else
                fimP->prox = aux;
            fimP = aux;
        } else {
            if (fimI == NULL)
                impares->inicio = aux;
            else
                fimI->prox = aux;
            fimI = aux;
        }
    }
}

int pertence(lista *a, int x) {
    struct no *aux = a->inicio;
    while (aux != NULL) {
        if (aux->dado == x)
            return (TRUE);
        aux = aux->prox;
    }
    return (FALSE);
}

void uniao(lista *a, lista *b, lista *r) {
    struct no *aux;
    create(r);
    for (aux = a->inicio; aux != NULL; aux = aux->prox)
        if (!pertence(r, aux->dado))
            insert(r, aux->dado);
    for (aux = b->inicio; aux != NULL; aux = aux->prox)
        if (!pertence(r, aux->dado))
            insert(r, aux->dado);
}

void interseccao(lista *a, lista *b, lista *r) {
    struct no *aux;
    create(r);
    for (aux = a->inicio; aux != NULL; aux = aux->prox)
        if (pertence(b, aux->dado) && !pertence(r, aux->dado))
            insert(r, aux->dado);
}

void diferenca(lista *a, lista *b, lista *r) {
    struct no *aux;
    create(r);
    for (aux = a->inicio; aux != NULL; aux = aux->prox)
        if (!pertence(b, aux->dado) && !pertence(r, aux->dado))
            insert(r, aux->dado);
}

struct termo {
    float coef;
    int exp;
    struct termo *prox;
};

typedef struct {
    struct termo *inicio;
} polinomio;

void createPoli(polinomio *p) {
    p->inicio = NULL;
}

int insertTermo(polinomio *p, float c, int e) {
    struct termo *aux, *atual, *anterior;

    if (c == 0)
        return (FALSE);

    anterior = NULL;
    atual = p->inicio;
    while (atual != NULL && e > atual->exp) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual != NULL && atual->exp == e) {
        atual->coef += c;
        if (atual->coef == 0) {
            if (anterior == NULL)
                p->inicio = atual->prox;
            else
                anterior->prox = atual->prox;
            free(atual);
        }
        return (TRUE);
    }

    aux = (struct termo *)malloc(sizeof(struct termo));
    if (aux == NULL)
        return (FALSE);
    aux->coef = c;
    aux->exp = e;
    aux->prox = atual;
    if (anterior == NULL)
        p->inicio = aux;
    else
        anterior->prox = aux;
    return (TRUE);
}

void imprimePoli(polinomio p) {
    struct termo *aux = p.inicio;
    if (aux == NULL) {
        printf("0");
        return;
    }
    while (aux != NULL) {
        if (aux != p.inicio)
            printf(" + ");
        printf("%gx^%d", aux->coef, aux->exp);
        aux = aux->prox;
    }
}

void somarPoli(polinomio *a, polinomio *b, polinomio *r) {
    struct termo *aux;
    createPoli(r);
    for (aux = a->inicio; aux != NULL; aux = aux->prox)
        insertTermo(r, aux->coef, aux->exp);
    for (aux = b->inicio; aux != NULL; aux = aux->prox)
        insertTermo(r, aux->coef, aux->exp);
}

void multiplicarPoli(polinomio *a, polinomio *b, polinomio *r) {
    struct termo *i, *j;
    createPoli(r);
    for (i = a->inicio; i != NULL; i = i->prox)
        for (j = b->inicio; j != NULL; j = j->prox)
            insertTermo(r, i->coef * j->coef, i->exp + j->exp);
}

void derivarPoli(polinomio *a, polinomio *r) {
    struct termo *aux;
    createPoli(r);
    for (aux = a->inicio; aux != NULL; aux = aux->prox)
        if (aux->exp != 0)
            insertTermo(r, aux->coef * aux->exp, aux->exp - 1);
}
