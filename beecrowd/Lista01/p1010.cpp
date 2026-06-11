// problem: 1010 - Cálculo Simples

#include <bits/stdc++.h>
int main() {
    int id1, id2, quantidade1, quantidade2;
    double valor1, valor2, total;

    scanf("%i %i %lf", &id1, &quantidade1, &valor1);
    scanf("%i %i %lf", &id2, &quantidade2, &valor2);

    total = valor1 * quantidade1 + valor2 * quantidade2;

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
