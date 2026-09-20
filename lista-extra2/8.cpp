#include <bits/stdc++.h>
using namespace std;

int DIVS(int n, int* max, int* min) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            *max = i;
            *min = n / i;
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    int max, min;
    int resultado;

    cout << "Digite um numero inteiro: ";
    cin >> n;

    resultado = DIVS(n, &max, &min);

    if (resultado == 0) {
        cout << "\nO numero " << n << " e PRIMO." << endl;
    } else {
        cout << "\nO numero " << n << " NAO e primo." << endl;
        cout << "Menor divisor (max) = " << max << endl;
        cout << "Maior divisor (min) = " << min << endl;
    }

    return 0;
}
