#define TRUE 1
#define FALSE 0
struct no
{
    int dado;
    struct no *prox;
    struct no *ant;
};
typedef struct
{
    struct no *inicio;
    struct no *fim;
} listaCDE;

void create(listaCDE *q)
{
    q->inicio = NULL;
}
int isEmpty(listaCDE q)
{
    if (q.inicio == NULL)
        return (TRUE);
    else

        return (FALSE);
}

int insert(listaCDE *q, int d)
{
    struct no *aux;
    if (q->inicio == NULL)
    {
        aux = (struct no *)malloc(sizeof(struct no));
        aux->dado = d;
        q->inicio = aux;
        q->fim = aux;
        aux->prox = aux;
        aux->ant = aux;
        return (TRUE);
    }
    aux = (struct no *)malloc(sizeof(struct no));
    aux->dado = d;
    aux->prox = q->inicio;
    aux->ant = q->fim;
    q->fim->prox = aux;
    q->fim = aux;
    q->inicio->ant = q->fim;
    return (TRUE);
}

void imprime(listaCDE q, char modo)
{
    struct no *aux;
    if (!isEmpty(q))
    {
        if (modo == 'i')
        {
            aux = q.inicio;
            if (aux != q.fim)
            {
                do
                {
                    printf("%d->%d ", aux->dado, aux->prox->dado);
                    aux = aux->prox;
                } while (aux != q.inicio);
            }
            else
                printf("%d", aux->dado);
        }
        else
        {
            aux = q.fim;
            if (aux != q.inicio)
            {
                do
                {
                    printf(" %d->%d ", aux->dado, aux->ant->dado);
                    aux = aux->ant;
                } while (aux != q.fim);
            }
            else
                printf("%d == q->inicio->dado ", aux->dado);
        }
    }
}

int remover(listaCDE *q, int d)
{
    struct no *aux, *atual, *anterior;
    if (d == (q->inicio)->dado)
    {
        aux = q->inicio;
        if (q->inicio == q->fim)
        {
            q->inicio = NULL;
            q->fim = NULL;
        }
        else
        {
            q->inicio = q->inicio->prox;
            q->fim->prox = q->inicio;
            q->inicio->ant = aux->ant;
        }
        free(aux);
        return (TRUE);
    }
    else
    {
        anterior = q->inicio;
        atual = q->inicio->prox;
        while (atual != q->inicio && atual->dado != d)
        {
            anterior = atual;
            atual = atual->prox;
        }
        if (atual != q->inicio)
        {
            aux = atual;
            anterior->prox = atual->prox;
            atual->prox->ant = atual->ant;
            if (atual->prox == q->inicio)
                q->fim = anterior;
            free(aux);
            return (TRUE);
        }
    }
    return (FALSE);
}
