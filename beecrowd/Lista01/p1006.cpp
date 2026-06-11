// problem: 1006 - Média 2

#include <bits/stdc++.h>
int main() {
    double n1, n2, n3, m, p1, p2, p3;

    p1 = 2;
    p2 = 3;
    p3 = 5;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);

    m = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);

    printf("MEDIA = %.1lf\n", m);

    return 0;
}
