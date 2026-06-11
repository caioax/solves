// problem: 1921 - Guilherme e Suas Pipas

#include <bits/stdc++.h>
int main() {
    double x, result;

    scanf("%lf", &x);
    x = x - 3;
    result = x + ((x + 1) * x / 2);

    printf("%.0lf\n", result);
}
