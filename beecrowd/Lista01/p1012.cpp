// problem: 1012 - Área

#include <bits/stdc++.h>
int main() {
    double A, B, C, pi, triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%lf %lf %lf", &A, &B, &C);

    // Área do triangulo A = base; C = altura;
    triangulo = A * C / 2;

    // Área do círculo C = raio;
    pi = 3.14159;
    circulo = pi * (pow(C, 2));

    // Área do trapézio A e B = bases; C = altura;
    trapezio = (A + B) * C / 2;

    // Área do quadrado B = lado;
    quadrado = pow(B, 2);

    // Área do retangulo A e B = lados;
    retangulo = A * B;

    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);

    return 0;
}
