// problem: 1008 - Salário

#include <bits/stdc++.h>
int main() {
    int id;
    double horas, valor_por_hora, salario;

    scanf("%i", &id);
    scanf("%lf", &horas);
    scanf("%lf", &valor_por_hora);

    salario = horas * valor_por_hora;

    printf("NUMBER = %i\n", id);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}
