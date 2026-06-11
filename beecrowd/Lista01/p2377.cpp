// problem: 2377 - Pedágio

#include <bits/stdc++.h>
int main() {
    int l, d, k, p, result;

    scanf("%i %i", &l, &d);
    scanf("%i %i", &k, &p);

    result = ((l / d) * p) + (l * k);

    printf("%i\n", result);

    return 0;
}
