// problem: 1018 - Cédulas

#include <bits/stdc++.h>

// Variáveis globais
int division, rest;

// Calcula quantas notas inteiras de certo valor gasta, e qual o resto da
// divisão
void calc(int target) {
    division = rest / target;  // Divide o resto, que equivale ao valor que
                               // ainda falta "distribuir", em notas

    rest = rest % target;  // Atualiza o rest para o novo valor restante
}

int main() {
    int x;

    scanf("%i", &x);

    rest = x;  // Variável rest recebe x, por que usaremos ela para calcular

    int values[7] = {100, 50, 20, 10, 5, 2, 1};

    printf("%i\n", x);
    for (int value : values) {
        calc(value);
        printf("%i nota(s) de R$ %i,00\n", division, value);
    }

    return 0;
}
