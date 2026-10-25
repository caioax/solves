#include "pilha.h"
#include <bits/stdc++.h>

int main() {
    int n;
    pilha p1;
    create(&p1);
    push(&p1, 1);
    push(&p1, 2);
    push(&p1, 3);
    push(&p1, 4);
    printf("Topo: %d\n", topo(p1));
    if (!isEmpty(p1)) {
        while (!isEmpty(p1)) {
            pop(&p1, &n);
            printf("Desempilhou: %d\n", n);
        }
    }
}
