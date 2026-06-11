// problem: 2395 - Transporte de Contêineres

#include <bits/stdc++.h>
int main() {
    int a, b, c, x, y, z, result;

    scanf("%i %i %i", &a, &b, &c);
    scanf("%i %i %i", &x, &y, &z);

    result = (x / a) * (y / b) * (z / c);

    printf("%i\n", result);

    return 0;
}
