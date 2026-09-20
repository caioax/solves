#include <bits/stdc++.h>
using namespace std;

int COMPARA(int n1, int n2, int* soma, int* produto) {
    long long s = (long long)n1 + (long long)n2;
    long long p = (long long)n1 * (long long)n2;

    if (s > INT_MAX || s < INT_MIN || p > INT_MAX || p < INT_MIN) {
        *soma = 0;
        *produto = 0;
        return -1;
    }

    *soma = (int)s;
    *produto = (int)p;

    if (n1 == n2)
        return 1;
    else
        return 0;
}

int main() {
    int n1, n2;
    int soma, produto;
    int resultado;

    cout << "Digite o primeiro numero inteiro: ";
    cin >> n1;
    cout << "Digite o segundo numero inteiro: ";
    cin >> n2;

    resultado = COMPARA(n1, n2, &soma, &produto);

    if (resultado == -1) {
        cout << "\nERRO: a soma ou o produto estourou a faixa dos inteiros."
             << endl;
    } else {
        if (resultado == 1)
            cout << "\nOs numeros sao IGUAIS." << endl;
        else
            cout << "\nOs numeros sao DIFERENTES." << endl;

        cout << "Soma    = " << soma << endl;
        cout << "Produto = " << produto << endl;
    }

    return 0;
}
