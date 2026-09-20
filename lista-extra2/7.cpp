#include <bits/stdc++.h>
using namespace std;

void CALCULA(int* X, int* Y) {
    int soma = *X + *Y;
    int sub = *X - *Y;

    *X = soma;
    *Y = sub;
}

int main() {
    int X, Y;

    cout << "Digite o valor de X: ";
    cin >> X;
    cout << "Digite o valor de Y: ";
    cin >> Y;

    CALCULA(&X, &Y);

    cout << "\nApos CALCULA:\n";
    cout << "X = " << X << " (soma)\n";
    cout << "Y = " << Y << " (subtracao)\n";

    return 0;
}
