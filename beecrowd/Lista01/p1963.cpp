// problem: 1963 - O Filme

#include <bits/stdc++.h>
int main() {
    double a, b, result;

    scanf("%lf %lf", &a, &b);

    result = ((b / a) - 1) * 100;

    printf("%.2lf%\n", result);

    return 0;
}
