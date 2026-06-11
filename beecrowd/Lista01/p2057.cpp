// problem: 2057 - Fuso Horário

#include <bits/stdc++.h>
int main() {
    double s, t, f, result;
    int soma, delta;

    scanf(
        "%lf %lf"
        "%lf",
        &s,
        &t,
        &f);

    soma = s + t + f + 24;

    delta = soma / 24;

    result = soma - (delta * 24);

    printf("%.0lf\n", result);

    return 0;
}
