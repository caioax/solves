// problem: 1019 - Conversão de Tempo

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
        // Divisores para converter segundos em Horas, minutos e segundos
        3600,
        60,
        1,
    };

    int time[3];  // Array que irá guardar o tempo {horas, minutos, segundos};

    scanf("%i", &n);

    rest =
        n;  // Assim como no problema das notas, vamos usar o rest para calcular

    for (int i = 0; i < 3; i++) {
        calc(dividers[i]);   // Calcula o valor de horas ou minutos ou segundos
        time[i] = division;  // Guarda o valor no array
    }
    printf("%i:%i:%i\n", time[0], time[1], time[2]);

    return 0;
}
