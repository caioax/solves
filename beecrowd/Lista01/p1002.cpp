// problem: 1002 - Area do Circulo

#include <bits/stdc++.h>
int main() {
    double r, pi, area;
    pi = 3.14159;

    scanf("%lf", &r);
    area = pi * r * r;
    printf("A=%.4lf\n", area);

    return 0;
}
