// problem: 1005 - Média 1

#include <bits/stdc++.h>
int main() {
    double n1, n2, m, p1, p2;

    p1 = 3.5;
    p2 = 7.5;

    scanf("%lf", &n1);
    scanf("%lf", &n2);

    m = ((n1 * p1) + (n2 * p2)) / 11;

    printf("MEDIA = %.5lf\n", m);

    return 0;
}
