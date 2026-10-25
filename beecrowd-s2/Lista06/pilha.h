#include <cstdlib>

#define TRUE 1
#define FALSE 0

struct no {
    int dado;
    struct no *prox;
};

typedef struct {
    struct no *topo;
} pilha;

void create(pilha *s) { s->topo = NULL; }

int push(pilha *s, int d) {
    struct no *aux;
    aux = (struct no *)malloc(sizeof(struct no));
    if (aux == NULL)
        return (FALSE);
    aux->dado = d;
    aux->prox = s->topo;
    s->topo = aux;
    return (TRUE);
}

int pop(pilha *s, int *d) {
    struct no *aux;
    if (s->topo == NULL)
        return (FALSE);
    aux = s->topo;
    s->topo = (s->topo)->prox;
    *d = aux->dado;
    free(aux);
    return (TRUE);
}

int isEmpty(pilha s) {
    if (s.topo == NULL)
        return TRUE;
    return FALSE;
}

int topo(pilha s) { return s.topo->dado; }

// Funcoes Pilha ------------

int contaNos(pilha s) {
    struct no *aux = s.topo;
    int c = 0;
    while (aux != NULL) {
        c++;
        aux = aux->prox;
    }
    return c;
}

int somaNos(pilha s) {
    struct no *aux = s.topo;
    int soma = 0;
    while (aux != NULL) {
        soma = soma + aux->dado;
        aux = aux->prox;
    }
    return soma;
}

// Valor do último nó (o do fundo da pilha)
int ultimoValor(pilha s) {
    struct no *aux = s.topo;
    if (aux == NULL)
        return 0;
    while (aux->prox != NULL)
        aux = aux->prox;
    return aux->dado;
}

// Valor do penúltimo nó (o logo acima do fundo)
int penultimoValor(pilha s) {
    struct no *aux = s.topo;
    if (aux == NULL || aux->prox == NULL)
        return 0;
    while (aux->prox->prox != NULL)
        aux = aux->prox;
    return aux->dado;
}

int primeiroValor(pilha s) {
    if (s.topo == NULL)
        return 0;
    return s.topo->dado;
}

int segundoValor(pilha s) {
    if (s.topo == NULL || s.topo->prox == NULL)
        return 0;
    return s.topo->prox->dado;
}
