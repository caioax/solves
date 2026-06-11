// problem: 1021 - Notas e Moedas

#include <bits/stdc++.h>

// Variáveis globais
int division, rest_banknotes, rest_coins;

// Calcula quantas notas ou moedas usa
void calc(int target, bool is_coins) {
    // Usa o rest_banknotes ou rest_coins de acordo com o parâmetro is_coins
    if (!is_coins) {
        division = rest_banknotes / target;
        rest_banknotes = rest_banknotes % target;
    } else {
        division = rest_coins / target;
        rest_coins = rest_coins % target;
    }
}

int main() {
    double x;

    scanf("%lf", &x);

    // Variável rest_banknotes recebe x, por que usaremos ela para calcular
    rest_banknotes = x;
    // Guarda o resto de centavos (Trasformados em inteiros para usar a mesma
    // lógica nas notas)
    rest_coins = (x - rest_banknotes) * 100;

    // Lista dos valores das notas
    int values_banknotes[6] = {100, 50, 20, 10, 5, 2};

    // Lista dos valores das moedas
    // Moeda de 1 não estão na lista por que recebe tratamento especial
    int values_coins[5] = {50, 25, 10, 5, 1};

    // Calcula as notas usadas
    printf("NOTAS:\n");
    for (int value : values_banknotes) {
        calc(value, false);
        printf("%i nota(s) de R$ %i.00\n", division, value);
    }

    // Calcula as moedas
    printf("MOEDAS:\n");
    // O número de moedas de 1 equivale ao rest_banknotes depois de calculado as
    // notas
    printf("%i moeda(s) de R$ 1.00\n", rest_banknotes);
    for (int value : values_coins) {
        calc(value, true);
        if (value < 10) {
            // Moedas de valores inferior a 10 centavos precisam de uma
            // formatação diferente
            printf("%i moeda(s) de R$ 0.0%i\n", division, value);
        } else {
            printf("%i moeda(s) de R$ 0.%i\n", division, value);
        }
    }

    return 0;
}
