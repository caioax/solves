// problem: 1014 - Consumo

#include <bits/stdc++.h>
int main() {
    int x;
    double y, result;

    scanf("%i", &x);
    scanf("%lf", &y);

    result = x / y;

    printf("%.3lf km/l\n", result);

    return 0;
}
