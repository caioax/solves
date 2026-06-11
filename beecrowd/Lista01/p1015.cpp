// problem: 1015 - Distância Entre Dois Pontos

#include <bits/stdc++.h>
int main() {
    double x1, x2, y1, y2, soma, result;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    soma = pow((x2 - x1), 2) + pow((y2 - y1), 2);
    result = sqrt(soma);

    printf("%.4lf\n", result);

    return 0;
}
