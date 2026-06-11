// problem: 1011 - Esfera

#include <bits/stdc++.h>
int main() {
    double pi, raio, volume;
    pi = 3.14159;

    scanf("%lf", &raio);

    raio = pow(raio, 3);
    volume = (4.0 / 3.0) * pi * raio;

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
