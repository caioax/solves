// problem: 1007 - Diferença

#include <bits/stdc++.h>
int main() {
    int A, B, C, D, difference;

    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);
    scanf("%i", &D);

    difference = A * B - C * D;

    printf("DIFERENCA = %i\n", difference);

    return 0;
}
