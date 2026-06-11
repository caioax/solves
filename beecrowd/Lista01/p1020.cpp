// problem: 1020 - Idade em Dias

#include <bits/stdc++.h>

// Variáveis globais
int division, rest;

// Simplemente fac uma divisão e guarda os valores nas variáveis globais
void calc(int target) {
    division = rest / target;
    rest = rest % target;
}

int main() {
    int n;
    int dividers[3] = {
        // Divisores para converter dias em anos, meses e dias
        365,
        30,
        1,
    };

    scanf("%i", &n);

    rest =
        n;  // Assim como no problema das notas, vamos usar o rest para calcular

    for (int i = 0; i < 3; i++) {
        calc(dividers[i]);  // Calcula o valor de anos ou meses ou dias
        switch (i) {        // Usando Switch para variar dos arrays :)
            case 0:
                printf("%i ano(s)\n", division);
                break;
            case 1:
                printf("%i mes(es)\n", division);
                break;
            case 2:
                printf("%i dia(s)\n", division);
                break;
        }
    }

    return 0;
}
