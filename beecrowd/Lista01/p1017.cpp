// problema: 1017 - Gasto de Combustível

#include <bits/stdc++.h>
int main() {
    int time;
    double distance, result;

    scanf("%i", &time);
    scanf("%lf", &distance);

    result = distance * time / 12;

    printf("%.3lf\n", result);

    return 0;
}
