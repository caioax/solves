#include <bits/stdc++.h>
using namespace std;

void ORDENA(int* A, int* B, int* C) {
    int aux;

    if (*A > *B) {
        aux = *A;
        *A = *B;
        *B = aux;
    }

    if (*B > *C) {
        aux = *B;
        *B = *C;
        *C = aux;
    }

    if (*A > *B) {
        aux = *A;
        *A = *B;
        *B = aux;
    }
}

int main() {
    int A, B, C;

    cout << "Digite o primeiro numero: ";
    cin >> A;
    cout << "Digite o segundo numero: ";
    cin >> B;
    cout << "Digite o terceiro numero: ";
    cin >> C;

    ORDENA(&A, &B, &C);

    cout << "\nNumeros ordenados: " << A << " " << B << " " << C << "\n";

    return 0;
}
